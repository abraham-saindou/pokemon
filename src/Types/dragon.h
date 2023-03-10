//
// Created by kubun on 06/03/23.
//
#ifndef DRAGON_DRAGON_H
#define DRAGON_DRAGON_H

#include <iostream>
#include <utility>
#include <vector>
#include "../pokemon.h"



class Dragon: public Pokemon
{
private :
    int atk, def = 10;
    std::string type = "Dragon";

public:
    Dragon(std::string name, int atk, int lev, int precision) : Pokemon(std::move(name), atk, lev, precision){};
    Dragon(const Dragon &dragon);
    ~Dragon();

    int get_atk();
    int get_def();
    int add_atk();
    int add_def();

};
#endif