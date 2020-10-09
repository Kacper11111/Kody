#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  funkcje03.py
#  

def zwieksz(a):
    a += 2
    print(a)
    
    
def zwieksz2(b):
    b[0] += 2
    print(b[0])
    
    
def main(args):
    a = int(input("podaj liczbę: "))
    print(a)
    zwieksz(a)
    print(a)
    
    b = [1]
    b[0] = int(input("podaj liczbę: "))
    zwieksz2(b)
    print(b)
    return 0
    
    
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
