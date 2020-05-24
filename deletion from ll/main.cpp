
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

}*head = NULL;
void insert(int);
void display();
void delete1();

int main()
{
    int data;

    do{
        cin>>data;
        insert(data);
    }while (data>=0);



delete1();

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

void delete1(){
    struct Node *t1;
    t1 = head ;
    head=head->next;
    free(t1);
    cout<<"after deletion";
    display();
}
void display()
{



        struct Node *temp = head;
        while(temp->next != NULL){
            cout<<temp->data;
            temp = temp -> next;

        }


}
