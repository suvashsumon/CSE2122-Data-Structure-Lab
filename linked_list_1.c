#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    int key;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* current = NULL;

void insert(int key, int data)
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));

    if(key==0)
    {
        newnode->key = key;
        newnode->data = data;

        newnode->next = NULL;
        head = newnode;
        current = newnode;
    }
    else
    {
        newnode->key = key;
        newnode->data = data;

        newnode->next = NULL;
        current->next = newnode;
        current = newnode;
    }
    
}

void printlist()
{
    struct Node* ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct node* delete(int key)
{
   struct node* current = head;
   struct node* previous = NULL;
	
   if(head == NULL) {
      return NULL;
   }

   while(current->key != key) {

      if(current->next == NULL) {
         return NULL;
      } else {
         previous = current;
         current = current->next;
      }
   }

   if(current == head) {
      head = head->next;
   } else {
      previous->next = current->next;
   }    
	
   return current;
}

int main()
{
    int data;
    printf("Enter 6 value:\n");
    for(int i=0; i<6; i++)
    {
        scanf("%d", &data);
        insert(i, data);
    }
    printf("\n");
}