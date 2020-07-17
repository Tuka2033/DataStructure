#include"circular_queue.h"
int main()
{
	circular_queue q;
	int n;
	int ch;
	do
	{
		cout << "\n1.create list \n2.insert front.\n3.insert rear.\n4.delete front \n5.delete rear \n6.display.\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter the element :";
			cin >> n;
			q.creat_list(n);
			break;
		case 2:
			cout << "Enter the element :";
			cin >> n;
			q.insert_front(n);
			break;
		case 3:
			cout << "Enter the element :";
			cin >> n;
			q.insert_rear(n);
			break;
		case 4:
			q.delete_front();
			break;
		case 5:
			q.delete_rear();
			break;
		case 6:
			q.display();
			break;
		}
	} while (ch != 0);
}