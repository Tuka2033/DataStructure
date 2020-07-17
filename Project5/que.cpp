#include "que.h"
que::que()
{
	front=NULL;
	rear = NULL;
}
void que::enque(int x)
{
	nodeque *n = new nodeque;
	n->data = x;
	n->next = NULL;
	if (front == NULL)
	{
		front = n;
		rear = front;
	}
	else
	{
	    rear->next = n;
	    rear = n;
	}
}
void que::deque()
{
	nodeque *temp = front;
	if (front==NULL)
	{
		cout << "que is empty...";
	}
	else
	{
		front =front->next;
		delete temp;
	}
}
void que::display()
{
	nodeque *temp = front;
	if (front == NULL)
	{
		cout << "queue is empty.....";
	}
	else
	{
		while (temp != NULL)
		{
			cout << temp->data << ends;
			temp = temp->next;
		}
	}
}
