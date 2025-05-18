/*Name:Rajput Digvijaysing
Roll No. 14
Div:2 A
Assignment 6:
PROBLEM STATEMENT : A book shop maintains the inventory of books that are being sold at the shop. The List includes details such as author ,titel ,price,publisherand stock position.Whenever a customer wants a book,the sales person inputs the titel and author and the system searches the list and display the book details and requests for the number of copies required.If the requested copies book details and requstes for the number of copies required.If the requested copies are availibel then total price of requested copies is displayed;otherwise the message " REQUIERD COPIES NOT IN STOCK "is displayed.
Design a system using a class books with sutiable member function and constructor. use new operator in constrouctor to allocate memory space required. Implement C++ program for the system.
*/

#include<iostream>
#include<cstring>
using namespace std;

class book
{
	char title[20];
	char author[20];
	char publication[20];
	int stock;
	float price;
	book*next;
	public:
		book* get_data(book*);
		void display(book*);
		book* search(book*);
		book* get_node();
		book* del(book*,book*);
};

book* book::get_node()
{

		book * temp=new book;
		cout<<"\nEnter book title ";
		cin>>temp->title;
		cout<<"\nEnter author name ";
		cin>>temp->author;
		cout<<"\nEnter book publication ";
		cin>>temp->publication;
		cout<<"\nEnter book stock ";
		cin>>temp->stock;
		cout<<"\nEnter book price ";
		cin>>temp->price;
		temp->next=NULL;
	return temp;
}

book* book::get_data(book*head)
{
	book*trav=head,*temp;
	if(head==NULL)
	{
		head=get_node();
	}
	else
	{
		while(trav->next!=NULL)
		{
			trav=trav->next;
		}
		trav->next=get_node();
	}

return head;
}
void book::display(book*head)
{
	book*trav=head;
	if(head==NULL)
	{
		cout<<"\nEmpty list";
	}
	else
	{	cout<<endl;
		cout.width(20);cout<<" TITEL ";
		cout.width(20);cout<<" AUTHOR ";
		cout.width(20);cout<<" PUBLICATION ";
		cout.width(7);cout<<" PRICE ";
		cout.width(7);cout<<" STOCK ";
		while(trav!=NULL)
		{
			cout<<endl;
			cout.width(20);cout<<trav->title;
			cout.width(20);cout<<trav->author;
			cout.width(20);cout<<trav->publication;
			cout.width(7);cout<<trav->price;
			cout.width(7);cout<<trav->stock;
			trav=trav->next;
		}
	}
}
book* book::search(book *head)
{
	int flag=0;
	book *trav=head;
	char ath[20], titl[20];	int pur=0;
	cout<<"\nEnter the Title and Name of author that you want to search ";
	cin>>titl>>ath;
	while(trav!=NULL)
	{
			if(strcmp(trav->title,titl)==0&&strcmp(trav->author,ath)==0)
			{
				cout<<"\n*********************found********************\n";
				cout.width(20);cout<<trav->title;
				cout.width(20);cout<<trav->author;
				cout.width(20);cout<<trav->publication;
				cout.width(7);cout<<trav->price;
				cout<<"\nEnter no of copies to purchase";
				cin>>pur;
				if(trav->stock>=pur)
				{
					trav->stock=trav->stock-pur;
					cout<<"\n\tYour total bill is : "<<trav->price*pur;
					cout<<"\n\t\tThank YOU for buying.......";
					if(trav->stock==0)
						head=del(trav,head);
				}
				else
					cout<<"\nSorry we don't have that much of copies\n";
				flag=1;
				break;
			}
			trav=trav->next;
	}
	if(flag==0)
	cout<<"sorry record not available";
	return head;
}

book* book::del(book *temp,book *head)
{
	book *delnode,*trav=head;
	if(trav==temp)
	{
		delnode=head;
		head=head->next;
		delete delnode;
	}
	else
	{
		while(trav->next!=temp)
		trav=trav->next;
		delnode=trav->next;
		trav->next=delnode->next;
		delete delnode;
	}
return head;
}

int main()
{
	int choice;
	book * head=NULL;
	do
	{
		cout<<"\n1.Enter book information";
		cout<<"\n2.Display book information";
		cout<<"\n3.Purchase the book.";
		cout<<"\n4.Exit";
		cout<<"\nEnter your choice ";
		cin>>choice;
		switch(choice)
		{
			case 1:	head=head->get_data(head);
				break;
			case 2:	head->display(head);
				break;
			case 3:	head=head->search(head);
				break;
		}
	}while(choice!=4);
return 0;
}
/*OUTPUT:
[mock2015@localhost ~]$ g++ oompA2.cpp
[mock2015@localhost ~]$ ./a.out

1.Enter book information
2.Display book information
3.Purchase the book.
4.Exit
Enter your choice 1

Enter book title LetusC

Enter author name Kanetkar

Enter book publication MHill

Enter book stock 40

Enter book price 300

1.Enter book information
2.Display book information
3.Purchase the book.
4.Exit
Enter your choice 1

Enter book title C++

Enter author name Balguruswami

Enter book publication MHill

Enter book stock 50

Enter book price 500

1.Enter book information
2.Display book information
3.Purchase the book.
4.Exit
Enter your choice 2

              TITEL              AUTHOR         PUBLICATION  PRICE  STOCK
              LetusC            Kanetkar               MHill    300     40
                 C++        Balguruswami               MHill    500     50
1.Enter book information
2.Display book information
3.Purchase the book.
4.Exit
Enter your choice 3

Enter the Title and Name of author that you want to search C++ Balguruswami

*******************************found********************************
                 C++        Balguruswami               MHill    500
Enter no of copies to purchase5

	Your total bill is : 2500
		Thank YOU for buying.......
1.Enter book information
2.Display book information
3.Purchase the book.
4.Exit
Enter your choice 4
[mock2015@localhost ~]$

*/
