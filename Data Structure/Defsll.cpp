#include"S_linkedlist.h"
template<class T>
SLL<T>::SLL()
{
	newnode = 0; head = 0; temp = 0;
}
template<class T>
void SLL<T>::creat_list()
{
	T x;
	while (1)
	{
		newnode = new SLL;
		cout << "Enter a data\n(enter -1 for stop)";
		cin >> x;
		if (x == -1)break;
		newnode->data = x;
		newnode->next = NULL;
		if (head == 0)
		{
			head = newnode;
		}
		else
		{
			temp->next = newnode;
		}
		temp = newnode;
	}
}
template<class T>
void SLL<T>::display()
{
	temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp=temp->next;
	}
}