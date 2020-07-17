#include<iostream>
using namespace std;
class node
{
	int coef;
	int exp;
	node*next;
public:
	node();
	friend class add;
};
