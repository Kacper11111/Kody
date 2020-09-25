#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma_parzyste.py
#

def main(args):
    poczatek = int(input("Podaj liczbę początkową: ")) 
    koniec = int(input("Podaj liczbę końcową: ")) 
    suma = 0
    for liczba in range(poczatek, koniec + 1):
        if liczba % 2 == 0:
            suma = suma + liczba
    print(suma)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
    
