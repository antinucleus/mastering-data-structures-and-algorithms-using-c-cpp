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

int main()
{
    struct Node *list1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *list2 = (struct Node *)malloc(sizeof(struct Node));

    int nodeData1[] = {1, 3, 5, 7, 9, 11};
    int length1 = 6;
    int nodeData2[] = {2, 4, 6, 8, 10, 12};
    int length2 = 6;

    CreateLinkedListFromArray(list1, nodeData1, length1);
    CreateLinkedListFromArray(list2, nodeData2, length2);

    printf("-------Linked List 1 Datas-------\n");
    DisplayLinkedListDatas(list1);
    printf("-------Linked List 2 Datas-------\n");
    DisplayLinkedListDatas(list2);

    return 0;
}