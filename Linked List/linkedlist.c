#include<stdio.h>
#include<stdlib.h>
struct Node *createLinkedList(int arr[], int size);
void insertAtBegining(struct Node *head, int data);
void printList(struct Node *head);
void insertEnd(struct Node *head, int data);
void insertAtPos(struct Node *head, int data, int position);
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int a[] = {5, 10, 30};
    struct Node *head;
    head = createLinkedList(a, 3);
    printList(head);
    insertAtBegining(head, 500);
    printList(head);
    insertEnd(head, 700);
    printList(head);
    insertAtPos(head, 99, 1);
    printList(head);
    return 0;
}

void insertAtPos(struct Node *head, int data, int position)
{
    struct Node *temp = head;
    int counter = 0;
    while(temp != NULL)
    {
        counter++;
        if(counter == position)
        {
            struct Node *newnode = (struct Node *)malloc(sizeof(struct Node()));
            newnode->data = data;
            newnode->next = temp->next;
            temp->next = newnode;
        }
        temp = temp->next;
    }
}

void insertEnd(struct Node *head, int data)
{
    struct Node *current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node()));
    temp->data = data;
    temp->next = NULL;

    current->next = temp;
}

void insertAtBegining(struct Node *head, int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;

    struct Node *newhead = temp;

    printList(newhead);
}

void printList(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL)
    {
        printf("%d => ",current->data);
        current = current->next;
    }
    printf("NULL\n");
}

struct Node *createLinkedList(int arr[], int size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    for(int i=0; i<size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node()));
        temp->data = arr[i];
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}