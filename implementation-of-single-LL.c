#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} node;

struct node *head = NULL;

void insert()
{
    int value;
    node *temp = malloc(sizeof(node));
    node *ptr = head;

    printf("\nEnter value :");
    scanf("%d", &value);

    temp->data = value;
    temp->link = NULL;

    if (ptr == NULL)
        head = temp;

    else
    {
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}

void reverse()
{
    node *prev = NULL, *next = NULL, *ptr = head;
    while (ptr != NULL)
    {
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
    }
    head = prev;
}

void display()
{
    node *ptr = head;
    if (ptr == NULL)
        printf("\nEmpty linked list");
    else
    {
        while (ptr != NULL)
        {
            printf("[%d]", ptr->data);
            ptr = ptr->link;
        }
    }
}

int main()
{
    while (1)
    {
        int cmd;
        printf("\n 1.Insertion \n2.Reverse \n3.Display \n4.Exit");
        printf("\nEnter your command");
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 1:
            insert();
            break;
        case 2:
            reverse();
            break;
        case 3:
            display();
            break;

        case 4:
            return 0;

        default:
            printf("\ninvalid command");
            break;
        }
    }
}