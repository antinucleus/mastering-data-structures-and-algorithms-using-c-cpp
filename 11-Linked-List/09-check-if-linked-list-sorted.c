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

short CheckSorted(struct Node *list)
{
    while (list->next)
    {
        if (list->data <= list->next->data)
            list = list->next;
        else
            return 0;
    }

    return 1;
}

int main()
{
    struct Node *list1 = (struct Node *)malloc(sizeof(struct Node));

    int nodeData1[] = {10, 38, 39, 78, 116, 139};
    int length1 = 6;

    CreateLinkedListFromArray(list1, nodeData1, length1);
    printf("-------Linked List 1 Datas-------\n");
    DisplayLinkedListDatas(list1);

    short sorted = CheckSorted(list1);

    printf("Linked list is %ssorted\n", sorted ? "" : "not ");

    return 0;
}