#include<iostream>
using namespace std;
class nodeque
{
	int data;
	nodeque *next;
public:
	nodeque();
	~nodeque();
	friend class que;
};

