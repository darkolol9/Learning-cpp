#pragma once
#include "Node.h"


class Queue
{
	friend void print_Queue(Queue q);

public:
	Queue();
	~Queue();

	void add_node(Node* account);
	Node get_node();
	Node top_node();
	bool is_empty();
	int getLen();
	void prntQ();

private:
	int length;
	Node head;
	Node tail;
};

