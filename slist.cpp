#include<stdio.h>
#include<conio.h>
class node()
{
    int data;
    node *next;
    public:
    node
    {
        data = 0;
        next = NULL;
    }
    friend slist();
}

class slist
{
    head = new node;
    public:
    slist
    {
        head->next==NULL;
    }
    void add(int a);
    void del();
    void display();
}

void slist :: add(int a)
{
    temp = new node;
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
    temp = new node;
    if(head == NULL)
    {
        cout<<"no list to delete";
    }
    else
    {
        temp = head;
        head = temp->next;
        free(temp);
    }
}

void display()
{
    temp = new node;
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

void main()
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
            exit();
            break;
        }
        default:
            break;
        }
    }
}