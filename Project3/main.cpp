#include"doublyll.h"
void main()
{
	dll d;
	int data1;
	int pos,ch;
	do
	{
		cout << "\n1.Create list.\n2.Insert.\n3.Delete\n4.Forward display\n5.Reverse display\n0.Exit\n";
		cout << "Enter ur chice\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter a data :\n";
			cin >> data1;
			d.creat_list(data1);
			break;
		case 2:
			cout << "Enter a inserting element:\n";
			cin >> data1;
			cout << "Enter a position:\n";
			cin >> pos;
			d.insert(data1, pos);
			break;
		case 3:
			cout << "\nEnter delete element position\n";
			cin >> pos;
			d.delete_ele(pos);
			break;
		case 4:
			d.forddisplay();
			break;
		case 5:
			d.revdisplay();
			break;
		}
	} while (ch != 0);
}