#include"add.h"
add::add()
{
	p1 = p2 = p4 = NULL;
}
void add::create_list(node **temp)
{
	int x, y;
	char ch;
	node *m = new node;
	*temp = m;
	do
	{
		cout << "Enter a coefficient of polynimal\n";
		cin >> x;
		m->coef = x;
		cout << "Enter a exp of polynimal\n";
		cin >> y; 
		m->exp = y;
		m->next = new node;
		m = m->next;
		m->next = NULL;
		cout << "\nDo u want continue[y/n]......";
		cin >> ch;
	} while (ch != 'n');
}
void add::display(node *ptr)
{
	while (ptr->next != NULL)
	{
		cout << ptr->coef << "X^" << ptr->exp;
		ptr = ptr->next;
		if (ptr->next != NULL)
		{
			cout << "+";
		}
	}
}
void add::add_list(node *p1, node *p2,node *p3)
{
	while (p1->next&&p2->next)
	{
		if (p1->exp > p2->exp)
		{
			p3->coef = p1->coef;
			p3->exp = p1->exp;
			p1 = p1->next;
		}
		else if (p1->exp > p2->exp)
		{
			p3->coef = p2->coef;
			p3->exp = p2->exp;
			p1 = p2->next;
		}
		else
		{
			p3->coef = p1->coef+p2->coef;
			p3->exp = p1->exp;
			p1 = p1->next;
			p2 = p2->next;
		}
		p3->next = new node;
		p3 = p3->next;
		p3->next = NULL;
	}
	while (p1->next)
	{
		if (p1->next)
		{
			p3->exp = p1->exp;
			p3->coef = p1->coef;
			p1 = p1->next;
		}
		p3->next= new node;
		p3 = p3->next;
		p3->next = NULL;
	}
	while (p2->next)
	{
		if (p2->next)
		{
			p3->exp = p2->exp;
			p3->coef = p2->coef;
			p2 = p2->next;
		}
		p3->next = new node;
		p3 = p3->next;
		p3->next = NULL;
	}
}