#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
typedef struct queue
{
    int data;
    struct queue *link;
} node;

node *front = NULL, *rear = NULL, *temp;

void create()
{
    system("cls");
    int cycle = 1;
    char ch;
    do
    {
        if (cycle)
            front = NULL;
        if (front == NULL)
        {
            cycle = 0;
            rear = (node *)malloc(sizeof(node));
            printf("Enter Data for First Node: ");
            scanf("%d", &rear->data);
            front = rear;
            front->link = NULL;
        }
        else
        {
            temp = (node *)malloc(sizeof(node));
            if (temp == NULL)
                printf("NOT ENOUGH MEMORY TO RECEIVE MORE DATA !\n");
            else
            {
                printf("Enter Data for Next Node: ");
                scanf("%d", &temp->data);
                rear->link = temp;
                rear = temp;
            }
        }
        rear->link = NULL;
        printf("Creating Next Node ...\nPress any key to confirm or .(Dot) to Quit: ");
        ch = getch();
        printf("%c\n", ch);
    } while (ch != '.');
}

void traverse()
{
    system("cls");
    temp = (node *)malloc(sizeof(node));
    temp = front;
    int i = 0;
    while (temp != NULL)
    {
        printf("Data at Position %d: %d\n", ++i, temp->data);
        temp = temp->link;
    }
    free(temp);
}

void insert()
{
    system("cls");
    temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
        printf("QUEUE OVERFLOW !\n");
    else
    {
        printf("Enter data for New Node: ");
        scanf("%d", &temp->data);
        rear->link = temp;
        rear = temp;
        rear->link = NULL;
        printf("ELEMENT INSERTED !\n");
    }
}

void delete ()
{
    system("cls");
    if (front == NULL)
        printf("QUEUE UNDERFLOW !\n");
    else if (front == rear)
    {
        temp = front;
        front = rear = NULL;
    }
    else
    {
        temp = front;
        front = front->link;
        free(temp);
        printf("ELEMENT DELETED !\n");
    }
}

int main(int argc, char const *argv[])
{
    int sel, exit = 1;
    do
    {
        system("cls");
        printf("QUEUE DEMONSTRATION USING LINKED LIST ~\n");
        printf("1: Insert data in Queue.\n");
        printf("2: Read the Data.\n");
        printf("3: Insert Single Element.\n");
        printf("4: Delete an Element.\n");
        printf("5: EXIT !\n");
        printf("Enter your Choice: ");
        scanf("%d", &sel);
        switch (sel)
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
            system("pause");
            exit = 0;
            break;
        default:
            printf("WRONG SELECTION ! SELECT AGAIN !!!");
            system("pause");
            break;
        }
    } while (exit);
    return 0;
}
