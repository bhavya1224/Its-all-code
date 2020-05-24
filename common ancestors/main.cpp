#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left , *right;
}; Node *root = NULL;
void insert(int data);
int common(Node *root, int , int);

int main()
{
    int data;
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
int first;
int seond;
cin>>first;
cin>>second;

cout<<common(root , first , second);


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
int common (Node *root , int f , int s)
{
    if(f >root->data && s >root->data)
        return common( root->right , f , s);

    else if(f < root->data && s < root->data )
        return common( root->left , f , s);
    else
        return (root->data);
}
