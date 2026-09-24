/*
***********************************************************************
Assignment 49
Assignment Name: Decision Making / Conditional Statements

Question 4:

A traffic police app records whether a rider violated rules. Each violation
has a fixed fine.

If multiple violations happen, fines should be added.

Fines:

    No helmet → ₹500

    No license → ₹1000

    Overspeeding → ₹1500

Input:

    Helmet worn (Yes/No)

    License available (Yes/No)

    Overspeeding (Yes/No)

Validations:

    Inputs must be Yes/No only

Expected Output:

    Total Fine Amount: ₹<amount>
***********************************************************************
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char cHelmet[20];
    char cLicense[20];
    char cOverSpeeding[20];

    int iFine = 0;

    printf("Helmet worn (Yes/No): ");
    scanf("%s", cHelmet);

    printf("License available (Yes/No): ");
    scanf("%s", cLicense);

    printf("Overspeeding (Yes/No): ");
    scanf("%s", cOverSpeeding);

    if((strcmp(cHelmet, "Yes") != 0 && strcmp(cHelmet, "No") != 0) ||
    (strcmp(cLicense, "Yes") != 0 && strcmp(cLicense, "No") != 0) ||
    (strcmp(cOverSpeeding, "Yes") != 0 && strcmp(cOverSpeeding, "No") != 0))
    {
        printf("Invalid Input: Inputs must be Yes/No only.\n");
    }
    else
    {
        if(strcmp(cHelmet, "No") == 0)
        {
            iFine += 500;    
        }
        
        if(strcmp(cLicense,"No") == 0)
        {
            iFine += 1000;
        }
        
        if(strcmp(cOverSpeeding, "Yes") == 0)
        {
            iFine += 1500;
        }

        printf("Total Fine Amount: ₹%d\n", iFine);
    }

    return 0;
}