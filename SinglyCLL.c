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

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL)&&(*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL)&&(*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Element of Linked List are:\n");
    do
    {
        printf("| %d |->",First->data);
        First = First->next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First->next;
    }while(First != Last->next);
    
    return iCnt;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL)&&(*Last == NULL))
    {
        return;
    }
    else if(*First == *Last)
    {
        free (*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        PNODE temp = *First;
        *First = temp->next;
        free(temp);
        (*Last)->next = *First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    if((*First == NULL)&&(*Last == NULL))
    {
        return;
    }
    else if(*First == *Last)
    {
        free (*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        PNODE temp1 = *First;
        do
        {
            temp1 = temp1->next;
        }while(temp1->next != *Last);

        PNODE temp2 = temp1->next;
        
        temp1->next = *First;
        free(temp2);  
        *Last = temp1;      
    }
}

void InsertAtPos(PPNODE First, PPNODE Last, int No, int ipos)
{
    int NodeCnt = Count(*First, *Last);

    if((ipos < 1)||(ipos > NodeCnt+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First, Last, No);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First, Last, No);
    }
    else
    {
        PNODE newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        PNODE temp = *First;
        int iCnt = 0;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp= temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}
void DeleteAtPos(PPNODE First, PPNODE Last, int ipos)
{
    int NodeCnt = Count(*First, *Last);

    if((ipos < 1)||(ipos > NodeCnt+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast(First, Last);
    }
    else
    {
        PNODE temp1 = *First;
        int iCnt = 0;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1= temp1->next;
        }
        
        PNODE temp2 = temp1->next;

        temp1->next = temp2->next;
        free(temp2);
    }
}


int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head, Tail);

    iRet = Count(Head, Tail);

    printf("Elementcount in linked list is:%d\n",iRet);

    InsertAtPos(&Head, &Tail, 105, 5);
    Display(Head, Tail);
    
    iRet = Count(Head, Tail);

    printf("Elementcount in linked list is:%d\n",iRet);


    DeleteAtPos(&Head, &Tail, 5);
    Display(Head, Tail);

    iRet = Count(Head, Tail);

    printf("Elementcount in linked list is:%d\n",iRet);


    DeleteFirst(&Head, &Tail);
    DeleteLast(&Head, &Tail);

    Display(Head, Tail);

    iRet = Count(Head, Tail);

    printf("Elementcount in linked list is:%d\n",iRet);

    return 0; 
}