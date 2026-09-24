/*
***********************************************************************
Assignment 49
Assignment Name: Decision Making / Conditional Statements

Question 2:

A bank wants to quickly decide whether a customer is eligible for a personal loan.

The system checks the applicant’s details and either approves the loan or rejects
with the exact reason.

Eligibility Conditions:

    Age 21 to 60 inclusive

    Monthly income ≥ ₹25,000

    Credit score ≥ 700

    Must NOT have an existing unpaid loan

Input:

    Age

    Monthly income

    Credit score

    Existing unpaid loan (Yes/No)

Validations:

    Age/income/score must be non-negative

    Yes/No must be valid

Expected Output:

    Loan Approved

OR

    Loan Rejected: <specific reason>
***********************************************************************
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int iAge = 0;
    double dIncome = 0.0;
    int iCreditScore = 0;
    char Loan[20];

    printf("Enter your Age : ");
    scanf("%d",&iAge);

    printf("Enter your Income : ");
    scanf("%lf",&dIncome);

    printf("Enter your Credit Score : ");
    scanf("%d",&iCreditScore);

    printf("Existing unpaid loan (Yes/No) : ");
    scanf("%s",Loan);

    if(iAge < 0 || dIncome < 0 || iCreditScore < 0)
    {
        printf("Invalid Input: Age/income/score must be non-negative.\n");
    }
    else if(strcmp(Loan, "Yes") != 0 && strcmp(Loan, "No") != 0)
    {
        printf("Invalid Input: Yes/No must be valid.\n");
    }
    else if(iAge < 21 || iAge > 60)
    {
        printf("Loan Rejected: Age must be between 21 and 60.\n");
    }
    else if (dIncome < 25000)
    {
        printf("Loan Rejected: Monthly income must be at least ₹25000.\n");
    }
    else if (iCreditScore < 700)
    {
        printf("Loan Rejected: Credit score must be at least 700.\n");
    }
    else if (strcmp(Loan, "Yes") == 0)
    {
        printf("Loan Rejected: Existing unpaid loan.\n");
    }
    else
    {
        printf("Loan Approved\n");
    }

    return 0;
}