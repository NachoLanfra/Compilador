%{
#include <iostream>
#include "main.h"     /* EntradaTS, tabla_simbolos, LINEA_ACTUAL */

int yylex();
void yyerror(const char *s);
%}

%union {
    EntradaTS *ts_ref;
}

%token <ts_ref> ID CTE_INT CTE_FLOAT CTE_STR
%token PR_IF PR_ELSE PR_END_IF PR_BEGIN PR_END
%token PR_POUT PR_RET PR_CLASS PR_FUNCTION PR_USHORTINT PR_DOUBLEF
%token PR_EXTENDS PR_TYPEDEF PR_REPEAT PR_WHILE
%token OP_ASIGNACION OP_IGUAL_IGUAL OP_MENOR_IGUAL OP_MAYOR_IGUAL OP_DISTINTO

%left '+' '-'
%left '*' '/'

%%

prog : ID sent_decl_lista PR_BEGIN sent_ejec_lista PR_END
       { std::cout << "Se reconocio un programa" << std::endl; }
     ;

/* ---------- sentencias declarativas ---------- */

sent_decl_lista : sent_decl_lista sent_decl
                |
                ;

sent_decl : decl_variables
          | decl_funcion
          | decl_clase
          | decl_objeto
          | decl_typedef
          ;

tipo : PR_USHORTINT
     | PR_DOUBLEF
     ;

lista_ids : lista_ids ',' ID
          | ID
          ;

decl_variables : tipo lista_ids ';'
               ;

lista_params_formales : lista_params_formales ',' tipo ID
                       | tipo ID
                       ;

decl_funcion : tipo PR_FUNCTION ID '(' lista_params_formales ')'
               sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'
             ;

decl_clase : PR_CLASS ID PR_BEGIN clase_item_lista PR_END ';'
           ;

clase_item_lista : clase_item_lista clase_item
                  | clase_item
                  ;

clase_item : tipo ID ';'
           | tipo ID '(' lista_params_formales ')' sent_decl_lista PR_BEGIN sent_ejec_lista PR_END ';'
           | extends_clause
           ;

extends_clause : PR_EXTENDS lista_ids ';'
                ;

decl_objeto : ID lista_ids ';'
            ;

decl_typedef : PR_TYPEDEF ID '=' '[' lista_valores ']' ';'
             ;

lista_valores : lista_valores ',' cte
              | cte
              ;

/* ---------- sentencias ejecutables ---------- */

sent_ejec_lista : sent_ejec_lista sent_ejec
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
           ;

asignacion_atributo : ID '.' ID '=' expresion ';'
                    | ID '[' indice ']' '=' expresion ';'
                    ;

indice : CTE_INT
       | ID
       ;

retorno : PR_RET '(' expresion ')' ';'
        ;

pout : PR_POUT '(' CTE_STR ')' ';'
     | PR_POUT '(' expresion ')' ';'
     ;

bloque_sent_ejec : sent_ejec
                 | PR_BEGIN sent_ejec_lista PR_END
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

seleccion : PR_IF '(' condicion ')' bloque_sent_ejec PR_END_IF ';'
          | PR_IF '(' condicion ')' bloque_sent_ejec PR_ELSE bloque_sent_ejec PR_END_IF ';'
          ;

repeat_while : PR_REPEAT bloque_sent_ejec PR_WHILE '(' condicion ')' ';'
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
       | '-' cte
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
             | '-' cte
             | invocacion
             | acceso_objeto
             ;

cte : CTE_INT
    | CTE_FLOAT
    ;

invocacion : ID '(' lista_params_reales ')' lista_ctes_opcional
           ;

lista_params_reales : lista_params_reales ',' expresion
                     | expresion
                     ;

lista_ctes_opcional : '[' lista_constantes ']'
                     |
                     ;

lista_constantes : lista_constantes ',' CTE_INT
                  | CTE_INT
                  ;

acceso_objeto : ID '.' ID llamada_opcional
              | ID '[' indice ']'
              ;

llamada_opcional : '(' lista_params_reales ')'   /* b1.m(1$i, x) -> metodo */
                  |                              /* b1.a        -> atributo */
                  ;

%%

void yyerror(const char *s) {
    std::cerr << "Linea " << LINEA_ACTUAL << ": Error: " << s << std::endl;
}
