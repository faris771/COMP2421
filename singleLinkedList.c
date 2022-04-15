#include<stdio.h>
#include <stdlib.h>
#include "stdbool.h"
#include "math.h"

#define null NULL
#define ll long long


typedef struct node {

    int num;
    struct node *next;


} node;


node *makeEmpty(node *head);

bool isEmpty(node *l);

bool isLast(node *n, node *head);

node *find(int x, node *head);

node *findPrev(int x, node *l);

void deleteNode(int x, node *head);

void insertAtBeginning(int x, node *head);

void insertAtNode(int x, node *head, node *p);

void printList(node *head);

void deleteList(node *head);

int sizeOfList(node *head);


int main() {

    node *list = makeEmpty(list);
    int choice;

    printf("WELCOME!\n");
    while (true) {
        printf(
                "PRESS 1 TO INPUT VALUES!\n"
                "PRESS 2 TO PRINT LIST\n"
                "PRESS 3 FOR SIZE OF LIST\n"
                "PRESS 4 TO DELETE LIST\n"
                "PRESS 5 TO DELETE NODE\n"
                "PRESS 6 TO FIND NODE\n"
                "PRESS 7 TO INSERT VALUE AFTER A CERTAIN NODE\n"
                "PRESS -1 TO EXIT !\n"
                "\n");

        scanf("%d", &choice);
        switch (choice) {
            int val;
            int n;

            case -1:
                printf("THANK YOU :) \n");
                goto end;
                break;

            case 1:
                printf("INPUT NUMBER OF VALUES YOU WISH TO INSERT\n");
                scanf("%d", &n);
                printf("input value u want to insert!\n");
                for (int i = 0; i < n; ++i) {
                    scanf("%d", &val);
                    insertAtBeginning(val, list);

                }
                break;

            case 2:
                printList(list);
                break;

            case 3:
                printf("%d\n", sizeOfList(list));
                break;

            case 4:
                deleteList(list);
                break;
            case 5:

                printf("INPUT NODE TO BE DELETED!\n");
                scanf("%d", &val);
                deleteNode(val, list);
                break;

            case 6:
                printf("INPUT VALUE U WANT TO FIND! \n");
                scanf("%d", &val);
                find(val, list);
                break;

            case 7:
                printf("INPUT VALUE YOU WANT TO INSET AND AFTER WHICH NODE, RESPECTIVELY\n");
                int insertAfterNodeValue;
                scanf("%d%d", &val, &insertAfterNodeValue);
                insertAtNode(val, list, find(insertAfterNodeValue,list));
                break;


            default:
                puts("INVALID INPUT !");

        }


    }
    end:

    free(list);

    return 0;

}

int sizeOfList(node *head) {

    int cnt = 0;
    for (node *iter = head->next; iter != NULL; iter = iter->next) {
        cnt++;
    }


    return cnt;

}

void deleteList(node *head) {
    node *tmp = null;
    for (node *iter = head->next; iter != NULL;) {

        tmp = iter;
        iter = iter->next;
        tmp->next = null;
        free(tmp);

    }

    head->next = null;


//    node *tmp = null;
//    node *iter = head->next;
//
//    head->next = null;
//
//    for (; iter != NULL; iter = iter->next) {
//
//        tmp = iter->next;
//        free(iter);
//
//        iter = tmp;
//
//
//    }

    // u can free head here

}


void printList(node *head) {
    if (isEmpty(head)) {
        printf("empty List\n");
        return;
    }
    for (node *iter = head->next; iter != NULL; iter = iter->next) {
        printf("%d ", iter->num);

    }
    printf("\n");
}


void insertAtNode(int x, node *head, node *p) {

    node *tmp = malloc(sizeof(node));

    tmp->num = x;
    tmp->next = p->next;
    p->next = tmp;

}

void insertAtBeginning(int x, node *head) {
    node *tmp = malloc(sizeof(node));
    tmp->num = x;
    tmp->next = head->next;

    head->next = tmp;


}

void deleteNode(int x, node *head) {

//    for (node *i = head;i!= null && i;  < ; ++) {
//
//    }
    node *tmp = null;

    node *prev = findPrev(x, head);
    if (!isLast(prev, head)) {
        tmp = prev->next;
        prev->next = tmp->next;
        free(tmp);


    }


}

node *findPrev(int x, node *head) {
    node *i = null;


    for (i = head; i != null && i->next->num != x; i = i->next) {

    }


//    while ( i != null && i->next->num != x) {
//        i = i->next;
//    }


    return i;


}

node *find(int x, node *head) {

//    node *i = null;
//    i = head->next;
//
//    while (i != null && i->num != x) {
//        i = i->next;
//
//        if (i->num == x){
//            printf("found!\n");
//            return i;
//        }
//    }
//
//    printf("not found\n");
    for (node *iter = head->next; iter != NULL; iter = iter -> next ) {
        if (iter->num == x) {
            printf("found\n");
            return iter;

        }

    }


}


bool isEmpty(node *head) {
    if (head->next == null) {

        return true;

    }
    else {
        return false;
    }


}

//n is a pointer to our wanted node
bool isLast(node *n, node *head) {

    return n->next == null;

}


// give it a node ptr, and let it the head by making it pointing into a node
node *makeEmpty(node *head) {

    if (head != null) {
        //delete list

    }
    head = malloc(sizeof(node));
    head->next = null;


    return head;


}






















