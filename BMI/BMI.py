#
#  BMI.py
#


def main(args):
    
    masa = int(input("Podaj masę ciała (kg) "))
    print("Podana masa to: ", masa, "kg")
    
    wzrost = int(input("Podaj wzrost (cm) "))
    print("Podany wzrost to: ", wzrost, "cm")
    wzrostM = wzrost * 0.01
    
    BMI = masa / (wzrostM ** 2)
    print("Twoje BMI wynosi: ", BMI)
    
    if BMI < 0:
        print("Błędne dane!")
	
    elif BMI >= 0 and BMI < 18.5:
        print("NIEDOWAGA")
    
    elif BMI >= 18.5 and BMI < 25:
        print("NORMA")
	
    elif BMI >= 25 and BMI < 30:
        print("NADWAGA")
	
    elif BMI >= 30 and BMI <= 50:
        print("OTYŁOŚĆ")
	
    else: 
        print("Błędne dane!")
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
