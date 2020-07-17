#include<iostream>
using namespace std;
#define size 5
class stack
{
	int top;
	int arr[size];
public:
	stack();
	void push(int);
	void pop();
	void display();
};
