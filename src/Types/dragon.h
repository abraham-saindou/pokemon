#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

#include <iostream>

class Dragon{
private :
    std::string name;
    int atk, def = 10, 10;

public:
    Dragon(std::string nom, int attaque, int defense;)
    Dragon(const Dragon& dragon);
    ~Dragon()
    void get_name(){
        return name;
    };
    void set_name(){
        std::string entry;
        std::cin>>entry;
        get_name();
        name = entry
    }
    void show_data(){
        std::string sen;
    }

};
#endif