#include"nodeque.h"
#include<iostream>
class que
{
	nodeque *front,*rear;
	int f;
	int r;
public:
	que();
	void enque(int);
	void deque();
	void display();
};

