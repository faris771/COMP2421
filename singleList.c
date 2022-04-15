//
// Created by hp on 4/15/22.
//
#include "singleList.h"

#include<stdio.h>
#include <stdlib.h>
#include "stdbool.h"

#define null NULL


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

    free(tmp);
}

void insertAtBeginning(int x, node *head) {
    node *tmp = malloc(sizeof(node));
    tmp->num = x;
    tmp->next = head->next;

    head->next = tmp;

    free(tmp);

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



