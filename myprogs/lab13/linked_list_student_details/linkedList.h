#ifndef __LINKED_LIST_H
#define __LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node *NODE;
struct node
{
	char ID[15];
	char Name[18];
	char Dept[2];
	int math_marks, phy_marks, chem_marks;
	NODE next;
};

typedef struct linked_list *LIST;
struct linked_list
{
	int count;
	NODE head;
};

void printNode(NODE n1);
void printList(LIST l1);
LIST createNewList();
NODE createNewNode(char *ID, char *Name, char *dept, int math_marks, int phy_marks, int chem_marks);
void insertNodeIntoList(NODE n1, LIST l1);
void insertNodeAtEnd(NODE n1, LIST l1);
NODE search(LIST l1, char *ID);
void insertAfter(char *ID, NODE n1, LIST l1);
void removeFirstNode(LIST l1);
void removeLastNode(LIST l1);
void removeElem(char *ID, LIST l1);

#endif