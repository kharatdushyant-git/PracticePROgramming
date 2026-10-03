/*
***********************************************************************
Assignment 52
Assignment Name: Logic Building Assignment

Question 2:

An online election system stores votes by voter ID. Every voter can vote
only once. If the same ID appears again, the vote must be rejected and
counted as duplicate.

Input:

    Number of votes N

    N voter IDs

Validations:

    N ≥ 0

    IDs must be non-negative integers

Expected Output:

    Valid Votes: <count>
    Rejected Duplicate Votes: <count>
***********************************************************************
*/

#include <stdio.h>

int main()
{
    int iNumberOfVotes = 0;
    int iVoterId = 0;
    int iValidVotes = 0;
    int iDuplicateVotes = 0;
    int iIndex = 0;
    int iCheck = 0;
    int iIsDuplicate = 0;

    int iVoterIds[100] = {0};

    printf("Enter number of votes: ");
    scanf("%d", &iNumberOfVotes);

    if (iNumberOfVotes < 0)
    {
        printf("Invalid Input: Number of votes must be >= 0.\n");
    }
    else if (iNumberOfVotes > 100)
    {
        printf("Invalid Input: Maximum 100 votes are allowed.\n");
    }
    else
    {
        for (iIndex = 0; iIndex < iNumberOfVotes; iIndex++)
        {
            printf("Enter voter ID %d: ", iIndex + 1);
            scanf("%d", &iVoterId);

            if (iVoterId < 0)
            {
                printf("Invalid Input: Voter ID must be non-negative.\n");
                return 0;
            }

            iIsDuplicate = 0;

            for (iCheck = 0; iCheck < iValidVotes; iCheck++)
            {
                if (iVoterIds[iCheck] == iVoterId)
                {
                    iIsDuplicate = 1;
                    break;
                }
            }

            if (iIsDuplicate == 1)
            {
                iDuplicateVotes++;
            }
            else
            {
                iVoterIds[iValidVotes] = iVoterId;
                iValidVotes++;
            }
        }

        printf("Valid Votes: %d\n", iValidVotes);
        printf("Rejected Duplicate Votes: %d\n", iDuplicateVotes);
    }

    return 0;
}