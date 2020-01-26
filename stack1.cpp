#include <iostream>
//#include<conio.h>
using namespace std;
class stack;
class node
{
	int data;
	public:
	 node *next;
     node()
     {
     	data==0;
     	next==NULL;
     }

friend stack;
};

class stack
{
	node *top;
	public:
	stack()
	{
		top==NULL;
	}
	void push(int x);
	void pop();
	void peep();
	void print();
};

void stack::push(int x)
{
	node *temp;
	temp = new node;
	temp->data=x;
	if(top==NULL)
	{
		top = temp;
	}
	else
	{
		top->next = temp;
		top = temp;
	}
}

void stack::pop()
{
	node *temp;
	if(top==NULL)
	{
		cout<<"No stack left to print";
	}
	else
	{
		temp = top;
		top = top->next;
		free(temp);
	}
}

void stack::peep()
{
	cout<<"top = "<<top->data;
}

void stack::print()
{
	node *temp;
	temp = top;
	if(top==NULL)
		cout<<"No stack to display";
	else
	{
		while(top->next!=NULL)
		{
			cout<<top->data;
			top=top->next;
		}
	}
}

int main()
{
	stack s;
	int n,x;
	while (1)
	{
		cout<<"Enter your option\n";
		cout<<"1.Push 2.Pop 3.Peep 4.print 5.EXIT\n";
		cin>>n;
		switch(n)
		{
			case 1:
			{
				cout<<"Enter the data to push into the stack";
				cin>>x;
				s.push(x);
				break;
			}
			case 2:
			{
				s.pop();
				break;
			}
			case 3:
			{
				s.peep();
				break;
			}
			case 4:
			{
				s.print();
				break;
			}
			case 5:
			{
				exit(0);
			}
		}
	}
	return 0;
}