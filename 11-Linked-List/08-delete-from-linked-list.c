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

void DeleteElementFromList(struct Node **address, struct Node *list, int element)
{
    struct Node *p = list;

    while (list)
    {
        if (p == list && element == list->data)
        {
            (*address) = list->next;
            free(list);

            return;
        }

        if (element == list->data)
        {

            p->next = list->next;
            free(list);

            return;
        }

        p = list;
        list = list->next;
    }
}

int main()
{
    struct Node *list1 = (struct Node *)malloc(sizeof(struct Node));

    int nodeData1[] = {10, 38, 63, 78, 116, 139};
    int length1 = 6;

    CreateLinkedListFromArray(list1, nodeData1, length1);

    printf("-------Linked List 1 Datas Before Deletion-------\n");
    DisplayLinkedListDatas(list1);
    DeleteElementFromList(&list1, list1, 10);

    printf("-------Linked List 1 Datas After Deletion-------\n");

    DisplayLinkedListDatas(list1);
    return 0;
}