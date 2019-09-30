#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
typedef struct stack
{
    int data;
    struct stack *link;
} node;

node *top = NULL, *current, *temp;

void create()
{
    system("cls");
    int cycle = 1;
    char ch;
    do
    {
        if (cycle)
            top = NULL;
        if (top == NULL)
        {
            cycle = 0;
            current = (node *)malloc(sizeof(node));
            printf("Enter Data for Base: ");
            scanf("%d", &current->data);
            top = current;
            top->link = NULL;
        }
        else
        {
            temp = (node *)malloc(sizeof(node));
            if (temp == NULL)
                print("NOT ENOUGH MEMORY TO RECEIVE MORE DATA !\n");
            else
            {
                printf("Enter Next Data: ");
                scanf("%d", &temp->data);
                temp->link = current;
                current = temp;
                top = current;
            }
        }

        printf("Creating Next Node ...\nPress any key to confirm or .(Dot) to Quit: ");
        ch = getch();
        printf("%c\n", ch);
    } while (ch != '.');
}

void traverse()
{
    system("cls");
    temp = (node *)malloc(sizeof(node));
    temp = top;
    int i = 0;
    while (temp != NULL)
    {
        printf("Data at Position %d: %d\n", ++i, temp->data);
        temp = temp->link;
    }
    free(temp);
}

void push()
{
    system("cls");
    temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
        printf("STACK OVERFLOW !\n");
    else
    {
        printf("Enter data for New TOP: ");
        scanf("%d", &temp->data);
        temp->link = top;
        top = temp;
        printf("ELEMENT INSERTED !\n");
    }
}

void pop()
{
    system("cls");
    if (top == NULL)
        printf("STACK UNDERFLOW !\n");
    else
    {
        temp = (node *)malloc(sizeof(node));
        temp = top;
        top = top->link;
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
        printf("STACK USING LINKED LIST REPRESENTATION ~\n");
        printf("1: Create Stack.\n");
        printf("2: Read Stack.\n");
        printf("3: Add Element.\n");
        printf("4: Remove Element.\n");
        printf("5: EXIT MENU.\n");
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
            push();
            system("pause");
            break;
        case 4:
            pop();
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
