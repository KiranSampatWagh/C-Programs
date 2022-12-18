///////////Doubly Linear Linked List/////////

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev; //x
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First , int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL; //x

    if((*First) == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn; //x
        (*First) = newn;
    }
}

void InsertLast(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL; //x

    PNODE temp =NULL;

    if((*First)== NULL)
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
        newn->prev = temp; //x
    }
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

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

        *First = temp->next;
        free(temp);
        (*First)->prev = NULL; //x 
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free((*First));
        *First = NULL;
    }
    else
    {
        temp = *First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void Display(PNODE First)
{
    printf("NULL<=>");
    while(First != NULL)
    {
        printf("| %d |<=>",First->data);
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

void InsertAtPos(PPNODE First, int No, int ipos)
{
    PNODE temp = NULL;
    int iCnt = 0;
    int NodeCnt = 0;
    NodeCnt = Count(*First);

    if((ipos < 1) || (ipos > NodeCnt+1))
    {
        printf("Invalide Position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First, No);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First , No);
    }
    else
    {
        PNODE newn =(PNODE)malloc(sizeof(NODE));
        
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL; //x

        temp = *First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp =temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn; //x
        temp->next = newn;
        newn->prev = temp; //x
    }
}

void DeleteAtPos(PPNODE First, int ipos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iCnt = 0;
    int NodeCnt = 0;
    NodeCnt = Count(*First);

    if((ipos < 1) || (ipos > NodeCnt+1))
    {
        printf("Invalide Position\n");
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
        temp1 = *First;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 =temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;
        temp2->next->prev = temp1; //x
        free(temp2);
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet =0;

    InsertFirst(&Head,51);
    Display(Head);

    InsertFirst(&Head,21);
    Display(Head);

    InsertFirst(&Head,11);
    Display(Head);

    InsertLast(&Head,101);
    Display(Head);

    InsertLast(&Head,111);
    Display(Head);
    
    InsertLast(&Head,121);
    Display(Head);

    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    InsertAtPos(&Head, 55, 4);
    Display(Head);

    DeleteAtPos(&Head, 4);
    Display(Head);
    
    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    DeleteFirst(&Head);
    Display(Head);

    DeleteLast(&Head);
    Display(Head);

    iRet = Count(Head);
    printf("Count is:%d\n",iRet);

    return 0;
}