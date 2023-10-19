#include <stdio.h>
#include <stdlib.h>
#define Size 6
int rear;
int front = 0;
int queue[Size];

int isFull()
{
    if (rear == Size - 1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (front > rear)
        return 1;
    else
        return 0;
}

int menu()
{
    int choice;
    printf("\nPress,\n1. Enqueue\n2. Dequeue\n3. Traverese\n4. Exit\n Your Choice : ");
    scanf("%d", &choice);
    return (choice);
}

void enqueue(int n)
{
    if (isFull())
        printf("Queue is Full");
    else{
        rear++;
        queue[rear] = n;
    }
}

void dequeue()
{

    if (!isEmpty())
        printf("\n%d is deleted", queue[front++]);
    else
        printf("\nqueue is Empty");
}

void traverse()
{
    int i;
    if (!isEmpty())
    {
        printf("\nqueue is : ");
        for (i = front+1; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    else
        printf("\nqueue is Empty");
}

int main()
{
    int choice, num;
    do
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            printf("Enter the value :");
            scanf("%d", &num);
            enqueue(num);
            traverse();
            break;
        case 2:
            dequeue();
            traverse();
            break;
        case 3:
            traverse();
            break;
        default:
            exit(0);
        }
    } while (choice <= 5);
}
