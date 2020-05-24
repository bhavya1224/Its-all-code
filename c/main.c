#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *next;

};
struct Node *head = NULL;
void insert(int);
void display();
void reverse1();
int n = 1;

int main()
{
    int data;

    while(1){
        scanf("%d",&data);

        if (data >= 0){
                insert(data);
    }else{
    break;}

    }
    if(n==1){
        printf("No value has been inserted");
        return 0;
    }else{
        printf("Original Order: \n");
        display();
        reverse1();
        printf("\n");
        printf("Reverse Order:\n");
        display();
    }
return 0;
}

void insert(int data)
{


  struct Node *newnode = (struct Node*) malloc(sizeof(struct Node));
  struct Node *temp ;
  newnode -> data = data;
  newnode -> next = NULL;
  if(head == NULL){
    head =  newnode;
    n++;
    return;
  }
  else{
   temp = head;
   while(temp -> next != NULL){
    temp = temp->next;
   }
   temp-> next = newnode;
   n++;
   return;
  }

}
void reverse1()
{
    struct Node *prevNode, *curNode;

    if(head != NULL)
    {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL;

        while(head != NULL)
        {
            head = head->next;
            curNode->next = prevNode;
            prevNode = curNode;
            curNode = head;
        }

        head = prevNode;


    }
}
void display()
{
        struct Node *temp = head;

        while(temp!= NULL){
            printf("%d ",temp->data);
            temp = temp -> next;


        }


}

