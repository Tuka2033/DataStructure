#include"LLstack.h"
stack::stack()
{
	head = NULL;
	top = -1;
	data1 = 0;
}
void stack::push(int x)
{
	node*n = new node;
	n->data = x;
	n->next = head;
	head = n;
	top++;
}
void stack::pop()
{
	if (top == -1)
	{
		cout << "stack is empty";
	}
	else
	{
		node *temp = head;
		head = head->next;
		top--;
		delete temp;
	}
}
void stack::display()
{
	node *temp = head;
	if (top == -1)
	{
		cout << "stack is empty";
	}
	else
	{
		while (temp != NULL)
		{
			cout <<"\n"<<"["<<temp->data<<"]"<<endl;
			temp = temp->next;
		}
	}
}