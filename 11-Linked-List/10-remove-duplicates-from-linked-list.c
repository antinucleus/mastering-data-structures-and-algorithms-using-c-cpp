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

void RemoveDuplicates(struct Node *list)
{
    struct Node *p = list;
    list = list->next;

    while (list)
    {
        if (list->data == p->data)
        {
            p->next = list->next;
            free(list);
            list = p->next;
        }
        else
        {
            p = list;
            list = list->next;
        }
    }
}

int main()
{
    struct Node *list1 = (struct Node *)malloc(sizeof(struct Node));

    int nodeData1[] = {10, 10, 39, 39, 39, 139};
    int length1 = 6;

    CreateLinkedListFromArray(list1, nodeData1, length1);
    printf("-------Linked List 1 Datas-------\n");
    DisplayLinkedListDatas(list1);

    RemoveDuplicates(list1);
    printf("-------Linked List 1 After Removed Duplications-------\n");
    DisplayLinkedListDatas(list1);
    return 0;
}