%{
#include <iostream>
#include <string>
#include "main.h"     /* EntradaTS, tabla_simbolos, LINEA_ACTUAL */

int yylex();
void yyerror(const char *s);
%}

%union {
    EntradaTS *ts_ref;
}

%token <ts_ref> ID CTE_INT CTE_FLOAT CTE_STR

%type <ts_ref> cte factor factor_restr
%token PR_IF PR_ELSE PR_END_IF PR_BEGIN PR_END
%token PR_POUT PR_RET PR_CLASS PR_FUNCTION PR_USHORTINT PR_DOUBLEF
%token PR_EXTENDS PR_TYPEDEF PR_REPEAT PR_WHILE
%token OP_ASIGNACION OP_IGUAL_IGUAL OP_MENOR_IGUAL OP_MAYOR_IGUAL OP_DISTINTO

%left '+' '-'
%left '*' '/'

%%

prog : ID sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'
       { std::cout << "Se reconocio un programa" << std::endl; }
     | ID sent_decl_lista error sent_ejec_lista PR_END ';'
      {
           std::cerr << "Linea " << LINEA_ACTUAL
                     << ": Error sintactico falta begin principal. "
                     << std::endl;
           yyerrok;
      }
     | ID sent_decl_lista PR_BEGIN sent_ejec_lista error
      {
           std::cerr << "Linea " << LINEA_ACTUAL
                     << ": Error sintactico falta end final. "
                     << std::endl;
           yyerrok;
      }
     ;
     
/* ---------- sentencias declarativas ---------- */

sent_decl_lista
    : sent_decl_lista sent_decl
    | sent_decl_lista error ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error sintactico en declaracion. "
                    << "Se descartan tokens hasta ';'."
                    << std::endl;
          yyerrok;
      }
    |
;

sent_decl : decl_variables
          | decl_funcion
          | decl_clase
          | decl_typedef
          ;

tipo : PR_USHORTINT
     | PR_DOUBLEF
     | ID
     ;

lista_ids : lista_ids ',' ID
          | ID
          ;

decl_variables 
    : tipo lista_ids ';'
    | tipo error ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL 
                    << ": Error en la lista de variables. Revise las comas y los identificadores." 
                    << std::endl;
          yyerrok;
      }
    ;

lista_params_formales : lista_params_formales ',' tipo ID
                       | tipo ID
                       ;

decl_funcion 
    : tipo PR_FUNCTION ID '(' lista_params_formales ')' sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'
    | tipo PR_FUNCTION ID error lista_params_formales ')' sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '(' antes de los parametros formales." << std::endl; 
          yyerrok; 
      }
    | tipo PR_FUNCTION ID '(' lista_params_formales error sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' despues de los parametros formales." << std::endl; 
          yyerrok; 
      }
    | tipo PR_FUNCTION ID '(' lista_params_formales ')' sent_decl_lista error sent_ejec_lista PR_END ';'
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'begin' para iniciar el cuerpo de la funcion." << std::endl; 
          yyerrok; 
      }
    ;

decl_clase 
    : PR_CLASS ID PR_BEGIN clase_item_lista PR_END ';'
    | PR_CLASS ID error clase_item_lista PR_END ';'
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'begin' en la declaracion de la clase." << std::endl; 
          yyerrok; 
      }
    | PR_CLASS ID PR_BEGIN clase_item_lista error ';'
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'end' en la declaracion de la clase." << std::endl; 
          yyerrok; 
      }
    ;

clase_item_lista : clase_item_lista clase_item
                  | clase_item
                  ;

clase_item 
    : tipo ID ';'
    | tipo ID '(' lista_params_formales ')' sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'
    | extends_clause
    | tipo ID error lista_params_formales ')' sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '(' en la declaracion del metodo." << std::endl;
          yyerrok;
      }
    | tipo ID '(' lista_params_formales error sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' despues de los parametros del metodo." << std::endl;
          yyerrok;
      }
    | tipo error ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error en la declaracion del atributo de la clase." << std::endl;
          yyerrok;
      }
    ;

extends_clause 
    : PR_EXTENDS lista_ids ';'
    | PR_EXTENDS error ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL 
                    << ": Error: Lista de clases invalida despues de la palabra 'extends'." 
                    << std::endl;
          yyerrok;
      }
    ;

decl_typedef 
    : PR_TYPEDEF ID '=' '[' lista_valores ']' ';'
    | PR_TYPEDEF ID error '[' lista_valores ']' ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '=' en la declaracion de typedef." << std::endl;
          yyerrok;
      }
    | PR_TYPEDEF ID '=' error lista_valores ']' ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta '[' para iniciar los valores del typedef." << std::endl;
          yyerrok;
      }
    | PR_TYPEDEF ID '=' '[' lista_valores error ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ']' al final de la lista de valores del typedef." << std::endl;
          yyerrok;
      }
    ;

lista_valores : lista_valores ',' cte
              | cte
              ;

/* ---------- sentencias ejecutables ---------- */

sent_ejec_lista
    : sent_ejec_lista sent_ejec
    | sent_ejec_lista error ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error sintactico en sentencia. "
                    << "Se descartan tokens hasta ';'."
                    << std::endl;
          yyerrok;
      }
    |
;

sent_ejec : asignacion
          | asignacion_atributo
          | invocacion ';'
          | seleccion
          | pout
          | retorno
          | repeat_while
          ;

asignacion : ID OP_ASIGNACION expresion ';'
             { std::cout << "Asignacion (linea " << LINEA_ACTUAL << ")" << std::endl; }
           | ID error expresion ';'
                 { 
                     std::cerr << "Linea " << LINEA_ACTUAL 
                               << ": Error: Falta el operador ':=' en la asignacion o esta mal formado." 
                               << std::endl; 
                     yyerrok; 
                 }
           | ID OP_ASIGNACION error ';'
                            { 
                                std::cerr << "Linea " << LINEA_ACTUAL 
                                          << ": Error: Falta una expresion válida." 
                                          << std::endl; 
                                yyerrok; 
                            }
          ;

asignacion_atributo : ID '.' ID '=' expresion ';'
    	  | ID '[' indice ']' '=' expresion ';'
  		  | ID '.' ID error expresion ';'
  		    {
    		      std::cerr << "Linea " << LINEA_ACTUAL 
		                    << ": Error: Falta el operador '=' en la asignacion de atributo." 
    		                << std::endl;
     		      yyerrok;
    		}
      
  		  | ID '[' indice ']' error expresion ';'
  		    {
  		        std::cerr << "Linea " << LINEA_ACTUAL 
  		                  << ": Error: Falta el operador '=' en la asignacion posicional." 
		                    << std::endl;
         		 yyerrok;
    		  }
      
          | ID '[' error ']' '=' expresion ';'
		      {
         		 std::cerr << "Linea " << LINEA_ACTUAL 
               		     << ": Error: Indice invalido o faltante dentro de los corchetes '[]'." 
                   		 << std::endl;
         		 yyerrok;
     		  }
    	  ;
    
indice : CTE_INT
       | ID
       ;

retorno 
    : PR_RET '(' expresion ')' ';'
    | PR_RET '(' expresion error ';'
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' en la sentencia ret." << std::endl; 
          yyerrok; 
      }
    ;

pout 
    : PR_POUT '(' CTE_STR ')' ';'
    | PR_POUT '(' expresion ')' ';'
    | PR_POUT '(' CTE_STR error ';'
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' en el pout." << std::endl; 
          yyerrok; 
      }
    | PR_POUT '(' expresion error ';'
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' despues de la expresion en el pout." << std::endl; 
          yyerrok; 
      }
    ;

bloque_sent_ejec : sent_ejec
                 | PR_BEGIN sent_ejec_lista PR_END ';'
                 ;

condicion : expresion comparador expresion
          ;

comparador : OP_IGUAL_IGUAL
           | OP_MENOR_IGUAL
           | OP_MAYOR_IGUAL
           | OP_DISTINTO
           | '<'
           | '>'
           ;

seleccion
    : PR_IF '(' condicion ')' bloque_sent_ejec PR_END_IF ';'
    | PR_IF '(' condicion ')' bloque_sent_ejec PR_ELSE bloque_sent_ejec PR_END_IF ';'
    | PR_IF '(' condicion error bloque_sent_ejec PR_END_IF ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error: se esperaba ')' después de la condición del IF."
                    << std::endl;
          yyerrok;
      }
    | PR_IF '(' error ')' bloque_sent_ejec PR_END_IF ';'
      {
          std::cerr << "Linea " << LINEA_ACTUAL
                    << ": Error: se esperaba una condición dentro del IF."
                    << std::endl;
          yyerrok;
      }
     | PR_IF error condicion ')' bloque_sent_ejec PR_END_IF ';'
           {
               std::cerr << "Linea " << LINEA_ACTUAL
                         << ": Error: se esperaba '()' después del IF."
                         << std::endl;
               yyerrok;
           }
     | PR_IF '(' condicion ')' bloque_sent_ejec error ';'
           {
               std::cerr << "Linea " << LINEA_ACTUAL
                         << ": Error: se esperaba End_if después del bloque de sentencias ejecutable."
                         << std::endl;
               yyerrok;
           }
     | PR_IF '(' condicion ')' error PR_END_IF ';'
           {
               std::cerr << "Linea " << LINEA_ACTUAL
                         << ": Error: se esperaba bloque de sentencia ejecutables despues del ')'."
                         << std::endl;
               yyerrok;
           }
;

repeat_while 
    : PR_REPEAT bloque_sent_ejec PR_WHILE '(' condicion ')' ';'
    | PR_REPEAT bloque_sent_ejec error '(' condicion ')' ';'
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta 'while' despues del bloque repeat." << std::endl; 
          yyerrok; 
      }
    | PR_REPEAT bloque_sent_ejec PR_WHILE '(' condicion error ';'
      { 
          std::cerr << "Linea " << LINEA_ACTUAL << ": Error: Falta ')' al final de la condicion del while." << std::endl; 
          yyerrok; 
      }
    ;

/* ---------- expresiones ---------- */

expresion : expresion '+' termino
          | expresion '-' termino
          | termino
          ;

termino : termino '*' factor
        | termino '/' factor
        | factor
        ;

factor : ID
       | cte
       | '-' CTE_INT
         {
             std::cerr << "Linea " << LINEA_ACTUAL << ": Error semantico: la constante '"
                       << $2->lexema << "' es de tipo USHORTINT (sin signo), "
                       << "no admite el signo '-'." << std::endl;
             $$ = $2; //Se guarda la cte como positiva, para futuras operaciones. Guarda un 12 por ej en vez de -12 invalido.
         }
       | '-' CTE_FLOAT
         {
             std::string lexema_neg = "-" + $2->lexema;

             auto it = tabla_simbolos.find(lexema_neg);
             if (it == tabla_simbolos.end()) {
                 EntradaTS nueva_entrada;
                 nueva_entrada.lexema = lexema_neg;
                 it = tabla_simbolos.insert({lexema_neg, nueva_entrada}).first;
             }
             $$ = &(it->second);
         }
       | invocacion
       | acceso_objeto
       | ID '=' '(' expresion_restr ')'
       ;

expresion_restr : expresion_restr '+' termino_restr
                 | expresion_restr '-' termino_restr
                 | termino_restr
                 ;

termino_restr : termino_restr '*' factor_restr
              | termino_restr '/' factor_restr
              | factor_restr
              ;

factor_restr : ID
             | cte
             | '-' CTE_INT
               {
                   std::cerr << "Linea " << LINEA_ACTUAL << ": Error semantico: la constante '"
                             << $2->lexema << "' es de tipo USHORTINT (sin signo), "
                             << "no admite el signo '-'." << std::endl;
                   $$ = $2;
               }
             | '-' CTE_FLOAT
               {
                   std::string lexema_neg = "-" + $2->lexema;

                   auto it = tabla_simbolos.find(lexema_neg);
                   if (it == tabla_simbolos.end()) {
                       EntradaTS nueva_entrada;
                       nueva_entrada.lexema = lexema_neg;
                       it = tabla_simbolos.insert({lexema_neg, nueva_entrada}).first;
                   }
                   $$ = &(it->second);
               }
             | invocacion
             | acceso_objeto
             ;

cte : CTE_INT
    | CTE_FLOAT
    ;

invocacion : ID '(' lista_params_reales ')' lista_ctes_opcional
           | ID '(' lista_params_reales error lista_ctes_opcional
             {
                 std::cerr << "Linea " << LINEA_ACTUAL 
                           << ": Error: Falta ')' en la invocacion a la funcion." 
                           << std::endl;
                 yyerrok;
             }
           ;

lista_params_reales : lista_params_reales ',' expresion
                     | expresion
                     ;

lista_ctes_opcional : '[' lista_constantes ']'
                     | '[' lista_constantes error
                       {
                           std::cerr << "Linea " << LINEA_ACTUAL
                                     << ": Error: Falta ']' en la lista de orden de evaluacion."
                                     << std::endl;
                           yyerrok;
                       }
                     |
                     ;

lista_constantes : lista_constantes ',' CTE_INT
                  | CTE_INT
                  ;

acceso_objeto : ID '.' ID llamada_opcional
              | ID '[' indice ']'
              ;

llamada_opcional : '(' lista_params_reales ')' 
                  |                 
                  ;

%%

void yyerror(const char *s) {
    errores_sintacticos++;
    std::cerr << "Linea " << LINEA_ACTUAL << ": Error: " << s << std::endl;
}
