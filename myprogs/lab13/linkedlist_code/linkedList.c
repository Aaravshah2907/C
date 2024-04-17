#include "linkedList.h"

void printNode(NODE n1)
{
    printf("Element: %d\n", (n1 -> ele));
}

void printList(LIST l1)
{
	int node_counter =0;
    NODE temp = l1 -> head;
    while(temp != NULL)
    {
    	node_counter++;
    	printf("Node %d : Element %d\n", node_counter, (temp-> ele));
    	temp = temp->next;
    }
}

LIST createNewList()
{
	LIST mylist;
	mylist = (LIST) malloc(sizeof(*mylist));
	mylist -> count = 0;
	mylist -> head = NULL;
	return mylist;
}

NODE createNewNode(int value){
	NODE myNode;
	myNode = (NODE) malloc(sizeof(*myNode));
	myNode -> ele = value;
	myNode -> next = NULL;
	return myNode;
}


void insertNodeIntoList(NODE n1, LIST l1)
{
	if (l1 -> count == 0)
	{
		l1 -> head = n1;
		n1 -> next = NULL;
		l1 -> count++;
	}
	else
	{
		n1 -> next = l1-> head;
		l1 -> head = n1;
		l1 -> count++;
	}
}

void insertNodeAtEnd(NODE n1, LIST l1)
{
    if (l1 -> count == 0)
	{
		l1 -> head = n1;
		n1 -> next = NULL;
		l1 -> count++;
	}
	else
	{
		NODE temp = l1 -> head;
		while(temp -> next != NULL)
			temp = temp->next;
		temp -> next = n1;
		n1 -> next = NULL;
		l1 -> count++;
	}
}


NODE search(LIST l1, int value)
{
	if (l1 -> count == 0)
		return NULL;
	else
	{
	    NODE temp = l1 -> head;
	    while(temp != NULL)
	    {
	    	if (temp-> ele == value)
	    		return temp;
	    	temp = temp->next;
	    }
	    return NULL;
	}
}

void insertAfter(int searchEle, NODE n1, LIST l1)
{
    if (l1 -> count == 0)
	{
		l1 -> head = n1;
		n1 -> next = NULL;
		l1 -> count++;
	}
	else
	{
		NODE temp = l1->head;
		NODE prev = temp;
		while(temp!= NULL)
		{
			if (temp -> ele == searchEle)
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
			if (temp-> next == NULL)
			{
				temp -> next = n1;
				n1 -> next = NULL;
				l1->count++;
			}
			else
			{
				prev = temp;
				temp = temp->next;
				prev -> next = n1;
				n1 -> next = temp;
				l1 -> count++;
			}
			return;
		}
	}
	return;
}

void removeFirstNode(LIST l1)
{
    if (l1 -> count == 0)
		printf("List is empty. Nothing to remove.\n");
	else
	{
		NODE temp = l1->head;
		l1-> head = temp->next;
		l1-> count--;
		free(temp);
	}
}

void removeLastNode(LIST l1)
{
    if (l1 -> count == 0)
	{
		printf("List is empty.\n");
	}
	else if(l1-> count == 1)
	{
		l1-> count--;
		free(l1->head);
		l1-> head = NULL;
	}
	else
	{
		NODE temp = l1->head;
		NODE prev = temp;
		while(temp-> next != NULL)
		{
			prev = temp;
			temp = temp-> next;
		}
		prev -> next = NULL;
		l1 -> count--;
		free(temp);
	}
}

void removeElem(int value, LIST l1)
{
	if (l1 -> count == 0)
	{
		printf("Empty list\n");
	}
	else
	{
	    NODE temp = l1 -> head;
	    NODE prev  = temp;
	    while(temp-> ele != value)
	    {
	    	if (temp->next != NULL)
	    	{
	    		prev = temp;
	    		temp = temp->next;
	    	}
	    	else
	    		return;
	    }
	    if(temp->ele == value && temp == l1->head)
	    {
	    	l1->head = temp -> next;
	    	l1->count--;
	    	free(temp);
	    }
	    if (temp->ele == value)
	    {
	    	prev->next = temp-> next;
	        l1-> count --;
	        free(temp);
	   	}
	   }
}