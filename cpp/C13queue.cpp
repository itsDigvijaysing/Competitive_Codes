  /*Name:Rajput Digvijaysing
Roll No: 14
Div:2 A
Assignment 12:
Write C++ program using STL for implementation of  queue   */

    #include <iostream>

    #include <queue>

    #include <string>

    #include <cstdlib>

    using namespace std;

    int main()

    {

        queue<int> q;

        int choice, item;

        while (1)

        {

            cout<<"\n---------------------"<<endl;

            cout<<"Queue Implementation in Stl"<<endl;

            cout<<"\n---------------------"<<endl;

            cout<<"1.Insert Element into the Queue"<<endl;

            cout<<"2.Delete Element from the Queue"<<endl;

            cout<<"3.Size of the Queue"<<endl;

            cout<<"4.Front Element of the Queue"<<endl;

            cout<<"5.Last Element of the Queue"<<endl;

            cout<<"6.Exit"<<endl;

            cout<<"Enter your Choice: ";

            cin>>choice;

            switch(choice)

            {

            case 1:

                cout<<"Enter value to be inserted: ";

                cin>>item;

                q.push(item);

                break;

            case 2:

                item = q.front();

                q.pop();

                cout<<"Element "<<item<<" Deleted"<<endl;

                break;

            case 3:

    	           cout<<"Size of the Queue: ";

    	           cout<<q.size()<<endl;

                break;

            case 4:

                cout<<"Front Element of the Queue: ";

    	           cout<<q.front()<<endl;

                break;

            case 5:

                cout<<"Back Element of the Queue: ";

                cout<<q.back()<<endl;

                break;

            case 6:

                exit(1);

    	           break;

            default:

                cout<<"Wrong Choice"<<endl;

            }

        }

        return 0;

    }

/*student@student-OptiPlex-3010:~$ g++ queue1.cpp
student@student-OptiPlex-3010:~$ ./a.out

---------------------
Queue Implementation in Stl

---------------------
1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 1
Enter value to be inserted: 1

---------------------
Queue Implementation in Stl

---------------------
1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 1
Enter value to be inserted: 5

---------------------
Queue Implementation in Stl

---------------------
1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 1
Enter value to be inserted: 2

---------------------
Queue Implementation in Stl

---------------------
1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 2
Element 1 Deleted

---------------------
Queue Implementation in Stl

---------------------
1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 3
Size of the Queue: 2

---------------------
Queue Implementation in Stl

---------------------
1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 4
Front Element of the Queue: 5

---------------------
Queue Implementation in Stl

---------------------
1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 5
Back Element of the Queue: 2

---------------------
Queue Implementation in Stl

---------------------
1.Insert Element into the Queue
2.Delete Element from the Queue
3.Size of the Queue
4.Front Element of the Queue
5.Last Element of the Queue
6.Exit
Enter your Choice: 6
student@student-OptiPlex-3010:~$
*/
