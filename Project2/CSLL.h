#include"node.h"
#include<iostream>
class csll
{
	node *head;
	node *temp;
	int cnt;
public:
	csll();
	void creat_list(int);
	void add_beg(int);
	void add_mid(int,int);
	void add_end(int);
	void insert(int,int);
	void delete_ele(int);
	void delete_beg();
	void delete_mid(int);
	void delete_end();
	void display();
};
