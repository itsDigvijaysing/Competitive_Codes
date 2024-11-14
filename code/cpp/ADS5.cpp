#include<iostream>
using namespace std;

int weight[10][10],nodes,visited[10];

int main()
{
	int i,j,k,l,m,n,min;
	
	cout<<"\nEnter the no. of nodes : ";
	cin>>nodes;
	
	for(i=0;i<nodes;i++)
	{
		visited[i]=0;
	}
	
	for(i=0;i<nodes;i++)
	{
		cout<<"\nEnter the values for row "<<i<<" : ";
		for(j=0;j<nodes;j++)
		{
			cin>>weight[i][j];
		}
	}
	
	cout<<"\nMatrix values : "<<endl;
	for(i=0;i<nodes;i++)
	{
		cout<<"Row no. "<<i<<" values : ";
		for(j=0;j<nodes;j++)
		{
			cout<<weight[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	min=9999;
	for(i=0;i<nodes;i++)
	{
		for(j=0;j<nodes;J++)
		{
			if(weight[i][j]<min && weight[i][j]!=0)
			{
				min=weight[i][j];
				k=i;
				l=j;
			}
		}
	}
	return 0;
}
