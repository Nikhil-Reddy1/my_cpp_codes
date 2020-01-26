#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
class node
{   public:
    int data;
    node *next;
    //public:
    node()
    {
        data = 0;
        next = NULL;
    }
    friend slist();
};

class slist
{   public:
    node *head = new node;
    //public:
    slist()
    {
        head->next==NULL;
    }
    void add(int a);
    void del();
    void display();
};

void slist :: add(int a)
{
    node *temp = new node;
    temp->data = a;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        head->next=temp;
    }
}

void slist :: del()
{
    node *temp = new node;
    if(head == NULL)
    {
        cout<<"no list to delete";
    }
    else
    {
        temp = head;
        head->next = temp->next;
        free(temp);
    }
}

void slist :: display()
{
    node *temp = new node;
    if(head == NULL)
    {
        cout<<"the list is empty";
    }
    else
    {
        temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data;
            temp = temp->next;
        }   
    } 
}

int main()
{
    int x,n;
    slist s;
    while(1)
    {
        cout<<"1.add node\n2.del node\n3.display list\n4.exit";
        cout<<"enter your option\n";
        cin>>x;
        switch (x)
        {
        case 1:
        {
            cout<<"enter the data of a node";
            cin>>n;
            s.add(n);
            break;
        }
        case 2:
        {
            s.del();
            break;
        }
        case 3:
        {
            s.display();
        }
        case 4:
        {
            exit(0);
            break;
        }
        default:
            break;
        }
    }
return 0;
}