#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left , *right;
}; Node *root = NULL;
void insert(int data);
void display(Node *root , int);

int main()
{
    int data;
    int k;
    while(1)
    {
        cin>>data;
        if(data>=0)
        {
            insert(data);
        }
        else
            break;
    }
cin>>k;
    display(root,k);


    return 0;
}

void insert(int data)
{
    Node *temp , *newnode;
    temp = root;
    newnode = new Node;
    newnode->left = NULL;
    newnode->data=data;
    newnode->right=NULL;
    if(root == NULL)
        root = newnode;
    else
    {
        while(1)
        {
            if (data>temp->data)
            {
                if(temp->right != NULL)
                    temp = temp->right;
                else
                {
                    temp->right = newnode;
                    break;
                }
            }
            else
            {
                if(temp->left!= NULL)
                    temp=temp->left;
                else
                {
                    temp->left = newnode;
                    break;
                }
            }
        }
    }

}
void display(Node *root , int k)
{    static int count = 0;
     int min;
    if(root == NULL)
    {
        return;
    }
    else
    {
        display(root->left,k);
        count += 1;
        if (count  == k)
            cout<< root->data;
        display(root->right,k);
    }





}
