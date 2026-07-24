/*

Q193) write a PROgram that print First occurance of number in the given linked list

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }    

    printf("NULL\n");
    
}

int Count(PNODE first)
{
    int iCount = 0;
    PNODE temp = NULL;
    temp = first;

    while(temp != NULL)
    {
        iCount++;
        temp = temp->next;
    }  
    
    return iCount;
}

int FirstOccurance(PNODE first , int iNo)
{
    PNODE temp = NULL;
    int iCount = 0;
    temp = first;

    while(temp != NULL)
    {
        iCount++;

        if(iNo == temp->data)
        {
            return iCount;
        }

        temp = temp->next;
    }
}

void InsertFirst(PPNODE first , int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;

    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    bool bRet = false;

    InsertFirst(&head, 11);
    InsertFirst(&head, 10);
    InsertFirst(&head, 20);
    InsertFirst(&head, 101);
    InsertFirst(&head, 111);
    InsertFirst(&head, 54);
    InsertFirst(&head, 55);

    printf("-----------------------------------------\n");
    printf("Linked list :- \n");
    Display(head);

    iRet = Count(head);

    printf("the Number of Node are : %d\n",iRet);

    printf("-----------------------------------------\n");

    iRet = FirstOccurance(head, 111);

    printf("The Elemnts is first occurance is : %d\n",iRet);

    return 0;
}