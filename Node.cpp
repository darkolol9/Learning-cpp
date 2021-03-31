#include "Node.h"
#include <iomanip>
#include <iostream>

int Node::count = 0;

Node::Node()
{
	count++;
	account_number = count;
}

Node::Node(string _name, int _money)
{
	name = _name;
	money = _money;
	count++;
	account_number = count;
}

Node::~Node()
{
	name = "";
	money = NULL;
	count--;
}

void Node::set_money(int _money)
{
	money = _money;
}

int Node::get_money()
{
	return money;
}

void Node::set_name(string _name)
{
	name = _name;
}

string Node::get_name()
{
	return name;
}

void Node::set_next(Node* _next)
{
	next = _next;
}
Node* Node::get_next()
{
	return next;
}

