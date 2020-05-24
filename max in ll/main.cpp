#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;

}*head = NULL;
void insert(int);
void display();
void  maxi();
int main()
{
    int data;

    do{
        cin>>data;
        insert(data);
    }while (data>=0);
    maxi();




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
  }

}
void maxi()
{
        struct Node *temp = head;
        int max1 = 0 ;
        while(temp->next!= NULL){
            if (temp->data > max1){
                max1 = temp->data;
            }

            else{
            temp = temp -> next;
            }
        }
            cout<<max1;
        }




