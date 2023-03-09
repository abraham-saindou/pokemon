//
// Created by kubun on 06/03/23.
//
#include <iostream>
#include <utility>
#include "pokemon.h"

Pokemon::Pokemon(std::string name, int atk, int Lev, int Precision) : pokename(std::move(name)), Attack(atk), Level(Lev), Accurracy(Precision){};

std::string Pokemon::get_pokename() const {
    return Pokemon::pokename;
}
std::string Pokemon::set_pokename() {
    std::string newname;
    std::cin>>newname;
    Pokemon::get_pokename();
    pokename = newname;
    return pokename;
}
void Pokemon::show_data() const {
    std::cout<<"Level is "<<Level;
}

Pokemon::Pokemon(const Pokemon &pokemon) {

}

Pokemon::~Pokemon() = default;

int main(){
    Pokemon Dracaufeu {"Dracaufeu", 100, 1, 100};
    Dracaufeu.set_pokename();
    Dracaufeu.show_data();
    return 0;
}
