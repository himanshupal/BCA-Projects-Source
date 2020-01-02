#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct polynomial
{
    int exponent, coeffecient;
    struct polynomial *link;
} node;

node *first1 = NULL, *current1, *temp1;
node *first2 = NULL, *current2, *temp2;
node *first_res = NULL, *buf;

int add = 0, sh = 0;
void error(int x)
{
    if (x == 1)
        printf("LINKED LIST OVERFLOW / NOT ENOUGH MEMORY !\n");
    if (x == 2)
        printf("LINKED LIST EMPTY !\n");
    system("pause");
}

void create()
{
    int cycle = 1;
    char ch;
    do
    {
        if (cycle)
        {
            first1 = NULL;
            first2 = NULL;
        }
        if (first1 == NULL && first2 == NULL)
        {
            current1 = (node *)malloc(sizeof(node));
            current2 = (node *)malloc(sizeof(node));
            if (current1 == NULL || current2 == NULL)
                error(1);
            else
            {
                cycle = 0;
                add = 0;
                printf("Enter coefficient having highest value exponent for First equation: ");
                scanf("%d", &current1->coeffecient);
                printf("Enter it's Exponent: ");
                scanf("%d", &current1->exponent);
                printf("Enter coefficient having highest value exponent for Second equation: ");
                scanf("%d", &current2->coeffecient);
                printf("Enter it's Exponent: ");
                scanf("%d", &current2->exponent);
                first1 = current1;
                first2 = current2;
            }
        }
        else
        {
            temp1 = (node *)malloc(sizeof(node));
            temp2 = (node *)malloc(sizeof(node));
            if (temp1 == NULL || temp2 == NULL)
                error(1);
            else
            {
                printf("\nInput ZERO [0] if a value doesn't exist.\n& for any mistakes reselect option 1 from the menu.\n");
                printf("Enter Next coeffecient value for First Equation: ");
                scanf("%d", &temp1->coeffecient);
                printf("Enter it's exponent: ");
                scanf("%d", &temp1->exponent);
                printf("Enter Next coeffecient value for Second Equation: ");
                scanf("%d", &temp2->coeffecient);
                printf("Enter it's exponent: ");
                scanf("%d", &temp2->exponent);

                current1->link = temp1;
                current1 = temp1;
                current2->link = temp2;
                current2 = temp2;
            }
        }
        printf("Creating Next Node ...\nPress any key to confirm or .(Dot) to Quit: ");
        ch = getch();
        printf("%c\n", ch);
    } while (ch != '.');
    current1->link = current2->link = NULL;

    current1 = current1->link;
    current2 = current2->link;

    temp1 = temp2 = NULL;

    printf("Equations created !\n");
    system("pause");
}

void lookup()
{
    if (first1 == NULL || first2 == NULL)
    {
        error(2);
    }
    else
    {
        buf = first1;
        printf("EQUATION 1:\n");
        while (buf->link != NULL)
        {
            temp2 = buf;
            printf("%dx^%d + ", buf->coeffecient, buf->exponent);
            buf = buf->link;
        }
        printf("%dx^%d\n", buf->coeffecient, buf->exponent);
        buf = buf->link;
        buf = NULL;

        buf = first2;
        printf("\nEQUATION 2:\n");
        while (buf->link != NULL)
        {
            temp1 = buf;
            printf("%dx^%d + ", buf->coeffecient, buf->exponent);
            buf = buf->link;
        }
        printf("%dx^%d\n", buf->coeffecient, buf->exponent);
        buf = buf->link;
        buf = NULL;

        if (add)
        {
            buf = first_res;
            printf("\nAdditon Result:\n");
            while (buf->link != NULL)
            {
                temp1 = buf;
                printf("%dx^%d + ", buf->coeffecient, buf->exponent);
                buf = buf->link;
            }
            printf("%dx^%d\n", buf->coeffecient, buf->exponent);
            buf = buf->link;
            buf = NULL;
        }
        system("pause");
    }
}

node condition(node *strc, node *str1, node *str2)
{
    strc = (node *)malloc(sizeof(node));

    if (str1->exponent == str2->exponent)
    {
        strc->exponent = str1->exponent;
        strc->coeffecient = str1->coeffecient + str2->coeffecient;
        sh = 0;
    }
    else if (str1->exponent > str2->exponent)
    {
        strc->exponent = str1->exponent;
        strc->coeffecient = str1->coeffecient;
        sh = 1;
    }
    else if (str1->exponent < str2->exponent)
    {
        strc->exponent = str2->exponent;
        strc->coeffecient = str2->coeffecient;
        sh = 2;
    }
    return *strc;
}

void finish(node *fin)
{
    while (fin != NULL)
    {
        current2 = (node *)malloc(sizeof(node));
        current2->coeffecient = fin->coeffecient;
        current2->exponent = fin->exponent;
        current1->link = current2;
        current1 = current2;
        fin = fin->link;
    }
}

void addition()
{
    if (first1 == NULL || first2 == NULL)
    {
        error(2);
    }
    else
    {
        add = 1;
        first_res = (node *)malloc(sizeof(node));
        *first_res = condition(current1, first1, first2);
        current1 = first_res;

        if (sh == 1)
        {
            temp1 = first1->link;
            temp2 = first2;
        }
        else if (sh == 2)
        {
            temp1 = first1;
            temp2 = first2->link;
        }
        else
        {
            temp1 = first1->link;
            temp2 = first2->link;
        }

        while (temp1 != NULL && temp2 != NULL)
        {
            current2 = (node *)malloc(sizeof(node));
            *current2 = condition(buf, temp1, temp2);
            current1->link = current2;
            current1 = current2;
            if (sh == 1)
                temp1 = temp1->link;
            else if (sh == 2)
                temp2 = temp2->link;
            else
            {
                temp1 = temp1->link;
                temp2 = temp2->link;
            }
        }

        if (temp1 != NULL)
            finish(temp1);

        if (temp2 != NULL)
            finish(temp2);

        current1->link = NULL;
        printf("Addition Finished !!!\n");
        system("pause");
	system("cls");
	lookup();
    }
}

int main(int argc, char const *argv[])
{
    int sel, exit = 1;
    do
    {
        system("cls");
        printf("ADDITION OF POLYNOMIALS USING LINKED LIST ~\n");
        printf(">>> It is mandatory to normalize the equations beforehand.\n");
        printf("1: Insert Equations.\n");
        printf("2: Take a look at the equations.\n");
        printf("3: Addition Result.\n");
        printf("4: EXIT MENU.\n");
        printf("What you wanna do ? Select your option & press Enter: ");
        scanf("%d", &sel);
        switch (sel)
        {
        case 1:
            system("cls");
            create();
            system("cls");
            break;
        case 2:
            system("cls");
            lookup();
            system("cls");
            break;
        case 3:
            system("cls");
            addition();
            system("cls");
            break;
        case 4:
            system("pause");
            exit = 0;
            break;
        default:
            system("cls");
            printf("Wrong Selection !!! Select Again !!!\n\n");
            system("pause");
            break;
        }
    } while (exit);
    return 0;
}