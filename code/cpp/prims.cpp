#include<iostream>
#include<stdio.h>
using namespace std;

int weight[10][10],nodes,visited[10];

int main()
{
int i,j,k,l,m,min,total_cost=0;
for(i=0;i<nodes;i++)
{
	visited[i]=0;
}
cout<<"\nenter total no. of nodes:";
cin>>nodes;
for(i=0;i<nodes;i++)
{
	cout<<"\nEnter value for Row:\t"<<i+1;
	for(j=0;j<nodes;j++)
	{
		cin>>weight[i][j];
		
	}
}
cout<<"\nPrinting the matrix";
for(i=0;i<nodes;i++)
{
	cout<<"\nRow:"<<i+1;
	for(j=0;j<nodes;j++)
	{
	cout<<"\t"<<weight[i][j]<<"\t";
	}
}
min=9999;
	for(i=0;i<nodes;i++)
	{
		for(j=0;j<nodes;j++)
		{
			if(weight[i][j]<min && weight[i][j]!=0)
			{
			min=weight[i][j];
			k=i;
			l=j;
			}
		}
	}
	printf("\nEdge %d-%d having weight %d",k,l,min);
	visited[k]=1;
	visited[l]=1;
	total_cost=min;
	
	for(m=0;m<nodes-2;m++)
	{
		min=9999;
		for(i=0;i<nodes;i++)
		{
			if(visited[i]==1)
			{
			for(j=0;j<nodes;j++)
			{
				if(visited[j]!=1)
				{
					if(weight[i][j]<min && weight[i][j]!=0)
					{
					min=weight[i][j];
					k=i;
					l=j;
					}
				}
			}
			}
		}
	



printf("\nEdge %d-%d having weight %d",k,l,min);
visited[k]=1;
visited[l]=1;
total_cost=total_cost+min;
}
printf("\nTotal cost is %d",total_cost);
return 0;










}
