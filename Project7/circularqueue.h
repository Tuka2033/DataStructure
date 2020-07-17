#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class circularqueue
{
	int size;
	int arr[5];
    int front, rear;
public:
	circularqueue();
	void insert(int);
	void delete_q();
	void display();
	~circularqueue();
};

