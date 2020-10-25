#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  listy_cw2.py
#


def pobierz(lista):
    for i in range(5):
        liczba = int(input("Podaj liczbę: "))
        lista.append(liczba)
    
def suma(lista1, lista2):
    suma1 = 0
    suma2 = 0
    
    for liczba in lista1:
        suma1 += liczba
    for liczba in lista2:
        suma2 += liczba
    
    return suma1,suma2


def main(args):
    lista1 = [] 
    lista2 = []
    print("Pierwsza seria: ")
    pobierz(lista1)
    print("Druga seria: ")
    pobierz(lista2)
    print(lista1)
    print(lista2)
    suma1, suma2 = suma(lista1, lista2)
    
    print("Suma pierwszej serii to: ", suma1)
    print("Suma pierwszej serii to: ", suma2)
    
    if suma1 > suma2:
        print("Suma 1 serii jest większa")
    elif suma2 > suma1:
        print("Suma 2 serii jest większa")
    else:
        print("Sumy obydwu serii są równe")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
