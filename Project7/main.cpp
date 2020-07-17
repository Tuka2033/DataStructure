#include"circularqueue.h"
int main()
{ 
	int ch,ele;
	circularqueue cq;
	do
	{
		cout << "\n1.insert\n2.delete\n3.display\n0.exit\n";
		cout << "Enter ur choice\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter a inserting number:\n";
			cin >> ele;
			cq.insert(ele);
			break;
		case 2:
			cq.delete_q();
			break;
		case 3:
			cq.display();
			break;
		default:
			cout << "Invalid choice";
		}
	} while (ch != 0);
}