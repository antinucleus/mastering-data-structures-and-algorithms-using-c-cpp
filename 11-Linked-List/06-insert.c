#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void CreateLinkedListFromArray(struct Node *mainNode, int array[], int arrayLength)
{
    int i;
    struct Node *temp = mainNode;

    for (i = 0; i < arrayLength; i++)
    {
        temp->data = array[i];

        if (i <= arrayLength - 2)
            temp->next = (struct Node *)malloc(sizeof(struct Node));
        else
            temp->next = NULL;

        temp = temp->next;
    }
}

void DisplayLinkedListDatas(struct Node *mainNode)
{
    while (mainNode)
    {
        printf("data = %d\n", mainNode->data);
        mainNode = mainNode->next;
    }
}

void Insert(struct Node **address, struct Node *p, int position, int data)
{
    int pos = 1;
    struct Node *temp;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 0)
    {
        temp = p;
        p = newNode;
        newNode->next = temp;

        (*address) = newNode;
    }
    else
    {
        while (p)
        {
            if (position == pos)
            {
                temp = p->next;
                p->next = newNode;
                newNode->next = temp;

                break;
            }
            else
            {
                p = p->next;
                pos++;
            }
        }
    }
}

int main()
{
    struct Node *list1 = (struct Node *)malloc(sizeof(struct Node));

    int nodeData1[] = {1, 3, 5, 7, 9, 11};
    int length1 = 6;

    CreateLinkedListFromArray(list1, nodeData1, length1);

    printf("-------Linked List 1 Datas Before Insertion-------\n");
    DisplayLinkedListDatas(list1);
    Insert(&list1, list1, 6, 65);
    printf("-------Linked List 1 Datas After Insertion-------\n");
    DisplayLinkedListDatas(list1);

    return 0;
}