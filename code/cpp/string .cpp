
/*
Write C++ program for string operations- copy, concatenate, check substring, equal,
reverse and length.
*/


#include<iostream>
#include<cstring>
using namespace std;
class str
{
        public:
                char string[51],cp[51],cm[51],co[51],con1[51],con2[51];
                int i,a=0,count=0;
             public:
                        void get()
                        {
                                cout<<"\n enter string = ";
                                cin>>string;
                        }

                        void size()
                        {
                        for(i=0;string[i]!='\0';i++)
                                {
                                count++;
                                }                               
                        cout<<"\n\n length of string is = "<<count;
                        }


                        void copy()
                        {
                        cout<<"\n\n copied string is = ";
                        for(i=0;i<count;i++)
                        {
                        cp[i]=string[i];
                        cout<<cp[i];
                        }
                        }

                        void comp()
                        {
                        cout<<"\n\n enter string for compare = ";
                        cin>>co;
                        for(i=0;i<count;i++)
                        {
                        if(co[i]==string[i])
                        cout<<"\n string is equal ";
                        else
                        cout<<"\n string is not equal ";
                        }
                        }
                        void reverse()
                        {
                        cout<<"\n\n reverse string is =  ";
                        for(i=0;string[i]!='\0';i++)
                        {
                        a++;
                        }

                        for(i=a-1;i>=0;i--)
                        {
                        cout<<string[i];
                        }
                        }


                        void substring()
                        {
                        cout<<"\n\n sub string is = ";
                        for(i=1;i<count;i++)
                        {
                        cout<<string[i];
                        }
                        }

                        void con()
                        {
                        cout<<"\n\n enter first string for concatenate = ";
                        cin>>con1;

                        cout<<"\n enter second string for concatenate = ";
                        cin>>con2;

                        cout<<"\n concatenate string is = "<<con1<<con2;

                        }

                        };


                        int main()
                        {
                        str st;
                        st.get();
                        st.size();
                        st.copy();
                        st.comp();
                        st.reverse();
                        st.substring();
                        st.con();
                        return 0;
                        }

/* Output-:
enter string = 12345


 length of string is = 5

 copied string is = 12345

 enter string for compare = 23456

 string is not equal 
 string is not equal 
 string is not equal 
 string is not equal 
 string is not equal 

 reverse string is =  54321

 sub string is = 2345

 enter first string for concatenate = 12345

 enter second string for concatenate = 23456

 concatenate string is = 1234523456
*/


