#include"stackapp.h"
stack::stack()
{
	top = -1;
	arr[size] = { 0 };
}
void stack::push(int ele)
{
	if (top == size - 1)
	{
		cout << "Stack is full\n";
	}
	else
	{
		top++;
		arr[top] = ele;
	}
}
void stack::pop()
{
	int ele;
	if (top == -1)
	{
		cout << "Stack is empty\n";
	}
	else
	{
		ele = arr[top];
		top--;
	}
}
void stack::display()
{
	for(int i=top;i>=0;i--)
	{
		cout << arr[i] << " ";
	}
	if (top== -1)
	{
		cout << "stack is empty.....\n";
	}
}