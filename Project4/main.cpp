#include"LLstack.h"
int main()
{
	stack s;
	int data1,ch;
	do
	{
		cout << "\n1.PUSH\n2.POP\n3.DISPLAY\n0.Exit\n";
		cout << "\nEnter ur choice\t:";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\nEnter inserting element\n";
			cin >> data1;
			s.push(data1);
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.display();
			break;
		}
	} while (ch != 0);
}