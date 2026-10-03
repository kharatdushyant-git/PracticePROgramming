/*
***********************************************************************
Assignment 51
Assignment Name: Logic Building Assignment

Question 5:

Cinema Seat Booking with Row Pricing + Group Discount

Seats have different prices per row. User tries booking multiple seats;
reject if already booked. If group size ≥ 6 give 10% discount.

Input:
    rows, cols, bookedSeatList, requestedSeatList

Output:
    success/fail + total cost + remaining seats
***********************************************************************
*/

#include <stdio.h>

int main()
{
    int iRows = 0;
    int iCols = 0;
    int iBookedSeats = 0;
    int iRequestedSeats = 0;

    int iRow = 0;
    int iCol = 0;
    int iIndex = 0;

    double dTotalCost = 0.0;
    double dSeatPrice = 0.0;
    double dDiscount = 0.0;

    /*
     * Maximum size used for a simple beginner-friendly
     * seat arrangement.
     */
    int iSeats[10][10] = {{0}};

    printf("Enter number of rows: ");
    scanf("%d", &iRows);

    printf("Enter number of columns: ");
    scanf("%d", &iCols);

    if (iRows <= 0 || iRows > 10 ||
        iCols <= 0 || iCols > 10)
    {
        printf("Invalid Input: Rows and columns must be between 1 and 10.\n");
        return 0;
    }

    printf("Enter number of already booked seats: ");
    scanf("%d", &iBookedSeats);

    if (iBookedSeats < 0 || iBookedSeats > iRows * iCols)
    {
        printf("Invalid Input: Invalid booked seat count.\n");
        return 0;
    }

    for (iIndex = 0; iIndex < iBookedSeats; iIndex++)
    {
        printf("Enter booked seat row and column: ");
        scanf("%d %d", &iRow, &iCol);

        if (iRow < 1 || iRow > iRows ||
            iCol < 1 || iCol > iCols)
        {
            printf("Invalid seat position.\n");
            return 0;
        }

        iSeats[iRow - 1][iCol - 1] = 1;
    }

    printf("Enter number of requested seats: ");
    scanf("%d", &iRequestedSeats);

    if (iRequestedSeats <= 0 ||
        iRequestedSeats > iRows * iCols)
    {
        printf("Invalid Input: Invalid requested seat count.\n");
        return 0;
    }

    int iRequested[100][2] = {{0}};

    for (iIndex = 0; iIndex < iRequestedSeats; iIndex++)
    {
        printf("Enter requested seat row and column: ");
        scanf("%d %d", &iRow, &iCol);

        if (iRow < 1 || iRow > iRows ||
            iCol < 1 || iCol > iCols)
        {
            printf("Booking Failed: Invalid seat.\n");
            return 0;
        }

        if (iSeats[iRow - 1][iCol - 1] == 1)
        {
            printf("Booking Failed: Seat %d-%d is already booked.\n",
                   iRow, iCol);
            return 0;
        }

        iRequested[iIndex][0] = iRow;
        iRequested[iIndex][1] = iCol;

        int iCheck = 0;

        for (iCheck = 0; iCheck < iIndex; iCheck++)
        {
            if (iRequested[iCheck][0] == iRow &&
                iRequested[iCheck][1] == iCol)
            {
                printf("Booking Failed: Seat %d-%d requested twice.\n",
                       iRow, iCol);
                return 0;
            }
        }
    }

    for (iIndex = 0; iIndex < iRequestedSeats; iIndex++)
    {
        iRow = iRequested[iIndex][0];

        if (iRow <= 2)
        {
            dSeatPrice = 150;
        }
        else if (iRow <= 5)
        {
            dSeatPrice = 200;
        }
        else
        {
            dSeatPrice = 250;
        }

        dTotalCost = dTotalCost + dSeatPrice;
    }

    if (iRequestedSeats >= 6)
    {
        dDiscount = dTotalCost * 0.10;
        dTotalCost = dTotalCost - dDiscount;
    }

    for (iIndex = 0; iIndex < iRequestedSeats; iIndex++)
    {
        iRow = iRequested[iIndex][0];
        iCol = iRequested[iIndex][1];

        iSeats[iRow - 1][iCol - 1] = 1;
    }

    int iRemainingSeats = (iRows * iCols) -
                          (iBookedSeats + iRequestedSeats);

    printf("\nBooking Successful\n");
    printf("Total Cost: ₹%.2lf\n", dTotalCost);
    printf("Remaining Seats: %d\n", iRemainingSeats);

    return 0;
}