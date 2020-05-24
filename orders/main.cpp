#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left , *right;
}; Node *root = NULL;
void insert(int data);
void preorder(Node *root);
void inorder(Node *root);
void postorder(Node *root);
int main()
{
    int data;
    int n;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>data;
        insert(data);
    }
cout<<"In-Order Traversal:";
inorder(root);
cout<<endl;
cout<<"Pre-Order Traversal:";
preorder(root);

cout<<endl;
cout<<"Post-Order Traversal:";
postorder(root);
cout<<endl;

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
void preorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    else

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

}
void inorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    else

        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

}
void postorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }
    else

        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";

}
