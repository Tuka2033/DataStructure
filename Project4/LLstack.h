#include<iostream>
#include"Node.h"
class stack
{
	node *head;
	int top;
	int data1;
	public:
		stack();
		void push(int);
		void pop();
		void display();
};
