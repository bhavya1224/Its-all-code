#include <iostream>

using namespace std;
struct node {
    int data;
    node* next;

}*head = NULL;
void insert(int);
void display(int);
int main()
{
   int data;
   int n;
   do{
    cin>>data;
    insert(data);
     }while(data>=0);

   cout<<"Enter the nth node";
   cin>>n;

display(n);

}
void insert(int data){
     node* newnode = new node;
  struct node *temp ;
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
int length(){
struct node *temp;
int count1 = 0;
temp = head;
while(temp->next != NULL){
            temp = temp->next;
            count1+=1;
            }

return count1;
}
void display(int n){
    int l, u ;
    struct node *temp1;
    temp1 = head ;
    l = length();
    u = (l - n)-1;
    for(int i = 0 ; i<=u ; i++){
        temp1 = temp1->next;

    }
    cout<<temp1->data;
    }




