import random
from pokemon import *


class Dragon(Pokemon):
    def __init__(self, name, atk, level, accurracy):
        self.__type = "Dragon"
        self.__atk = self.__def = 10
        Pokemon.__init__(self, name, atk, level, accurracy)

    def show_infos(self):
        pass

    def get_type(self):
        return self.__type

    def get_def(self):
        return self.__def

    def add_def(self):
        self.get_def()
        self.defence += self.__def
        print(f"Defence = {self.defence}")


Draco = Dragon("Draco", 100, 1, 100)
Draco.add_def()
