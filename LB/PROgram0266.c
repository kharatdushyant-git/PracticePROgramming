/*
***********************************************************************
Assignment 51
Assignment Name: Logic Building Assignment

Question 1:

A hospital bill includes consultation + medicine + room charges per day.
If insured, insurance covers up to ₹50,000 or 70% of bill (whichever is lower).
ICU ward costs extra.

Input:
    days, wardType(Normal/ICU), medicineBill, consultationFee, insured(Yes/No)

Output:
    totalBill, insuranceCover, finalPay

Validations:
    all non-negative, wardType valid
***********************************************************************
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int iDays = 0;
    double dMedicineBill = 0.0;
    double dConsultationFee = 0.0;
    double dRoomCharge = 0.0;
    double dTotalBill = 0.0;
    double dInsuranceCover = 0.0;
    double dFinalPay = 0.0;

    char szWardType[20] = "";
    char szInsured[10] = "";

    /* Default room charges because the question does not specify them */
    double dNormalRoomCharge = 1000.0;
    double dIcuRoomCharge = 2000.0;

    printf("Enter number of days: ");
    scanf("%d", &iDays);

    printf("Enter ward type (Normal/ICU): ");
    scanf("%s", szWardType);

    printf("Enter medicine bill: ");
    scanf("%lf", &dMedicineBill);

    printf("Enter consultation fee: ");
    scanf("%lf", &dConsultationFee);

    printf("Insured (Yes/No): ");
    scanf("%s", szInsured);

    if (iDays < 0 || dMedicineBill < 0 || dConsultationFee < 0)
    {
        printf("Invalid Input: Values cannot be negative.\n");
    }
    else if (strcmp(szWardType, "Normal") != 0 &&
             strcmp(szWardType, "ICU") != 0)
    {
        printf("Invalid Input: Ward type must be Normal or ICU.\n");
    }
    else if (strcmp(szInsured, "Yes") != 0 &&
             strcmp(szInsured, "No") != 0)
    {
        printf("Invalid Input: Insurance must be Yes or No.\n");
    }
    else
    {
        if (strcmp(szWardType, "ICU") == 0)
        {
            dRoomCharge = iDays * dIcuRoomCharge;
        }
        else
        {
            dRoomCharge = iDays * dNormalRoomCharge;
        }

        dTotalBill = dMedicineBill + dConsultationFee + dRoomCharge;

        if (strcmp(szInsured, "Yes") == 0)
        {
            dInsuranceCover = dTotalBill * 0.70;

            if (dInsuranceCover > 50000)
            {
                dInsuranceCover = 50000;
            }
        }

        dFinalPay = dTotalBill - dInsuranceCover;

        printf("\nTotal Bill: ₹%.2lf\n", dTotalBill);
        printf("Insurance Cover: ₹%.2lf\n", dInsuranceCover);
        printf("Final Pay: ₹%.2lf\n", dFinalPay);
    }

    return 0;
}