/*
Subject      	: Data Structures Laboratory

Date	     	: 
 
Problem Statement:  Second year Computer Engineering class, set A of students 
 		    like Vanilla Ice-cream and set B of students like butterscotch 
 		    ice-cream. Write C/C++ program to store two sets using linked
		    list. compute and display-
			i.  Set of students who like either vanilla or butterscotch or both------
	   		ii. Set of students who like both vanilla and butterscotch
	     		iii.Set of students who like only vanilla not butterscotch
			iv. Set of students who like only butterscotch not vanilla
			v.  Number of students who like neither vanilla nor butterscotch
*/
#include<iostream>
using namespace std;
struct node
{
	int roll;
	struct node *next; 
};
class llicecream
{
	private:
		node *vhead,*bhead;
	public:
		llicecream()
		{
			vhead=bhead=NULL;	
		}
		void add();
		void dispVBB();
		void dispVB();
		void disponlyV();
		void disponlyB();
};
void llicecream:: add()
{	
	int n,ch,c,j,ro,i=0;
	node *trav1,*trav;
	cout<<"Enter the total no. of Students :";
	cin>>n;
	for(j=0;j<n;j++)
	{
		cout<<"\nEnter the Roll No.";
		cin>>ro;
		cout<<" \n Student Likes VANILLA(1/0) :";
		cin>>ch;
		cout<<" \n Student Likes BUTTERSCOTCH(1/0) :";
		cin>>c;
		if(ch==1)
		{
			node *temp=new node();
			temp->roll=ro;
			temp->next=NULL;
			if(vhead==NULL)
			{	
				vhead=temp;
				trav=vhead;
			}
			else
			{
				trav->next=temp;
				trav=temp;
			}
		}
		if(c==1)
		{
			node *temp=new node();
			temp->roll=ro;
			temp->next=NULL;
			if(bhead==NULL)
			{
				bhead=temp;
				trav1=bhead;
			}
			else
			{
				trav1->next=temp;
				trav1=temp;
			}
		}
		if((c==0)&&(ch==0))
			i++;
	}
	cout<<"NEITHER is : "<<i<<endl;
}
void llicecream:: dispVBB()//Vanilla , butterscotch or both
{	cout<<"Students who like either vanilla or butterscotch or both are :"<<endl;
	node *temp,*trav;
	trav=vhead;
	temp=bhead;
	while(trav!=NULL)
	{
		cout<<trav->roll<<"\t";
		trav=trav->next;
	}
	while(temp!=NULL)
	{
		int e=0;
		trav=vhead;
		while(trav!=NULL)
		{
			if(trav->roll==temp->roll)
			{
				e=1;
				break;
			}
			trav=trav->next;
		}
		if(e!=1)
			cout<<temp->roll<<"\t";
		temp=temp->next;
	}
	cout<<endl;
}
void llicecream:: dispVB()
{	
	cout<<"Students who like both vanilla and butterscotch are :"<<endl;
	node *temp=bhead;
	node *trav=vhead;
	while(temp!=NULL)
	{
		int e=0;
		trav=vhead;
		while(trav!=NULL)
		{
			if(trav->roll==temp->roll)
			{
				e=1;
				break;
			}
			trav=trav->next;
		}
		if(e==1)
			cout<<temp->roll<<"\t";
		temp=temp->next;
	}
	cout<<endl;	
}
void llicecream :: disponlyV()
{
	cout<<"Students who like only vanilla not butterscotch are :"<<endl;
	node *temp=bhead;
	node *trav=vhead;
	while(trav!=NULL)
	{
		int e=0;
		temp=bhead;
		while(temp!=NULL)
		{
			if(trav->roll==temp->roll)
			{
				e=1;
			}
			temp=temp->next;
		}
		if(e==0)
			cout<<trav->roll<<"\t";
		trav=trav->next;
	}
}
void llicecream :: disponlyB()
{	cout<<endl;
	cout<<"Students who like only butterscotch not vanilla are :"<<endl;
	node *temp=bhead;
	node *trav=vhead;
	while(temp!=NULL)
	{
		int e=0;
		trav=vhead;
		while(trav!=NULL)
		{
			if(temp->roll==trav->roll)
			{
				e=1;
			}
			trav=trav->next;
		}
		if(e==0)
			cout<<temp->roll<<"\t";
		temp=temp->next;
	}
}
int main()
{
	llicecream ice;
	ice.add();
	ice.dispVBB();
	ice.dispVB();
	ice.disponlyV();
	ice.disponlyB();
	cout<<endl;
	return 0;
}

