#define _CRT_SECURE_NO_WaRNINGS
#include<iostream>
using namespace std;
 template<class T>
class SLL
{
     T data;
	SLL *next;
	SLL *newnode;
	SLL *head;
	SLL *temp;
public:
	SLL();
	void creat_list();
	void display();
};