#pragma once
#include <iomanip>
#include <iostream>
using namespace std;


class Node
{
	friend void print_info(Node client);

private:
	//DATA:
	string name;
	int money;
	int account_number;
	static int count;//how many objects are from NODE

	Node* next;//next object in Queue

public:
	Node();
	Node(string name, int money); // add a new client with a name and amount of money
	~Node();

	void set_money(int money);
	int	get_money();

	void set_name(string name);
	string get_name();

	void set_next(Node* next);
	Node* get_next();

};