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

void ReverseLinkedList(struct Node **address, struct Node *list)
{
    struct Node *temp, *currentNode, *previous;
    temp = currentNode = previous = list;
    int firstNode = 1;

    while (list && list->next)
    {
        previous = currentNode;
        temp = list;
        currentNode = list->next;
        list = currentNode->next;
        currentNode->next = temp;

        if (firstNode)
        {
            firstNode--;
            temp->next = NULL;
        }
        else
            temp->next = previous;
    }

    if (list)
    {
        list->next = currentNode;
        (*address) = list;
    }
    else
    {
        temp->next = previous;
        (*address) = currentNode;
    }
}

int main()
{
    struct Node *list1 = (struct Node *)malloc(sizeof(struct Node));

    int nodeData1[] = {10};
    int length1 = 1;

    CreateLinkedListFromArray(list1, nodeData1, length1);
    printf("-------Linked List 1 Datas-------\n");
    DisplayLinkedListDatas(list1);

    ReverseLinkedList(&list1, list1);
    printf("-------Linked List 1 After Reversed-------\n");
    DisplayLinkedListDatas(list1);
    return 0;
}