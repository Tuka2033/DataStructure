#include"CSLL.h"
csll::csll()
{
     head = NULL;
	 temp = NULL;
	 cnt = 0;
}
void csll:: creat_list(int data1)
{
	node *n = new node();
	n->data = data1;
	n->next = NULL;
	if (head == NULL)
	{
		head = n;
	}
	else
	{
		temp->next = n;
		n->next = NULL;
	}
	temp = n;
	temp->next = head;
	cnt++;
}
void csll:: add_beg(int d)
{
	node *n1 = new node();
	n1->data = d;
	n1->next = NULL;
	temp = head;
	while (temp->next != head)
	{
		temp = temp->next;
	}
	n1->next = head;
	head = n1;
	temp->next = head;
	cnt++;  
}
void csll:: add_mid(int d,int pos) 
{
	node *n = new node();
	n->data = d;
	n->next = NULL;
	temp = head;
	for (int i = 1; i < pos-1; i++)
	{
		temp = temp->next;
	}
	n->next = temp->next;
	temp->next = n;
	cnt++;
}
void csll:: add_end(int d)
{
	node *n = new node();
	n->data = d;
	n->next = NULL;
	temp = head;
	while (temp->next != head)
	{
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
	cnt++;
}
void csll::  insert(int d,int pos)
{
	if (pos == 1)
	{
		add_beg(d);
	}
	else if (pos > cnt)
	{
		add_end(d);
	}
	else if ((pos > 1) && (pos <= cnt))
	{
		add_mid(d,pos);
	}
}
void csll:: delete_beg()
{
	node *temp1;
	temp1=temp = head;
	if (head == NULL)
	{
		cout << "List is empty.....\n";
	}
	else if (cnt == 1)
	{
		head = NULL;
	}
	else
	{
		while (temp1->next != head)
		{
			temp1 = temp1->next;
		}
		head = temp->next;
		temp1->next = head;
		delete temp;
		cnt--;
	}
}
void csll:: delete_mid(int pos)
{
	temp = head;
	node *ptr=NULL;
	for (int i = 1; i < pos - 1; i++)
	{
		ptr = temp;
		temp = temp->next;
	}
	ptr->next = temp->next;
	delete temp;
	cnt--;
}
void csll:: delete_end()
{
	temp = head;
	node *ptr=NULL;
	if (head == NULL)
	{
		cout << "List is empty......\n";
	}
	else if (cnt == 1)
	{
		head = NULL;
	}
	else
	{
		while (temp->next != head)
		{
			ptr = temp;
			temp = temp->next;
		}
		ptr->next = head;
		delete temp;
		cnt--;
	}
}
void csll:: delete_ele(int pos)
{
		if (pos == 1)
		{
			delete_beg();
		}
		else if (pos > cnt)
		{
			delete_end();
		}
		else if ((pos > 1) && (pos <= cnt))
		{
			delete_mid(pos);
		}
}
void csll:: display()
{
	temp = head;
	if (head == NULL)
	{
		cout << "List is empty.......\n";
	}
	else
	{
		while (temp->next != head)
		{
			cout << "[" << temp->data << "]-->";
			temp = temp->next;
		}
		cout << "[" << temp->data << "]";
	}
}