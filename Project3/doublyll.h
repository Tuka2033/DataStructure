#include<iostream>
#include"node.h"
class dll
{
	node *head;
	int cnt;
	node *temp;
	node *tail;
public:
	dll();
	void creat_list(int);
	void add_beg(int);
	void add_mid(int,int);
	void add_end(int);
	void insert(int,int);
	void delete_beg();
	void delete_mid(int);
	void delete_end();
	void delete_ele(int);
	void forddisplay();
	void revdisplay();
};
