#include"node.h"
class circular_queue
{
	node *head;
	node *tail;
public:
	circular_queue();
	void insert_front(int);
	void insert_rear(int);
	void creat_list(int);
	void delete_front();
	void delete_rear();
	void display();
	~circular_queue();
};

