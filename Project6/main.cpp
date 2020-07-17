#include"add.h"
int main()
{
	add t;
	node *p1 = NULL, *p2 = NULL, *p3 = NULL;
	cout << "Enter the 1st polynomial\n";
	t.create_list(&p1);
	cout << "Enter the 2nd polynomial\n";
	t.create_list(&p2);
	cout << "Added polynomial\n";
	p3 = new node;
	t.add_list(p1,p2,p3);
	t.display(p3);
}