/*
***********************************************************************
Assignment 51
Assignment Name: Logic Building Assignment

Question 4:

Water Bill with Progressive Slabs + Late Fee

Slabs + fixed meter charge. If paid after due date, add 2% penalty
per week late (max 10%).

Input:
    units, weeksLate

Output:
    billAmount
***********************************************************************
*/

#include <stdio.h>

int main()
{
    int iUnits = 0;
    int iWeeksLate = 0;

    double dBillAmount = 0.0;
    double dLatePenalty = 0.0;

    double dMeterCharge = 50.0;

    printf("Enter water units consumed: ");
    scanf("%d", &iUnits);

    printf("Enter number of weeks late: ");
    scanf("%d", &iWeeksLate);

    if (iUnits < 0 || iWeeksLate < 0)
    {
        printf("Invalid Input: Values cannot be negative.\n");
    }
    else
    {
        if (iUnits <= 100)
        {
            dBillAmount = iUnits * 5;
        }
        else if (iUnits <= 200)
        {
            dBillAmount = (100 * 5) + ((iUnits - 100) * 7);
        }
        else
        {
            dBillAmount = (100 * 5) +
                          (100 * 7) +
                          ((iUnits - 200) * 10);
        }

        dBillAmount = dBillAmount + dMeterCharge;

        if (iWeeksLate > 0)
        {
            int iPenaltyWeeks = iWeeksLate;

            if (iPenaltyWeeks > 5)
            {
                iPenaltyWeeks = 5;
            }

            dLatePenalty = dBillAmount * (iPenaltyWeeks * 0.02);
            dBillAmount = dBillAmount + dLatePenalty;
        }

        printf("Water Bill Amount: ₹%.2lf\n", dBillAmount);
    }

    return 0;
}