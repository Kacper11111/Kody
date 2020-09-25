#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  iloczyn_parzyste.py
#

def main(args):
    iloczyn = 1
    for i in range(10):
        l1 = int(input("Podaj liczbę "))
        iloczyn = iloczyn * l1
    print(iloczyn)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
    
