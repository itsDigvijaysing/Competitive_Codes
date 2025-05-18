#include<iostream>
using namespace std;
#define MAX 20
struct node
{
	int vertex;
	int weight;
	node *next;
};
class adjacencylist
{
	private:
		int nV,nE,array[MAX],u,v,weight;
		node *head[20];
	public:
		void initialize();
		void accept();
		void print();
};
void adjacencylist::initialize()
{
	for(int i=0;i<MAX;i++)
	{
		head[i]=NULL;
	}
}
void adjacencylist::accept()
{
	cout<<"\n Enter the total number of the city.\n";
	cin>>nV;
	cout<<"\n Enter the total number of way from one city to another city.\n";
	cin>>nE;
	for(int i=0;i<nE;i++)
	{
		cout<<"\n Enter the edge co-ordinates(city A,B)\n";
		cin>>u>>v;
		cout<<"\n Enter the fare\n";
		cin>>weight;
		node *p,*q;
		q=new node;
		q->vertex=v;
		q->weight=weight;
		q->next=NULL;
		
		p=head[u];
		if(p==NULL)
		{
			head[u]=q;
		}
		else
		{
			node *trav;
			trav=p;
			while(trav->next!=NULL)
			{
				trav=trav->next;
			}
			trav->next=q;
		}
	}
}
void adjacencylist::print()
{
	cout<<"\n Flight schedule\n";
	for(int i=0;i<nV;i++)
	{
		cout<<"\n city"<<i<<"->";
		node *trav;
		trav=head[i];
		while(trav!=NULL)
		{
			cout<<"\n City"<<trav->vertex<<",Fare"<<trav->weight<<"->";
			trav=trav->next;
		}
		if(trav==NULL)
		{
			cout<<"End";
		}
		cout<<"\n";
	}
}
int main()
{
	adjacencylist a;
	a.initialize();
	a.accept();
	a.print();
	return 0;
}
