#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

}*head = NULL;
void insert(int);
void display();
int main()
{
    int data;

    do{
        cin>>data;
        insert(data);
    }while (data>=0);



 display();

}

void insert(int data)
{

  Node* newnode = new Node;
  struct Node *temp ;
  newnode -> data = data;
  newnode -> next = NULL;
  if(head == NULL)
    head =  newnode;
  else{
   temp = head;
   while(temp -> next != NULL){
    temp = temp->next;
   }
   temp-> next = newnode;
   temp = temp->next;
   temp-> next = head;
  }


}
void display()

{



        struct Node *temp = head;
        while(temp!= NULL){
            cout<<temp->data<<endl;
            temp = temp -> next;

        }


}





