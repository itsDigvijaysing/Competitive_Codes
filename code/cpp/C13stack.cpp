/*Name:Rajput Digvijaysing
Roll No: 14
Div:2 A
Assignment 12:
 Write a C++ Program using STL for  Implementation of  Stack */

    #include <iostream>

    #include <stack>

    #include <string>

    #include <cstdlib>

    using namespace std;

    int main()

    {

        stack<int> st;

        int choice, item;

        while (1)

        {

            cout<<"\n------------------------"<<endl;

            cout<<"Stack Implementation in STL"<<endl;

            cout<<"\n------------------------"<<endl;

            cout<<"1.Insert Element into the Stack"<<endl;

            cout<<"2.Delete Element from the Stack"<<endl;

    	    cout<<"3.Size of the Stack"<<endl;

            cout<<"4.Top Element of the Stack"<<endl;

            cout<<"5.Exit"<<endl;

            cout<<"Enter your Choice: ";

            cin>>choice;

            switch(choice)

            {

            case 1:

                cout<<"Enter value to be inserted: ";

                cin>>item;

                st.push(item);

                break;

            case 2:

                 item = st.top();

                 st.pop();

    	         cout<<"Element "<<item<<" Deleted"<<endl;

                 break;

            case 3:

    	         cout<<"Size of the Queue: ";

    	         cout<<st.size()<<endl;

                 break;

            case 4:

    	         cout<<"Top Element of the Stack: ";

    	         cout<<st.top()<<endl;

                 break;

            case 5:

                exit(1);

    	    break;

            default:

                cout<<"Wrong Choice"<<endl;

            }

        }

        return 0;

    }
/*Output:
sudent@sudent-OptiPlex-3010:~$ g++ stack1.cpp
sudent@sudent-OptiPlex-3010:~$ ./a.out

------------------------
Stack Implementation in STL

------------------------
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 1
Enter value to be inserted: 1

------------------------
Stack Implementation in STL

------------------------
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 1
Enter value to be inserted: 2

------------------------
Stack Implementation in STL

------------------------
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 1
Enter value to be inserted: 3

------------------------
Stack Implementation in STL

------------------------
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 2
Element 3 Deleted

------------------------
Stack Implementation in STL

------------------------
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 3
Size of the Queue: 2

------------------------
Stack Implementation in STL

------------------------
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 4
Top Element of the Stack: 2

------------------------
Stack Implementation in STL

------------------------
1.Insert Element into the Stack
2.Delete Element from the Stack
3.Size of the Stack
4.Top Element of the Stack
5.Exit
Enter your Choice: 5
sudent@sudent-OptiPlex-3010:~$ */

