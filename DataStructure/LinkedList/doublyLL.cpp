#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head=NULL;

void insert(int data)
{
	if(head==NULL)
	{
		
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
		new_node->data=data;
		new_node->next=NULL;
		new_node->prev=head;
		
		head=new_node;
	}else
	{
		struct Node *temp1=head->next;
		
		struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
		new_node->data=data;
		new_node->next=temp1->prev;
		new_node->prev=NULL;
		
		cout<<"successfully added"<<endl;
	}
}

void display()
{
	struct Node *temp=head->next;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}

int main()
{
	int size,data,ch;
	cout<<"How many No wants to enter In Linked List"<<endl;
	cin>>size;
	
	do
	{
		//cout<<""<<endl;
		
		cout<<"1.add"<<endl;
		cout<<"2.delete"<<endl;
		cout<<"3.search"<<endl;
		cout<<"4.display"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1: cout<<"Enter the Number"<<endl;
					cin>>data;
					insert(data);
					break;
			case 2: cout<<"Enter the number you want to delete "<<endl;
					cin>>data;
					delete(data);
					break;
			case 3: cout<<"Enter the number you want to search"<<endl;
					cin>>data;
					search(data);
					break;
			case 4:display();
					break;
			case 5:exit(0);
			
			default : cout<<"invalid choice"<<endl;
		}
		
		size--;
	}while(size!=0)
	
    return 0;
}
