//
// Created by kubun on 06/03/23.
//
#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H
#include <iostream>

class Pokemon{
private:
    std::string pokename;
    int HP = 100;
public:
    int Level, Attack;
    int Defence = 0;
    int Accurracy;
    Pokemon(std::string Name, int Atk, int Lev, int Precision);
    Pokemon(const Pokemon &pokemon);
    ~Pokemon();

    std::string get_pokename();
    std::string set_pokename();
    int get_Attack() const;
    int get_Defence() const;

    void show_data();
};


#endif //POKEMON_POKEMON_H
