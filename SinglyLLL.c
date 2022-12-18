/////////Singly Linear Linked List////////
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First , int No)
{
    PNODE newn =(PNODE)malloc(sizeof(NODE));

    newn->data =No;
    newn->next =NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First , int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data =No;
    newn->next =NULL;

    PNODE temp = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{   
    PNODE temp = NULL;

    if ((*First) == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        temp = *First;

        (*First) = (*First)->next;
        free(temp); 
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp =NULL;

    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        temp = *First;
        while(temp->next->next != NULL)
        {
            temp =temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE First, int No, int ipos)
{
    int NodeCnt = 0;
    NodeCnt = Count(*First);

    PNODE temp = NULL;
    int iCnt = 0;

    if((ipos < 1)||(ipos > NodeCnt + 1))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First , No);
    }
    else if(ipos == NodeCnt + 1)
    {
        InsertLast(First , No);
    }
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        temp = (*First);
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE First, int ipos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int iCnt = 0;
    int NodeCnt = 0;

    NodeCnt = Count(*First);

    if((ipos < 1)||(ipos > NodeCnt))
    {
        printf("Invalied Position:\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First);
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = (*First);

        for(iCnt =1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head ,55);
    Display(Head);

    InsertFirst(&Head ,40);
    Display(Head);

    InsertFirst(&Head ,25);
    Display(Head);

    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    InsertLast(&Head ,75);
    Display(Head);

    InsertLast(&Head ,80);
    Display(Head);

    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    InsertAtPos(&Head, 100, 4);
    Display(Head);

    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    DeleteAtPos(&Head , 4);
    Display(Head);
    
    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    DeleteFirst(&Head);
    Display(Head);

    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    DeleteLast(&Head);
    Display(Head);

    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    return 0;
}