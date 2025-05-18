#include<iostream>
using namespace std;
#define size10;
int n;

template<class T>
void selection(T A[size]);
{
	int i,j,min;
	int temp;
		for(i=0;i<n;i++)
		{
			min=i;
		for(j=i+1;j<n;j++)
		{		
		     if(A[j]<A[min])
		 	min=j;
		}			     }
		    temp=A[i];
		      A[i]=A[min];
		      A[min]=temp;
		 }
cout<<"\n sorted list=\n";
for(i=0;i<n;i++)
cout<<"\t"<<A[i];
}

int main()
{
     int i,A[size];
     float B[size];

	cout<<"selection sort\n";
	cout<<"integer elements\n";
	cout<<"enter the element do you want\n";
	cin>>n;
	cout<<"\n enter the integer element";
	for(i=0;i<n;i++)
	cin>>A[i];
	selection(A);
	
	cout<<"enter elements\n";
	cout<<"enter how many elements you want\n";
	cin>>n;
	cout<<"enter float elements\n";
	for(i=0;i<n;i++)
	cin>>B(i);
	selection(B)
	return 0;
}
	
	
	
	for(i=0;i<n;i++)
	{ 
	  cin>>A[i];
	}
	return 0;
}
	  
	 
		 
		 		
      

