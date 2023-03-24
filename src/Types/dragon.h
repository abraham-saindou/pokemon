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
    int atk =  10;
    int def = 10;
    std::string type = "Dragon";

public:
    Dragon(std::string name, int atk, int lev, int precision) : Pokemon(std::move(name), atk, lev, precision){};
    ~Dragon();

    int get_atk() const;
    int get_def() const;
    int add_atk();
    int add_def();

};
#endif