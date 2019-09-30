#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define max 100

int top = 0;
int stack[max];

void create()
{
    system("cls");
    char ch;
    do
    {
        top++;
        printf("Enter element %d of Stack: ", top);
        scanf("%d", &stack[top]);
        printf("Wanna Enter more ? Y/N\n");
        ch = getch();
    } while (ch != 'n' && ch != 'N');
    printf("STACK CREATED !\n");
}

void traverse()
{
    system("cls");
    for (int i = top; i > 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

void push()
{
    system("cls");
    if (top == max)
        printf("\nSTACK OVERFLOW !!! HALT !!!");
    else
    {
        top++;
        printf("Enter element to be Inserted at TOP: ");
        scanf("%d", &stack[top]);
        printf("ELEMENT INSERTED !\n");
    }
}

void pop()
{
    system("cls");
    if (top == 0)
        printf("STACK UNDERFLOW !!! HALT !!!\n");
    else
    {
        stack[top] = '\0';
        top = top - 1;
        printf("ELEMENT DELETED !\n");
    }
}

int main(int argc, char const *argv[])
{
    int sel, exit = 1;
    do
    {
        system("cls");
        printf("STACK USING ARRAY REPRESENTATION ~\n");
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
