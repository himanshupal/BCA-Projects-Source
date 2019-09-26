#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct linked_list{
    int data;
    struct linked_list *link;
}node;

node *first = NULL, *current = NULL, *temp = NULL, *previous = NULL;
int op[3];

void create(){
    char ch;
    do{
        if(first == NULL){
        current = (node *)malloc(sizeof(node));
        printf("Enter Data for First Node: ");
        scanf("%d", &current->data);
        first = current;
        }else{
        temp = (node *)malloc(sizeof(node));
        printf("Enter Data for Next Node: ");
        scanf("%d", &temp->data);
        current->link = temp;
        current = temp;
        }
        printf("Want to create next Node: ");
        ch = getch();
        printf("%c\n", ch);
    } while (ch != 'N' && ch != 'n');
    current->link = NULL;
    temp = NULL;
    printf("List created !\n");
    system("pause");
}

void insert_first(){
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

void insert_last(){
    temp = (node *)malloc(sizeof(node));
    current = (node *)malloc(sizeof(node));
    printf("Enter Data for New Last Node: ");
    scanf("%d", &temp->data);
    current = first;
    while(current->link != NULL)
        current = current->link;
    current->link = temp;
    temp->link = NULL;
    current = temp;
    temp = NULL;
    free(temp);
    printf("Insertion Complete !\n");
    system("pause");
}

void insert_user(){
    if(op[0]==1 && op[1]==1)
        insert_first();
    else if (op[0]==1 && op[1]==(op[2]+1))
        insert_last();
    else if (op[0] == 1 && (op[1] > (op[2]+1))){
        printf("Value must be Sequential ! Try Again :)\n");
        system("pause");
    }
    else if (op[0]==1){
        int count = 2;
        temp = (node *)malloc(sizeof(node));
        current = (node *)malloc(sizeof(node));
        previous = (node *)malloc(sizeof(node));
        printf("Enter Data for New Node: ");
        scanf("%d", &current->data);
        temp = first;
        while(count <= op[1]){
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

void delete_first(){
    temp = (node *)malloc(sizeof(node));
    temp = first;
    first = first->link;
    temp = NULL;
    free(temp);
    printf("Deletion Complete !\n");
    system("pause");
}

void delete_last(){
    temp = (node *)malloc(sizeof(node));
    current = (node *)malloc(sizeof(node));
    temp = first;
    while(temp->link != NULL){
        current = temp;
        temp = temp->link;
    }
    current->link = NULL;
    free(temp);
    printf("Deletion Complete !\n");
    system("pause");
}

void delete_user(){
    if(op[0]==1 && op[1]==1)
        delete_first();
    else if (op[0]==1 && op[1]==op[2])
        delete_last();
    else if (op[0] == 1 && (op[1] > op[2])){
        printf("Element Not Found ! Try Again :)\n");
        system("pause");
    }
    else if (op[0]==1){
        int count=2;
        temp = (node *)malloc(sizeof(node));
        current = (node *)malloc(sizeof(node));
        temp = first;
        while(count <= op[1]){
            count++;
            current = temp;
            temp = temp->link;
        }
        current->link = temp->link;
        free(temp);
        printf("Deletion Complete !\n");
        system("pause");
    } else {
        int count = 1, no_op = 0;
        if(op[1] == first->data)
            delete_first();
        else{
            temp = (node *)malloc(sizeof(node));
            current = (node *)malloc(sizeof(node));
            temp = first;
            while(count <= op[2]){
                if(temp->data == op[1])
                    break;
                current = temp;
                temp = temp->link;
                count++;
                if(count > op[2]){
                    no_op = 1;
                    break;
                }
            }
            if(no_op){
                printf("Element Not Found ! Try Again :)\n");
                system("pause");
            } else {
                current->link = temp->link;
                free(temp);
                printf("Deletion Complete !\n");
                system("pause");
            }
        }
    }
}

void lookup(){
    int i = 0;
    temp = (node *)malloc(sizeof(node));
    temp = first;
    while (temp != NULL)
    {
        printf("Information stored in Node %d: %d\n", ++i, temp->data);
        temp = temp->link;
    }
    op[2] = i;
    free(temp);
    system("pause");
}

void ask_user(){
    do{
        printf("Select your Option:\n");
        printf("1: Using Node Info.\n");
        printf("2: Using Data Info.\n");
        scanf("%d", &op[0]);
        system("cls");
        switch (op[0])
        {
        case 1:
            printf("Enter Node info: ");
            scanf("%d", &op[1]);
            break;
        case 2:
            printf("Enter Data info: ");
            scanf("%d", &op[1]);
            break;
        default:
            system("cls");
            printf("Wrong Selection !!! Select Again !!!\n\n");
            system("pause");
            system("cls");
            break;
        }
    } while (op[0] > 2 || op[2] < 1);
}

int main(int argc, char const *argv[])
{
    int sel, exit = 0;
    do{
        system("cls");
        printf("What you wanna do ? Select your option & press Enter to Select:\n");
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
        // case 5:
            // system("cls");
            // insert_sorted();
            // system("cls");
            // break;
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
            delete_user(op);
            system("cls");
            break;
        case 9:
            system("cls");
            lookup();
            system("cls");
            break;
        case 10:
            system("pause");
            exit = 1;
            break;
        default:
            system("cls");
            printf("Wrong Selection !!! Select Again !!!\n\n");
            system("pause");
            break;
        }
    } while (exit != 1);
    return 0;
}