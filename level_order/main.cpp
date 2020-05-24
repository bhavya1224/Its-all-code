#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left , *right;
}; Node *root = NULL;
void insert(int data);
int depth(Node *root);
void print_level_order(Node *root , int );
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

 int h = depth(root);
 for(int i = 1 ; i<= h ; i++)
 {
     print_level_order(root, i);
 }




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
int depth(Node *root)
{
    if(root == NULL)
		return 0 ;
	else
	{
		int ldepth = depth(root->left);
		int rdepth = depth(root->right);
		if(ldepth > rdepth)
			return(ldepth + 1);
		else
			return(rdepth + 1);
	}
}
void print_level_order(Node *root , int h)
{
    if(root == NULL)
		return ;
	if(h == 1)
		cout<<root->data<<" ";
	else if(h >1)
	{
		print_level_order(root->left , h -1);
		print_level_order(root->right,  h-1);
	}
}
