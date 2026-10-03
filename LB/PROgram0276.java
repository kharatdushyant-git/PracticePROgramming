/*
***********************************************************************
Assignment 51
Question 2:

Design a Java application to manage cinema hall seating using a 2D array.

The cinema hall has:

    - Rows representing seat rows.
    - Columns representing seats in each row.

Each seat is represented as:

    0 → Empty
    1 → Booked

Requirements:

    1. Count total booked seats.
    2. Find row with maximum bookings.
    3. Check if any row is completely full.
    4. Display seat matrix.

Input Format:

    First line  : Integer R (rows)
    Second line : Integer C (columns)
    Next R lines: C integers (0 or 1)

Validations:

    R > 0
    C > 0
    Matrix values must be 0 or 1 only.

Output Format:

    Total Booked Seats: <count>
    Row With Maximum Bookings: Row <number>
    Full Row Exists: Yes/No
***********************************************************************
*/

import java.util.Scanner;

class CinemaHall
{
    public static void main(String[] args)
    {
        Scanner cInput = new Scanner(System.in);

        int iRows = 0;
        int iColumns = 0;
        int iRow = 0;
        int iColumn = 0;
        int iSeat = 0;
        int iBookedSeats = 0;
        int iRowBookings = 0;
        int iMaximumBookings = 0;
        int iMaximumRow = 0;

        boolean bInvalidInput = false;
        boolean bFullRowExists = false;
        boolean bRowFull = true;

        int[][] iaSeats = new int[0][0];

        System.out.print("Enter number of rows: ");
        iRows = cInput.nextInt();

        System.out.print("Enter number of columns: ");
        iColumns = cInput.nextInt();

        if (iRows <= 0 || iColumns <= 0)
        {
            bInvalidInput = true;
        }
        else
        {
            iaSeats = new int[iRows][iColumns];

            for (iRow = 0; iRow < iRows; iRow++)
            {
                for (iColumn = 0; iColumn < iColumns; iColumn++)
                {
                    System.out.print("Enter seat status for Row "
                            + (iRow + 1) + ", Seat "
                            + (iColumn + 1) + ": ");

                    iSeat = cInput.nextInt();

                    if (iSeat != 0 && iSeat != 1)
                    {
                        bInvalidInput = true;
                        break;
                    }

                    iaSeats[iRow][iColumn] = iSeat;
                }

                if (bInvalidInput)
                {
                    break;
                }
            }
        }

        if (bInvalidInput)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            System.out.println();
            System.out.println("Seat Matrix:");

            for (iRow = 0; iRow < iRows; iRow++)
            {
                for (iColumn = 0; iColumn < iColumns; iColumn++)
                {
                    System.out.print(iaSeats[iRow][iColumn] + " ");
                }

                System.out.println();
            }

            for (iRow = 0; iRow < iRows; iRow++)
            {
                iRowBookings = 0;
                bRowFull = true;

                for (iColumn = 0; iColumn < iColumns; iColumn++)
                {
                    if (iaSeats[iRow][iColumn] == 1)
                    {
                        iBookedSeats++;
                        iRowBookings++;
                    }
                    else
                    {
                        bRowFull = false;
                    }
                }

                if (iRow == 0 || iRowBookings > iMaximumBookings)
                {
                    iMaximumBookings = iRowBookings;
                    iMaximumRow = iRow;
                }

                if (bRowFull)
                {
                    bFullRowExists = true;
                }
            }

            System.out.println();
            System.out.println("Total Booked Seats: " + iBookedSeats);
            System.out.println("Row With Maximum Bookings: Row "
                    + (iMaximumRow + 1));

            if (bFullRowExists)
            {
                System.out.println("Full Row Exists: Yes");
            }
            else
            {
                System.out.println("Full Row Exists: No");
            }
        }

        cInput.close();
    }
}