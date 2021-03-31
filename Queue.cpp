#include "Queue.h"
#include "Node.h"
#include <iomanip>
#include <iostream>

Queue::Queue()
{
	length = 0;
}
void Queue::prntQ()
{
	Node curr = head;
	while (&curr)
	{
		cout << curr.get_name() << " " << curr.get_money() << endl;
		curr = *curr.get_next();
	}
}

Queue::~Queue()
{
	length--;
}

Node Queue::get_node()
{
	Node old_head = head;
	head = *(head.get_next());
	length--;
	return old_head;
}
int Queue::getLen()
{
	return length;
}

Node Queue::top_node()
{
	return head;
}

bool Queue::is_empty()
{
	if (length)
		return true;

	return false;
}

void Queue::add_node(Node* account)
{
	if (length == 0)
	{
		head = *account;
		tail = *account;
	}
	else
	{
		tail.set_next(account);
		tail = *account;
	}
	length++;
}

