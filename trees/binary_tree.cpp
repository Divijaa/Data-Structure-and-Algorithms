#include<iostream>
using namespace std;
struct ll{
	int data;
	struct ll* left;
	struct ll* right;
	
};
typedef struct ll node;

node* create()
{
	node *p;
	p=new node;
	cout<<endl<<"enter the data(-1 if you don't want to):";
	cin>>p->data;
	if(p->data==-1)
	{
		return 0;
	}
	cout<<"enter the left child of"<<" "<<p->data;
	p->left=create();
	cout<<"enter the right child of"<<" "<<p->data;
	p->right=create();
	return p;
	
}
void preorder(node* root)
{
	if(root==0)
	{
		return;
	}
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}
void postorder(node* root)
{
	if(root==0)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;
}
void inorder(node* root)
{
	if(root==0)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}
int isBST(node* root)
{
    static node*prev=NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
        return 0;
        }
    if(prev!=NULL&&root->data<=prev->data)
    {
        return 0;
    }
    prev=root;
    return isBST(root->right);
    }
    else{
        return 1;
    }
}

int main()
{
	node* root;
	root=0;
	root=create();
	cout<<"the preorder is:"<<" ";
	preorder(root);
	cout<<endl<<"the inorder is:"<<" ";
	inorder(root);
	cout<<endl<<"the postorder is:"<<" ";
	postorder(root);
	cout<<endl;
	cout<<isBST(root);
}
