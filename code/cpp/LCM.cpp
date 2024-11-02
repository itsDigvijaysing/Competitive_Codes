//LCM of two numbers
    #include<iostream>
    using namespace std;
    int findLCM(int,int);
    //main program
    int main()
    {
            int first,second;
            cout<<"Enter first number : ";
            cin>>first;
            cout<<"Enter second number : ";
            cin>>second;
            //calling function to find lcm
            cout<<findLCM(first,second)<<" is the LCM of two numbers.";
            return 0;
    }
    //function to find lcm
    int findLCM(int first, int second)
    {  
        static int fact = first;
        // if true then fact is the lcm
        if(fact % first == 0 && fact % second == 0)
        {
            return fact;
        }
        //if false call function again
        else
        {
            fact=fact + first;
            findLCM(first,second);
        }
        return fact;
    }