#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct linked_list
{
    int data;
    struct linked_list *link;
} node;

node *first = NULL, *current = NULL, *temp = NULL, *previous = NULL;
int op[4];

void create()
{
    int cycle = 1;
    char ch;
    do
    {
        if (cycle)
        {
            first = NULL;
        }
        if (first == NULL)
        {
            cycle = 0;
            current = (node *)malloc(sizeof(node));
            printf("Enter Data for First Node: ");
            scanf("%d", &current->data);
            first = current;
        }
        else
        {
            temp = (node *)malloc(sizeof(node));
            printf("Enter Data for Next Node: ");
            scanf("%d", &temp->data);
            current->link = temp;
            current = temp;
        }
        printf("Creating Next Node ...\nPress any key to confirm or .(Dot) to Quit: ");
        ch = getch();
        printf("%c\n", ch);
    } while (ch != '.' && ch != '.');
    current->link = NULL;
    temp = NULL;
    free(temp);
    printf("List created !\n");
    system("pause");
}

void insert_first()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter Data for New First Node: ");
    scanf("%d", &temp->data);
    temp->link = first;
    first = temp;
    temp = NULL;
    free(temp);
    printf("Insertion Complete !\n");
    system("pause");
}

void insert_last()
{
    temp = (node *)malloc(sizeof(node));
    current = (node *)malloc(sizeof(node));
    printf("Enter Data for New Last Node: ");
    scanf("%d", &temp->data);
    current = first;
    while (current->link != NULL)
        current = current->link;
    current->link = temp;
    temp->link = NULL;
    current = temp;
    temp = NULL;
    free(temp);
    printf("Insertion Complete !\n");
    system("pause");
}

void insert_user()
{
    if (op[0] == 1)
    {
        if (op[1] < 1)
        {
            printf("Node value can't be Nagative! Try Again :)\n");
            system("pause");
        }
        else if (op[1] > op[2] + 1)
        {
            printf("Value must be Sequential ! Try Again :)\n");
            system("pause");
        }
        else if (op[1] == 1)
        {
            insert_first();
        }
        else if (op[1] == op[2] + 1)
        {
            insert_last();
        }
        else
        {
            int count = 2;
            temp = (node *)malloc(sizeof(node));
            current = (node *)malloc(sizeof(node));
            previous = (node *)malloc(sizeof(node));
            printf("Enter Data for New Node: ");
            scanf("%d", &current->data);
            temp = first;
            while (count <= op[1])
            {
                count++;
                previous = temp;
                temp = temp->link;
            }
            previous->link = current;
            current->link = temp;
            printf("Insertion Complete !\n");
            system("pause");
        }
    }
    else
    {
        int count = 1;
        temp = (node *)malloc(sizeof(node));
        current = (node *)malloc(sizeof(node));
        previous = (node *)malloc(sizeof(node));
        printf("Data will be inserted after the selected data info...\n");
        printf("Enter Data for New Node: ");
        scanf("%d", &current->data);
        temp = first;
        while (temp->data <= op[1])
        {
            previous = temp;
            temp = temp->link;
            count++;
            if (count > op[2])
                break;
        }
        if (previous->data != op[1])
        {
            printf("Element Not Found ! Try Again :)\n");
            system("pause");
        }
        else
        {
            previous->link = current;
            current->link = temp;
            printf("Insertion Complete !\n");
            system("pause");
        }
    }
}

void insert_sorted()
{
    int no_op = 1;
    temp = (node *)malloc(sizeof(node));
    current = (node *)malloc(sizeof(node));
    previous = (node *)malloc(sizeof(node));
    printf("Treating data Ascendingly...\n");
    printf("Enter Data for New Node: ");
    scanf("%d", &current->data);
    temp = first->link;
    if (first->data > current->data)
    {
        current->link = first;
        first = current;
        current = NULL;
    }
    else if (current->data > op[3])
    {
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = current;
        current->link = NULL;
    }
    else
    {
        while (temp->data <= current->data)
        {
            previous = temp;
            temp = temp->link;
            if (temp->data < previous->data)
            {
                printf("Can't Input Data ! Array might not be Sorted !\n");
                system("pause");
                no_op = 0;
                break;
            }
        }
        if (no_op)
        {
            previous->link = current;
            current->link = temp;
        }
    }
    if (no_op)
    {
        printf("Insertion Complete !\n");
        system("pause");
    }
}

void delete_first()
{
    temp = (node *)malloc(sizeof(node));
    temp = first;
    first = first->link;
    free(temp);
    printf("Deletion Complete !\n");
    system("pause");
}

void delete_last()
{
    temp = (node *)malloc(sizeof(node));
    current = (node *)malloc(sizeof(node));
    temp = first;
    while (temp->link != NULL)
    {
        current = temp;
        temp = temp->link;
    }
    current->link = NULL;
    free(temp);
    printf("Deletion Complete !\n");
    system("pause");
}

void delete_user()
{
    if (op[0] == 1)
    {
        if (op[1] < 1 || op[1] > op[2])
        {
            printf("Element Not Found ! Try Again :)\n");
            system("pause");
        }
        else if (op[1] == 1)
        {
            delete_first();
        }
        else if (op[1] == op[2])
        {
            delete_last();
        }
        else
        {
            int count = 2;
            temp = (node *)malloc(sizeof(node));
            current = (node *)malloc(sizeof(node));
            temp = first;
            while (count <= op[1])
            {
                count++;
                current = temp;
                temp = temp->link;
            }
            current->link = temp->link;
            free(temp);
            printf("Deletion Complete !\n");
            system("pause");
        }
    }
    else
    {
        int count = 1, no_op = 0;
        if (op[1] == first->data)
            delete_first();
        else
        {
            temp = (node *)malloc(sizeof(node));
            current = (node *)malloc(sizeof(node));
            temp = first;
            while (count <= op[2])
            {
                if (temp->data == op[1])
                    break;
                current = temp;
                temp = temp->link;
                count++;
                if (count > op[2])
                {
                    no_op = 1;
                    break;
                }
            }
            if (no_op)
            {
                printf("Element Not Found ! Try Again :)\n");
                system("pause");
            }
            else
            {
                current->link = temp->link;
                free(temp);
                printf("Deletion Complete !\n");
                system("pause");
            }
        }
    }
}

void lookup()
{
    int i = 0;
    temp = (node *)malloc(sizeof(node));
    temp = first;
    while (temp != NULL)
    {
        op[3] = temp->data;
        printf("Information stored in Node %d: %d\n", ++i, op[3]);
        temp = temp->link;
    }
    op[2] = i;
    free(temp);
    system("pause");
}

void ask_user()
{
    do
    {
        printf("1: Using Node Info.\n");
        printf("2: Using Data Info.\n");
        printf("Select your Option: ");
        scanf("%d", &op[0]);
        switch (op[0])
        {
        case 1:
            printf("Enter Node info : ");
            scanf("%d", &op[1]);
            break;
        case 2:
            printf("Enter Data info: ");
            scanf("%d", &op[1]);
            break;
        default:
            system("cls");
            printf("Wrong Selection !!! Select Again !!!\n");
            system("pause");
            system("cls");
            lookup();
            break;
        }
    } while (op[0] > 2 || op[2] < 1);
}

int main(int argc, char const *argv[])
{
    int sel, exit = 1;
    do
    {
        system("cls");
        printf("SINGLY LINKED LIST DEMONSTRATION ~\n");
        printf("1:  Create a new Linked List.\n");
        printf("2:  Insert new node at First Position.\n");
        printf("3:  Insert new node at End of Linked List.\n");
        printf("4:  Insert new node at Desired Position.\n");
        printf("5:  Insert new node in Sorted Linked List.\n");
        printf("6:  Delete First Node.\n");
        printf("7:  Delete Last Node.\n");
        printf("8:  Delete Desired Node.\n");
        printf("9:  Lookup Linked List as in Current Position.\n");
        printf("10: EXIT MENU.\n");
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
            insert_first();
            system("cls");
            break;
        case 3:
            system("cls");
            insert_last();
            system("cls");
            break;
        case 4:
            system("cls");
            lookup();
            ask_user();
            insert_user();
            system("cls");
            break;
        case 5:
            system("cls");
            insert_sorted();
            system("cls");
            break;
        case 6:
            system("cls");
            delete_first();
            system("cls");
            break;
        case 7:
            system("cls");
            delete_last();
            system("cls");
            break;
        case 8:
            system("cls");
            lookup();
            ask_user();
            delete_user();
            system("cls");
            break;
        case 9:
            system("cls");
            lookup();
            system("cls");
            break;
        case 10:
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