#include<iostream>     //Digvijaysing   
#include<string>
using namespace std;

class userdata
{
        int age,income,x,a;
        char city[10],vehicle;
        
        public:
                void accept()
                {
                        g:cout<<"\n\n#### Enter Details ####"<<endl;
                        cout<<"\nEnter your Age :";
                        cin>>age;
                        cout<<"\nEnter your Income :";
                        cin>>income;
                        cout<<"\nEnter your City name :";
                        cin>>city;
                        cout<<"\nDo you have Vehicle[Y/N] :";
                        cin>>vehicle;
                
                
                try
                {
                        if(age>55 || age<18)
                        throw 1;
                        else if(income<50000 || income>200000)
                        throw 2;
                        else if(vehicle=='n')
                        throw 3;
                        else if(city=="pune" || city=="mumbai")
                        cout<<"Entered city is Correct"<<endl;
                        
                        
                }
                
                catch(int x)
                {
                a=x;
                }
                switch(a)
                {
                        case 1:
                                cout<<"\nException occur at age"<<endl;
                                goto g;
                                break;
                        
                        case 2:
                                cout<<"\nException occur at Income"<<endl;
                                goto g;
                                break;
                         
                        case 3:
                                cout<<"\nException occur at vehicle"<<endl;
                                goto g;
                                break;       
                        case 4:
                                cout<<"\nException occur at city"<<endl;
                                goto g;
                                break;
                }
                }
                
                void output()
                {
                cout<<"\n###### DATA #####\n"<<endl;
                cout<<"Your age is :"<<age<<endl;
                cout<<"Your income is :"<<income<<endl;
                if(vehicle=='y') 
                {
                cout<<"You have Vehicle"<<endl;
                }
                else 
                {
                cout<<"You Don't have Vehicle"<<endl;
                }
                cout<<"Your city is :"<<city<<endl;
                }
};
int main()
{
        userdata a;
        a.accept();
        a.output();
	
return 0;
}
