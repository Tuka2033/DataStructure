#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class node
{
	int data;
	node *next;
	node *prev;
public:
	node();
	friend class circular_queue;
};
