#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;

}*head = NULL;
void insert(int);
void display();
void displayReversed();
int main()
{
    int data;

    do{
        cin>>data;
        insert(data);
    }while (data>=0);



display();
displayReversed();
}
void insert(int data)
{

  node* newnode = new node;

  newnode -> data = data;
  newnode -> next = NULL;
  if(head == NULL)
    head =  newnode;//first node
  else{
   newnode->next=head;
   head = newnode;
   }
}
void display()
{
        struct node *temp = head;
        while(temp!= NULL){
            cout<<temp->data<<" " ;
            temp = temp -> next;

        }
}
void displayReversed() {
  struct node* temp1 = head;
  if( temp1 == NULL ) return;
  displayReversed(temp1->next);
  cout << temp1->data << endl;
}

}
