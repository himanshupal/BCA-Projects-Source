#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int front = -1, rear = -1, arr[100];

void create()
{
    system("cls");
    char ch;
    if (front == -1)
    {
        front++;
    }
    do
    {
        printf("Enter data for Node %d [MAX: 100]: ", ++rear + 1);
        scanf("%d", &arr[rear]);
        printf("Wanna Enter More [Y/N]\n");
        ch = getch();
    } while (ch != 'N' && ch != 'n');
    printf("Insertion completed !!!\n");
}

void traverse()
{
    system("cls");
    if (front == -1)
        printf("Queue Empty !!!\n");
    else
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", arr[i]);
        }
}

void insert()
{
    system("cls");
    if (front == -1)
        front++;
    printf("Insert Data for Node [%d]: ", ++rear + 1);
    scanf("%d", &arr[rear]);
    printf("Insertion Complete !!!\n");
}

void delete ()
{
    system("cls");
    int temp;
    if (front == -1)
    {
        printf("Queue Empty !!!\n");
    }
    else if (front == rear)
    {
        temp = arr[front];
        front = -1;
        rear = -1;
        temp = '\0';
        printf("Deletion Complete !!!\n");
    }
    else
    {
        temp = arr[front];
        front++;
        temp = '\0';
        printf("Deletion complete !!!\n");
    }
}

int main(int argc, char const *argv[])
{
    int ch, exit = 1;
    do
    {
        system("cls");
        printf("QUEUE DEMONSTRATION USING ARRAY ~\n");
        printf("1: Insert data in Queue.\n");
        printf("2: Read the Data.\n");
        printf("3: Insert Single Element.\n");
        printf("4: Delete an Element.\n");
        printf("5: EXIT !\n");
        printf("Enter your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            system("pause");
            break;
        case 2:
            traverse();
            system("pause");
            break;
        case 3:
            insert();
            system("pause");
            break;
        case 4:
            delete ();
            system("pause");
            break;
        case 5:
            exit = 0;
            system("pause");
            break;
        default:
            printf("WRONG SELECTION !!! TRY AGAIN ...\n");
            system("pause");
            break;
        }
    } while (exit);
    return 0;
}