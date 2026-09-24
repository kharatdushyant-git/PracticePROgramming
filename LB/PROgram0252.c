/*

Assignment 48

Question 2:
A bank ATM must follow strict safety rules to avoid fraud and ensure
customers maintain a minimum balance.

A customer inserts the card, checks their balance, and requests
a withdrawal.

The ATM must either approve the request and update the balance
or reject it and show the correct reason.

Rules:
- Withdrawal amount must be a multiple of Rs.100
- Maximum withdrawal per transaction is Rs.25,000
- After withdrawal, balance must remain at least Rs.1,000

Input:
Line 1: current balance (integer)
Line 2: requested withdrawal amount (integer)

Validations:
If balance < 0 or withdrawAmount <= 0 -> invalid input

Expected Output:
If successful:
Transaction Successful.
Remaining Balance: <newBalance>

If failed:
Transaction Failed: <Reason>

*/

#include<stdio.h>

int main()
{
    int iCurrent = 0;
    int iWithdraw = 0;
    int inewBalance = 0;

    printf("Enter your Current Balance : ");
    scanf("%d",&iCurrent);

    printf("Enter Amount to Withdraw : ");
    scanf("%d",&iWithdraw);

    if(iCurrent <= 0 || iWithdraw <= 0)
    {
        printf("Invalid Data Entered\n");
    }
    else if(iWithdraw % 100 != 0)
    {
        printf("Transcation Failed : Withdraw must be Multiple of Rs.100\n");
    }
    else if(iWithdraw > 25000)
    {
        printf("Transcation Failed : Maximum Amount of withdrawl is Rs.25000\n");   
    }
    else
    {
        inewBalance = iCurrent - iWithdraw;

        if(inewBalance <= 1000)
        {
            printf("Unable to withdraw Minimun balance should be Rs.1000\n");
        }

        printf("Transaction Succesfull...\n");
        printf("Current Balance After Withdrawl : %d Rs",inewBalance);
    }

    return 0;
}