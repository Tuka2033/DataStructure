#include "circularqueue.h"
circularqueue::circularqueue()
{
	size = 5;
	arr[size];
	front = rear = -1;
}
void circularqueue::insert(int ele)
{
	if ((front == 0) && (rear == size - 1)||(front==rear+1))
	{
		cout << "Queue is full\n";
	}
	else
	{
		 if (front == -1)
		    {
			  front = 0;
			  rear = 0;
		    }
	    	else if (rear==size-1)
		        {
			       rear = 0;
		        }
			else
		    {
			  rear = rear + 1;
		    }
	    arr[rear] = ele;
    }
}
void circularqueue::delete_q()
{
	int ele;
	if (front == -1)
	{
		cout << "Queue is empty...\n";
	}
	else
	{
		ele = arr[front];
		cout << "Deleted element is:" << ele;
		if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
		{
			if (front == size - 1)
			{
				front = 0;
			}
			else
			{
				front = front + 1;
			}
		}
	}
}
void circularqueue::display()
{
	int i;
	if (front <=rear)
	{
		for (i = front; i <= rear; i++)
		{
			cout << arr[i]<<"  ";
		}
	}
	else if (front >rear)
	{
		for (i = 0; i <= rear; i++)
		{
			cout << arr[i]<<"  ";
		}
		for (i = front; i <= size - 1; i++)
		{
			cout << arr[i]<<"  ";
		}
	}
}
circularqueue::~circularqueue()
{
}
