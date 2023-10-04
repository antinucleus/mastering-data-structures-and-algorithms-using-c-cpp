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

struct Node *LinearSearch(struct Node *p, int key)
{
    while (p)
    {
        if (key == p->data)
            return p;

        p = p->next;
    }
    return NULL;
}

struct Node *LinearSearch2(struct Node *original, struct Node *p, int key)
{
    struct Node *q = NULL;

    while (p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = original;
            original = p;

            return p;
        }

        q = p;
        p = p->next;
    }
    return NULL;
}

int main()
{
    struct Node *list1 = (struct Node *)malloc(sizeof(struct Node));

    int nodeData1[] = {1, 3, 5, 7, 9, 11};
    int length1 = 6;

    CreateLinkedListFromArray(list1, nodeData1, length1);

    printf("-------Linked List 1 Datas-------\n");
    DisplayLinkedListDatas(list1);

    struct Node *result = LinearSearch(list1, 5);

    if (result)
        printf("key found = %d\n", result->data);
    else
        printf("key not found :(\n");

      return 0;
}