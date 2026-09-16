#ifndef MAIN_H
#define MAIN_H

#include <string>
#include <fstream>
#include <unordered_map>

struct EntradaTS {
    std::string lexema;
};

extern std::unordered_map<std::string, EntradaTS> tabla_simbolos;
extern int LINEA_ACTUAL;
extern std::ifstream archivo;

#endif
