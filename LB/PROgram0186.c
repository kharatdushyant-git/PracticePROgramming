/*

Q186) write a PROgram that search the in linked list

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

bool Search(PNODE first, int iNo)
{
    bool bFalg = false;
    PNODE temp = first;

    while(temp != NULL)
    {
        if(iNo == temp->data)
        {
            return true;
        }

        temp = temp->next;
    }

    return bFalg;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    bool bRet = false;

    InsertFirst(&head, 11);
    InsertFirst(&head, 101);
    InsertFirst(&head, 21);
    InsertFirst(&head, 51);

    printf("-----------------------------------------\n");
    printf("Linked list is :- \n");
    Display(head);

    iRet = Count(head);

    printf("the Number of Node are : %d\n",iRet);

    printf("-----------------------------------------\n");

    bRet = Search(head, 111);

    if(bRet == true)
    {
        printf("Element is present in the linked list\n");
    }
    else
    {
        printf("Element is present in not the linked list\n");
    }


    return 0;
}