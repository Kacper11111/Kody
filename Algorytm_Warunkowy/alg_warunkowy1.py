#
#  alg_warunkowy.py
# 


def main(args):
    
    wynik = int(input("Podaj wynik! "))
    print("Twój wynik to: ", wynik)
    
    if wynik < 0 or wynik > 60:
        print("Błędne dane!")
    
    elif wynik < 20:
        print("Grupa podstawowa!")
    
    elif wynik <=40:
        print("Grupa średniozaawansowana!")
    
    else:
        print("Grupa zaawansowana!")
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
