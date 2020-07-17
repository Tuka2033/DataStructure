#include"que.h"
int main()
{
	que q;
	int data1, ch;
	do
	{
		cout << "\n1.enque\n2.deque\n3.DISPLAY\n0.Exit\n";
		cout << "\nEnter ur choice\t:";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\nEnter inserting element\n";
			cin >> data1;
			q.enque(data1);
			break;
		case 2:
			q.deque();
			break;
		case 3:
			q.display();
			break;
		}
	} while (ch != 0);
}