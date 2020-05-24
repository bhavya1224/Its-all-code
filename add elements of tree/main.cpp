#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left , *right;
}; Node *root = NULL;
void insert(int data);
void display(Node *root);
int add (Node *root);

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
    cout<<"the sum is: "<<add(root);



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



int add(Node *root)
{
	if(root == NULL)
		return 0 ;
	return(root->data + add(root->left)+add(root->right));
}
