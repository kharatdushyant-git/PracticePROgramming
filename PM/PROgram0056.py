'''

Q16) Write a PROgram that accept a Charecter from user and check whether its vowel or not

'''

def ChkVowel(ch):
    if(ch == 'A' or 
       ch == 'E' or 
       ch == 'I' or
       ch == 'O' or
       ch == 'U' or
       ch == 'a' or
       ch == 'e' or
       ch == 'i' or
       ch == 'o' or
       ch == 'u' ):
       return True
    else:
        return False

def main():
    Letter = (input("Enter the Charecter : "))

    Ret = ChkVowel(Letter)

    if(Ret == True):
        print("Given Letter is Vowel")
    else:
        print("Given Letter is not Vowel")

if __name__ == "__main__":
    main()                       