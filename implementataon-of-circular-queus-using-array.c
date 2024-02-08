#include <stdio.h>
#define max 5
int arr[max];
int f = -1, r = -1;

void enqueue()
{
    int data;
    if (((r + 1) % max == f) || (f == 0 && r == max - 1)||(r == max - 1 && f != 0))
        printf("\nqueue is full");
    else
    {
        printf("Enter value to be inserted=");
        scanf("%d",&data);

        if (r == -1)
            r = f = 0;
        else
        {
            r = (r + 1) % max;
        }
        arr[r] = data;
    }
}

void dequeue()
{
    if (f == -1)
        printf("\nqueue is empty");
    else
    {
        if (r == f)
            f = r = -1;
        else
        {
            f = (f + 1) % max;
        }
    }
}
void display()
{
    if (f == -1)
        printf("\nqueue is empty");
    else
    {
        int i = f;
        while (i != (r + 1) % max)
        {
            printf("\t%d", arr[i]);
            i = (i + 1) % max;
        }
    }
}
int main()
{
    int cmd;
    while (1)
    {
        printf("\n1. Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit");
        printf("\nEnter your command=");
        scanf("%d",&cmd);
        switch (cmd)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
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