#include<iostream>
using namespace std;
class node
{
	int data;
	node *next;
	node *prev;
public:
	node();
	friend class dll;
};

