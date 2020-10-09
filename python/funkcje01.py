#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  funkcje01.py
#  


def sumuj(a, b):
    suma = a + b
    print("Suma: ", suma)


def odejmij(a, b):
    roznica = a - b
    print("Różnica: ", roznica)


def pomnoz(a, b):
    iloczyn = a * b
    print("Iloczyn: ", iloczyn)


def podziel(a, b):
    iloraz = a / b
    print("Iloraz: ", iloraz)


def podnies(podstawa, wykladnik):
    potega = podstawa**wykladnik
    print("Potęga: ", potega)


def main(args):
    liczba1 = int(input("Podaj liczbę: "))
    liczba2 = int(input("Podaj liczbę: "))
    sumuj(liczba1, liczba2)
    odejmij(liczba1, liczba2)
    pomnoz(liczba1, liczba2)
    podziel(liczba1, liczba2)
    podnies(liczba1, liczba2)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
