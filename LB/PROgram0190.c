/*

Q190) write a PROgram that print even linked list of given linked list

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

void DisplayEven(PNODE first)
{
    while(first != NULL)
    {
        if(first->data % 2 == 0)
        {
            printf("| %d |->",first->data);
        }

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
    printf("Even Linked list :- \n");

    DisplayEven(head);

    return 0;
}