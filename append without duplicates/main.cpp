#include <iostream>

using namespace std;
struct node{
 int data;
 node *next;

}*head = NULL;
void insert(int);
bool search(int);
void display();
int main()
{
   int data;
   int val;
   do{
    cin>>data;
    if (search(data))
        {
       continue;
       }
    else{
        insert(data);
    }
    }while(data>=0);

display();
}
void insert(int data){
    node *newnode = new node;
    struct node *temp;
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
        head = newnode;
    else{
         temp = head;
   while(temp -> next != NULL){
    temp = temp->next;
   }
   temp-> next = newnode;
  }

    }
bool search(int val){
      struct node *temp;
      temp = head ;
      while(temp!=NULL){
        if (temp->data == val){
                return true;
                break;
        }
        else{
            temp= temp->next;
        }
        }
        return false;
      }
void display()
{
        struct node *temp = head;
        while(temp->next!= NULL){
            cout<<temp->data<<endl;
            temp = temp -> next;

        }


}


