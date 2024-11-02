/* 
There are flight paths between cities. If there is a flight between city A and city B then there is an edge between the cities. The cost of the edge can be the time that flight takes to reach city B from A, or the amount of fuel used for the journey. Represent this as a graph. The node can be represented by airport name or name of the city. Use adjacency list representation of the graph or use adjacency matrix representation of the graph. Justify the storage representation used.

Name:Divya Chhaprwal
Roll no:22
Batch:B
Class-SE-1
*/

#include<iostream>
using namespace std;
#define MAX 20

struct node
{
 int vertex;
 int weight;
 node* next;
};

class list
{
 public:
   int i,ci,ph,u,v,w,array[10],weight;
   node* head[10];
   
   void initialize();
   void accept();
   void print();
};

void list::initialize()
{
 for(i=0;i<MAX;i++)
 {
  head[i]=NULL;
 }
}

void list::accept()
{
 cout<<"Enter the total no of cities:";
 cin>>ci;
 cout<<"Enter the total no of paths from one city to another:";
 cin>>ph;
 for(i=0;i<ph;i++)
 {
  cout<<"Enter the edge co-ordinates(city a,b):";
  cin>>u>>v;
  cout<<"Enter the time(weight) in hours:";
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
   node* trav;
    trav=p;
	while(trav->next!=NULL)
	{
	   trav=trav->next;
        }
	   trav->next=q;
   }
 }
}

void list::print()
{
   for(i=0;i<ci;i++)
   {
	cout<<"city"<<i<<"->  ";
	
		node *trav;
		trav=head[i];
		while(trav!=NULL)
		{
		  cout<<"City"<<trav->vertex<<"-Time  "<<trav->weight<<"->";
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
	list a;
	a.initialize();
	a.accept();
	a.print();
	return 0;
}
/*Output 

student@student-OptiPlex-3010:~$ g++ ass5.cpp
student@student-OptiPlex-3010:~$ ./a.out
Enter the total no of cities:5
Enter the total no of paths from one city to another:10
Enter the edge co-ordinates(city a,b):0
1
Enter the time(weight) in hours:10
Enter the edge co-ordinates(city a,b):0
3
Enter the time(weight) in hours:70
Enter the edge co-ordinates(city a,b):1
2
Enter the time(weight) in hours:90
Enter the edge co-ordinates(city a,b):1
3
Enter the time(weight) in hours:50
Enter the edge co-ordinates(city a,b):2
0
Enter the time(weight) in hours:30
Enter the edge co-ordinates(city a,b):2
4
Enter the time(weight) in hours:60
Enter the edge co-ordinates(city a,b):3
2
Enter the time(weight) in hours:100
Enter the edge co-ordinates(city a,b):4
3
Enter the time(weight) in hours:80
Enter the edge co-ordinates(city a,b):4
1
Enter the time(weight) in hours:40
Enter the edge co-ordinates(city a,b):4
0
Enter the time(weight) in hours:20
city0->  City1-Time10  ->City3-Time70->End
city1->  City2-Time90  ->City3-Time50->End
city2->  City0-Time30  ->City4-Time60->End
city3->  City2-Time100->End
city4->  City3-Time80  ->City1-Time40->  City0-Time20->End
Segmentation fault (core dumped)
student@student-OptiPlex-3010:~$ gedit ass5.cpp
*/
   
