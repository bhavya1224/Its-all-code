#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left , *right;
}; Node *root = NULL;
void insert(int data);
int diameter(Node *root);
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

cout<<"diameter :"<< (diameter(root->left) + diameter(root->right) + 1) ;


    return 0;
}

void insert(int data){
    Node *temp, *newNode;
    temp = root;
    newNode = new Node;
    newNode->left = NULL;
    newNode->data = data;
    newNode->right = NULL;
    if(root==NULL){
        root=newNode;
    }else{
        while(1){
            if(temp->left==NULL){
                temp->left = newNode;
                break;
            }else if(temp->right==NULL){
                temp->right = newNode;
                break;
            }else{
                temp = temp->left;
            }
        }
    }
}int diameter(Node *root)

{
    int ldepth;
    int rdepth;
    if(root == NULL)
		return 0 ;
	else
	{
		ldepth = diameter(root->left);
		rdepth = diameter(root->right);
		if(ldepth > rdepth)
			return( ldepth + 1 );
		else
			return( rdepth + 1 );

    }

}

