#include "linkedList.h"

int main()
{
    LIST newList = createNewList();
    NODE n1 = createNewNode("2023B5PS1325P", "Aarav Shah", "B5", 100, 100, 100);
    NODE n2 = createNewNode("2023B5PS1325P", "Aarav Shah", "B5", 100, 100, 100);
    NODE n3 = createNewNode("2023B5PS1325P", "Aarav Shah", "B5", 100, 100, 100);
    NODE n4 = createNewNode("2023B5PS1325P", "Aarav Shah", "B5", 100, 100, 100);
    NODE n5 = createNewNode("2023B5PS1325P", "Aarav Shah", "B5", 100, 100, 100);
    NODE n6 = createNewNode("2023B5PS1325P", "Aarav Shah", "B5", 100, 100, 100);
    NODE n7 = createNewNode("2023B5PS1325P", "Aarav Shah", "B5", 100, 100, 100);
    NODE n8 = createNewNode("2023B5PS1325P", "Aarav Shah", "B5", 100, 100, 100);
    NODE n9 = createNewNode("2023B5PS1325P", "Aarav Shah", "B5", 100, 100, 100);

    NODE retNode = search(newList, "2023B5PS1325P");
    if (retNode != NULL)
        printNode(retNode);
    printList(newList);
    insertNodeIntoList(n1, newList);
    printList(newList);
    insertNodeIntoList(n2, newList);
    printList(newList);
    insertNodeIntoList(n3, newList);
    printList(newList);
    insertNodeIntoList(n4, newList);
    printList(newList);
    insertNodeIntoList(n5, newList);
    printList(newList);
    insertNodeIntoList(n6, newList);
    printList(newList);
    insertNodeIntoList(n7, newList);
    printList(newList);
    insertNodeIntoList(n8, newList);
    printList(newList);
    insertNodeIntoList(n9, newList);
    printList(newList);

    retNode = search(newList, "2023B5PS1325P");
    if (retNode != NULL)
        printNode(retNode);

    for (int i = 0; i < 9; i++)
    {
        removeElem("2023B5PS1325P", newList);
        printList(newList);
    }
}