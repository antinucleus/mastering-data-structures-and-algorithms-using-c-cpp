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

void InsertSortedList(struct Node **address, struct Node *list, int element)
{
    struct Node *t, *p;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = element;

    while (list)
    {

        if (element < list->data)
        {
            t->next = list;
            (*address) = t;

            return;
        }
        if (element >= list->data && (list->next && element <= list->next->data))
        {
            p = list->next;
            list->next = t;
            t->next = p;

            return;
        }

        if (!list->next && element > list->data)
        {
            list->next = t;
            t->next = NULL;
            return;
        }
        list = list->next;
    }
}

int main()
{
    struct Node *list1 = (struct Node *)malloc(sizeof(struct Node));

    int nodeData1[] = {10, 38, 63, 78, 116, 139};
    int length1 = 6;

    CreateLinkedListFromArray(list1, nodeData1, length1);

    printf("-------Linked List 1 Datas Before Insertion-------\n");
    DisplayLinkedListDatas(list1);
    InsertSortedList(&list1, list1, 140);
    InsertSortedList(&list1, list1, 10);
    InsertSortedList(&list1, list1, 1);
    InsertSortedList(&list1, list1, 56);

    printf("-------Linked List 1 Datas After Insertion-------\n");

    DisplayLinkedListDatas(list1);
    return 0;
}