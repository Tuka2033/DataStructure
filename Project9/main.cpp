#include"stackapp.h"
void main()
{
	stack s;
	int ch, ele;
	do
	{
		cout << "\n1.PUSH\n2.POP\n3.DISPLAY\n0.EXIT\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter inserting element\n";
			cin >> ele;
			s.push(ele);
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.display();
			break;
		case 0:
			exit(0);
		}
	} while (ch != 0);
}