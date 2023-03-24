import random
import sys


class Pokemon:
    def __init__(self, name, atk, level, accuracy):
        self.__name = name
        self.__hp = 100
        self.attack = atk
        self.defence = 0
        self.level = level
        self.accuracy = accuracy

    def get_name(self):
        return self.__name

    def get_hp(self):
        return self.__hp

    def set_name(self):
        self.get_name()
        newname = input("Entrer le nouveau nom du pokémon.")
        self.__name = newname

    def set_hp(self):
        self.get_hp()


