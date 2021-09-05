/*Name:Rajput Digvijaysing
Roll No. 14
Div:2 A
Assignment 12:
Write C++ Program using STL for Deque(Doubly ended queue)*/

#include<iostream>
#include<deque>
using namespace std;
int main()
{
  int item,ch;
  char n;
  deque<int>dq;
  deque<int>::iterator i;

  do
  {
    cout<<"\n1.Insert from rear";
    cout<<"\n2.Insert from front";
    cout<<"\n3.Delete from front";
    cout<<"\n4.Delete from rear";
    cout<<"\n5.Size of deque";
    cout<<"\n6.Display";
    cout<<"\nEnter your choice";
    cin>>ch;
    switch(ch)
    {
		case 1:
				cout<<"\nEnter the element";
				cin>>item;
				dq.push_back(item);
				break;
		case 2: cout<<"\nEnter the element";
				cin>>item;
				dq.push_front(item);
				break;
		case 3:
		        item=dq.front();
		        dq.pop_front();
		        cout<<"\nThe deleted element is"<<item;
				break;
	   	case 4: item=dq.back();
	   	        dq.pop_back();
	   	        cout<<"\nThe deleted element is"<<item;
				break;
		case 5: cout<<"\n Size of Deque"<<dq.size();
				break;
		case 6:
		        cout<<"\nElements in Deque are:\n";
				for(i=dq.begin();i!=dq.end();i++)
				cout<<*i<<" ";
		        break;

    }
				cout<<"\nDo you want to continue\n";
				cin>>n;

	}while(n=='y' || n=='Y');
	return 0;
}
/*
sudent@sudent-OptiPlex-3010:~$ gedit dequeue.cpp
sudent@sudent-OptiPlex-3010:~$ ./a.out

1.Insert from rear
2.Insert from front
3.Delete from front
4.Delete from rear
5.Size of deque
6.Display
Enter your choice1

Enter the element1
Do you want to continuey

1.Insert from rear
2.Insert from front
3.Delete from front
4.Delete from rear
5.Size of deque
6.Display
Enter your choice1

Enter the element2
Do you want to continuey

1.Insert from rear
2.Insert from front
3.Delete from front
4.Delete from rear
5.Size of deque
6.Display
Enter your choice2

Enter the element3
Do you want to continuey

1.Insert from rear
2.Insert from front
3.Delete from front
4.Delete from rear
5.Size of deque
6.Display
Enter your choice2

Enter the element4
Do you want to continuey

1.Insert from rear
2.Insert from front
3.Delete from front
4.Delete from rear
5.Size of deque
6.Display
Enter your choice6

Elements in Deque are:
4 3 1 2
Do you want to continuey

1.Insert from rear
2.Insert from front
3.Delete from front
4.Delete from rear
5.Size of deque
6.Display
Enter your choice3

The deleted element is4
Do you want to continuey

1.Insert from rear
2.Insert from front
3.Delete from front
4.Delete from rear
5.Size of deque
6.Display
Enter your choice4

The deleted element is2
Do you want to continuey

1.Insert from rear
2.Insert from front
3.Delete from front
4.Delete from rear
5.Size of deque
6.Display
Enter your choice5

 Size of Deque2
 Do you want to continuey

1.Insert from rear
2.Insert from front
3.Delete from front
4.Delete from rear
5.Size of deque
6.Display
Enter your choice6

Elements in Deque are:
3 1 Do you want to continuen
*/

