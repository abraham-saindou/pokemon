#include "dragon.h"
#include <iostream>
#include <utility>

// Constructor building both classes
Pokemon::Pokemon(std::string name, int Atk, int Lev, int Precision) : pokename(std::move(name)), Attack(Atk), Level(Lev), Accurracy(Precision){};

// Getters and setters from both pkmn and dragon head files
std::string Pokemon::get_pokename(){
    return Pokemon::pokename;
};
std::string Pokemon::set_pokename() {
    std::string newname;
    std::cout<<"Enter a new name : ";
    std::cin>>newname;
    Pokemon::get_pokename();
    pokename = newname;
    return pokename;
};

int Dragon::get_atk() const {
    return Dragon::atk;
}
int Pokemon::get_Attack() const {
    return Pokemon::Attack;
};
int Pokemon::get_Defence() const {
    return Pokemon::Defence;
};
int Dragon::get_def() const {
    return Dragon::def;
}
// Add atk, def from dragon.h to private Attack and Defence to pokemon.h
int Dragon::add_atk() {
    get_atk(); get_Attack();
    Attack = Attack + atk;
    std::cout<<get_Attack();
    return Attack;
};
int Dragon::add_def() {
    get_def(); get_Defence();
    Defence = Defence + def;
    std::cout<<get_Defence();
    return Defence;
};
// Default Destructors
Pokemon::~Pokemon() = default;
Dragon::~Dragon() = default;

void Pokemon::show_data() {
    Pokemon::get_pokename();
};

int main(){
    Dragon Carcha {"Carchacrok", 100, 1, 100};
    Carcha.set_pokename();
    Carcha.add_atk();
    Carcha.add_def();
    Carcha.show_data();
    return 0;
}
