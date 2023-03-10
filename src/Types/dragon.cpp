#include "dragon.h"
#include <iostream>
#include <utility>

Pokemon::Pokemon(std::string name, int Atk, int Lev, int Precision) : pokename(std::move(name)), Attack(Atk), Level(Lev), Accurracy(Precision){};;
Dragon::Dragon(const Dragon &dragon) {};
Dragon::~Dragon() = default;

std::string Pokemon::get_pokename(){
    return Pokemon::pokename;
};
std::string Pokemon::set_pokename() {
    std::string newname;
    std::cin>>newname;
    Pokemon::get_pokename();
    pokename = newname;
    return pokename;
};
int Dragon::get_atk() {
    return Dragon::atk;
}
int Dragon::get_def() {
    return Dragon::def;
}

void Pokemon::show_data() {
    Pokemon::get_pokename();
};

int main(){
    Dragon Carcha {"Carchacrok", 100, 1, 100};
    Carcha.get_pokename();
    return 0;
}
