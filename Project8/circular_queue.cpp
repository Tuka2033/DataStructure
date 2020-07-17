#include "circular_queue.h"
circular_queue::circular_queue()
{
	head = NULL;
	tail = NULL;
}
void circular_queue::insert_front(int x)
{
	node *temp = NULL;
	node *n = new node();
	n->prev = NULL;
	n->data = x;
	n->next = NULL;
	if (head == NULL)
	{
		head = n;
		tail = n;
	}
	else
	{
		head->prev = n;
		n->next = head;
		head = n;
	}
}
void circular_queue::insert_rear(int x)
{
	node *temp = NULL;
	node *n = new node();
	n->prev = NULL;
	n->data = x;
	n->next = NULL;
	if (tail == NULL)
	{
		head = n;
		tail = n;
	}
	else
	{
		tail->next = n;
		n->prev = tail;
	}
	tail = n;
}
void circular_queue::creat_list(int x)
{
	node *temp = NULL;
	node *n = new node();
	n->prev = NULL;
	n->data = x;
	n->next = NULL;
	if (head == NULL)
	{
		head = n;
		tail = n;
	}
	else
	{
		tail->next = n;
		n->prev = tail;
	}
	tail = n;
}
void circular_queue::display()
{
	node *temp = head;
	if (head == NULL)
	{
		cout << "List is empty.........\n";
	}
	cout << "*******************************\n";
	while (temp != NULL)
	{
		cout <<temp->data << " ";
		temp = temp->next;
	}
	cout << "\n\n*******************************\n";
}
void circular_queue::delete_front()
{
	node *temp=head;
	if (head == NULL)
	{
		cout << "List is empty.....\n";
	}
	else
	{
		if (head->next == NULL)
		{
			tail = head = NULL;
			return;
		}
		head = head->next;
		head -> prev = NULL;
		delete temp;
	}
}
void circular_queue::delete_rear()
{
	node *temp = tail;
	if (tail == NULL)
	{
		cout << "List is empty.....\n";
	} 
	else
	{
		if (tail->prev == NULL)
		{
			tail = head = NULL;
			return;
		}
		tail = tail->prev;
		tail->next = NULL;
		delete temp;
	}
}
circular_queue::~circular_queue()
{
}
