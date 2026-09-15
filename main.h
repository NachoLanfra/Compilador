#ifndef MAIN_H
#define MAIN_H

#include <string>
#include <fstream>
#include <unordered_map>

// Tipo de dato de la Tabla de Simbolos
// (movido acá porque lo necesitan tanto main.cpp como gramatica.y,
//  vía el %union del parser)
struct EntradaTS {
    std::string lexema;
};

extern std::unordered_map<std::string, EntradaTS> tabla_simbolos;
extern int LINEA_ACTUAL;
extern std::ifstream archivo;

#endif
