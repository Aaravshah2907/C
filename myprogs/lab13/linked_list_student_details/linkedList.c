#include "linkedList.h"

void printNode(NODE n1)
{
	printf("ID: %s\nName: %s\nDept: %s\nMath Marks: %d\nPhys Marks: %d\nChem Marks: %d\n", n1->ID, n1->Name, n1->Dept, n1->math_marks, n1->phy_marks, n1->chem_marks);
}

void printList(LIST l1)
{
	int node_counter = 0;
	NODE temp = l1->head;
	while (temp != NULL)
	{
		printf("Node %d :", node_counter++);
		printNode(temp);
		temp = temp->next;
	}
}

LIST createNewList()
{
	LIST mylist;
	mylist = (LIST)malloc(sizeof(*mylist));
	mylist->count = 0;
	mylist->head = NULL;
	return mylist;
}

NODE createNewNode(char *ID, char *Name, char *dept, int math_marks, int phy_marks, int chem_marks)
{
	NODE myNode;
	myNode = (NODE)malloc(sizeof(*myNode));
	for (int i = 0; ID[i] != '\0'; i++)
	{
		(myNode->ID)[i] = ID[i];
	}
	for (int i = 0; Name[i] != '\0'; i++)
	{
		(myNode->Name)[i] = Name[i];
	}
	for (int i = 0; dept[i] != '\0'; i++)
	{
		(myNode->Dept)[i] = dept[i];
	}
	myNode->math_marks = math_marks;
	myNode->phy_marks = phy_marks;
	myNode->chem_marks = chem_marks;
	myNode->next = NULL;
	return myNode;
}

void insertNodeIntoList(NODE n1, LIST l1)
{
	if (l1->count == 0)
	{
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	else
	{
		n1->next = l1->head;
		l1->head = n1;
		l1->count++;
	}
}

void insertNodeAtEnd(NODE n1, LIST l1)
{
	if (l1->count == 0)
	{
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	else
	{
		NODE temp = l1->head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = n1;
		n1->next = NULL;
		l1->count++;
	}
}

NODE search(LIST l1, char *ID_search)
{
	if (l1->count == 0)
		return NULL;
	else
	{
		NODE temp = l1->head;
		while (temp != NULL)
		{
			if (!strcmp(temp->ID, ID_search))
				return temp;
			temp = temp->next;
		}
		return NULL;
	}
}

void insertAfter(char *ID_search, NODE n1, LIST l1)
{
	if (l1->count == 0)
	{
		l1->head = n1;
		n1->next = NULL;
		l1->count++;
	}
	else
	{
		NODE temp = l1->head;
		NODE prev = temp;
		while (temp != NULL)
		{
			if (!strcmp(temp->ID, ID_search))
				break;
			prev = temp;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			printf("Element not found\n");
			return;
		}
		else
		{
			if (temp->next == NULL)
			{
				temp->next = n1;
				n1->next = NULL;
				l1->count++;
			}
			else
			{
				prev = temp;
				temp = temp->next;
				prev->next = n1;
				n1->next = temp;
				l1->count++;
			}
			return;
		}
	}
	return;
}

void removeFirstNode(LIST l1)
{
	if (l1->count == 0)
		printf("List is empty. Nothing to remove.\n");
	else
	{
		NODE temp = l1->head;
		l1->head = temp->next;
		l1->count--;
		free(temp);
	}
}

void removeLastNode(LIST l1)
{
	if (l1->count == 0)
	{
		printf("List is empty.\n");
	}
	else if (l1->count == 1)
	{
		l1->count--;
		free(l1->head);
		l1->head = NULL;
	}
	else
	{
		NODE temp = l1->head;
		NODE prev = temp;
		while (temp->next != NULL)
		{
			prev = temp;
			temp = temp->next;
		}
		prev->next = NULL;
		l1->count--;
		free(temp);
	}
}

void removeElem(char *ID_search, LIST l1)
{
	if (l1->count == 0)
	{
		printf("Empty list\n");
	}
	else
	{
		NODE temp = l1->head;
		NODE prev = temp;
		while (strcmp(temp->ID, ID_search))
		{
			if (temp->next != NULL)
			{
				prev = temp;
				temp = temp->next;
			}
			else
				return;
		}
		if (!strcmp(temp->ID, ID_search) && temp == l1->head)
		{
			l1->head = temp->next;
			l1->count--;
			free(temp);
		}
		if (!strcmp(temp->ID, ID_search))
		{
			prev->next = temp->next;
			l1->count--;
			free(temp);
		}
	}
}