#include"CSLL.h"
int main()
{
	csll s;
	int data1;
	int pos, ch;
	do
	{
		cout << "\n1.create list\n2.insert\n3.delete\n4.display\n0.exit\n";
		cout << "Enter ur choice:\n";
		cin >> ch;
		switch (ch)
		{
		/*case 0:
			exit(0);
			break;*/
		case 1:
			cout << "Enter a data :\n";
			cin >> data1;
			s.creat_list(data1);
			break;
		case 2:
			cout << "Enter a inserting element:\n";
			cin >> data1;
			cout << "Enter a position:\n";
			cin >> pos;
			s.insert(data1, pos);
			break;
		case 3:
			cout << "\nEnter delete element position\n";
			cin >> pos;
			s.delete_ele(pos);
			break;
		case 4:
			s.display();
			break;
		//default:
		//	cout << "Invalid choice\n";
		}
	} while (ch != 0);
}