#include"doublyll.h"
dll::dll()
{
	head = NULL;
	cnt = 0;
	temp = NULL;
	tail = NULL;
}
void dll::creat_list(int x)
{
	node*n = new node();
	n->prev = NULL;
	n->data = x;
	n->next = NULL;
	if (head == NULL)
	{
		head = n; 
		tail = NULL;
	}
	else
	{
		temp->next = n;
		n->prev = temp;
	}
	temp = n;
	tail = n;
	cnt++;
}
void dll::add_beg(int x)
{
	node *n = new node();
	n->prev = NULL;
	n->data = x;
	n->next = NULL;
	if (head == NULL)
	{
		head = n;
		tail = n;
		cnt++;
	}
	else
	{
		n->next = head;
		temp->prev = n;
		head = n;
		cnt++;
	}
}
void dll::add_mid(int x,int pos)
{ 
	node *n = new node();
	n->data = x;
	if (head == NULL)
	{
		cout << "insertion not possible....List is empty\n";
	}
	else
	{
		temp = head;
		for (int i = 1; i < pos-1; i++)
		{
			temp = temp->next;
		}
		n->next = temp->next;
		n->prev = temp;
		temp->next->prev = n;
		temp->next = n;
		cnt++;
	}
}
void dll::add_end(int x)
{
	temp = tail;
	node *n = new node();
	n->next = NULL;
	n->data = x;
	n->prev = NULL;
	if (tail == NULL)
	{
		tail = n;
		head = n;
		cnt++;
	}
	else
	{
		n->prev = temp;
		temp->next = n;
		tail = n;
		cnt++;
	}
}
void dll::insert(int x,int pos)
{
	if (pos>cnt)
	{
		add_end(x);
	}
	else if (pos == 1)
	{
		add_beg(x);
	}
	else if ((pos > 1) && (pos <= cnt))
	{
		add_mid(x, pos);
	}
}
void dll::delete_beg()
{
	temp = head;
	if (head == NULL)
	{
		cout << "List is empty......\n ";
		return;
	}
	else if(cnt==1)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{
		head = temp->next;
		head->prev = NULL;
	}
	delete temp;
	cnt--;
}
void dll::delete_mid(int pos)
{
	temp = head;
	node *ptr = NULL;
	for (int i = 1; i < pos; i++)
	{
		temp = temp->next;
	}
	ptr = temp->prev;
	ptr->next = temp->next;
	temp->next->prev = ptr;
	delete temp;
	cnt--;
}
void dll::delete_end()
{
	temp = tail;
	if (tail == NULL)
	{
		cout << "List is empty\n";
		return;
	}
	else if (cnt == 1)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{
		tail = tail->prev;
		tail->next = NULL;
	}
	delete temp;
	cnt--;
}
void dll::delete_ele(int pos)
{
	if (pos>=cnt)
	{
		delete_end();
	}
	else if (pos == 1)
	{
		delete_beg();
	}
	else if ((pos > 1) && (pos < cnt))
	{
		delete_mid(pos);
	}
}
void dll::forddisplay()
{
	temp = head;
	if (head == NULL)
	{
		cout << "List is Empty........\n";
	}
	else
	{
		while (temp->next != NULL)
		{
			cout << "[" << temp->data << "]-->";
			temp = temp->next;
		}
		cout << "[" << temp->data << "]";
	}
	cout <<"\n\n\n" <<cnt;
}
void dll::revdisplay()
{
	temp = tail;
	if (tail == NULL)
	{
		cout << "List is Empty........\n";
	}
	else
	{
		while (temp->prev != NULL)
		{
			cout << "[" << temp->data << "]-->";
			temp = temp->prev;
		}
		cout << "[" << temp->data << "]";
	}
	cout << "\n\n\n" << cnt;
}