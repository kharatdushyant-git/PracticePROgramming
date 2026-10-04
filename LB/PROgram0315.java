/*
Assignment 63 - Question 3

Write a Java application that accepts the name of a text file and performs analysis on its contents.

Calculate:

Total characters
Total words
Total lines
Uppercase characters
Lowercase characters
Digits
Spaces

Example:

File : Demo.txt

Characters : 250
Words      : 45
Lines      : 10
Uppercase  : 15
Lowercase  : 180
Digits     : 10
Spaces     : 35
*/

import java.io.FileInputStream;
import java.io.IOException;
import java.util.Scanner;

class Question3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        FileInputStream fis = null;

        try
        {
            System.out.println("Enter file name:");
            String FileName = sobj.nextLine();

            fis = new FileInputStream(FileName);

            int iCharacters = 0;
            int iWords = 0;
            int iLines = 0;
            int iUppercase = 0;
            int iLowercase = 0;
            int iDigits = 0;
            int iSpaces = 0;

            int iRet = 0;
            boolean bWord = false;
            boolean bContent = false;

            while((iRet = fis.read()) != -1)
            {
                char ch = (char)iRet;

                iCharacters++;
                bContent = true;

                if(ch >= 'A' && ch <= 'Z')
                {
                    iUppercase++;
                }
                else if(ch >= 'a' && ch <= 'z')
                {
                    iLowercase++;
                }
                else if(ch >= '0' && ch <= '9')
                {
                    iDigits++;
                }
                else if(ch == ' ')
                {
                    iSpaces++;
                }

                if(ch == '\n')
                {
                    iLines++;
                }

                if(ch != ' ' && ch != '\n' && ch != '\t')
                {
                    bWord = true;
                }
                else
                {
                    if(bWord)
                    {
                        iWords++;
                        bWord = false;
                    }
                }
            }

            if(bWord)
            {
                iWords++;
            }

            if(bContent)
            {
                iLines++;
            }

            System.out.println("\nFile : " + FileName);
            System.out.println();
            System.out.println("Characters : " + iCharacters);
            System.out.println("Words      : " + iWords);
            System.out.println("Lines      : " + iLines);
            System.out.println("Uppercase  : " + iUppercase);
            System.out.println("Lowercase  : " + iLowercase);
            System.out.println("Digits     : " + iDigits);
            System.out.println("Spaces     : " + iSpaces);
        }
        catch(IOException e)
        {
            System.out.println("Unable to read file");
        }
        finally
        {
            try
            {
                if(fis != null)
                {
                    fis.close();
                }
            }
            catch(IOException e)
            {
                System.out.println("Error while closing file");
            }

            sobj.close();
        }
    }
}