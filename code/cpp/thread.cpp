#include<iostream>
using namespace std;

class node
{
public:
	int data;
	int lbit,rbit;
	node *left,*right;
};
class TBT
{
	node *root,*dummy;
	public:
		void create(int num);
		void insert(node *trav,node *temp);
		void preorder();
		void inorder(node *trav,node *dummy);
		void postorder(node *trav,node *dummy);
		void display();
		TBT()
		{
		root=NULL;
		dummy=NULL;
		}
}*root,*dummy;
void TBT::create(int num)
{
	node *trav,*temp;
	temp=new node();
	temp->data=num;
	temp->lbit=0;
	temp->rbit=0;
	if(root==NULL)
	{
		dummy=new node;
		dummy->data=-9999;
		dummy->lbit=1;
		dummy->rbit=1;
		dummy->left=temp;
		dummy->right=dummy;
		temp->left=dummy;
		temp->right=dummy;
		root=temp;
	}
	else
	{
		insert(trav->left,temp);
	}
}


if(temp->data>trav->data)
{
	if(trav->rbit==0)
	{
		temp->right=trav->right;
		temp->left=trav;
		trav->right=temp;
		trav->rbit=1;
	}
	else
	{
		insert(trav->right,temp);
	}
}

void TBT::preorder()
{
	node *trav;
	trav=root;
	while(trav!=dummy)
	{
		cout<<trav->data<<endl;
		if(trav-lbit==1)
		{
			trav=trav->left;
		}
		else
		{
			while(trav->rbit==0) && trav->right!=dummy)
			{
				trav=trav->right;
			}
			trav=trav->right;
		}
	}
}

void TBT::display()
{
	int n,i,data;
	cout<<"\nEnter the number of nodes :\n";
	cin>>n;
	cout<<"\nEnter the data in the nodes \n";
	for(i=0;i<n;i++)
	{
	cin>>data;
	create(data);
	}
	cout<<"\n Preorder: \n";
	preorder();
	
}
int main()
{
	TBT T;
	T.display();
	return 0;
}


























