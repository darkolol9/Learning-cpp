#include "Node.h"
#include "Queue.h"
//using namespace std;

void print_info(Node client)
{
	cout << "Account Number: " << client.account_number << endl;
	cout << client.name << ", Money: " << client.money << endl << endl;
}

void addFunction() {
	cout << "nothing";
}


int main()
{
	Node clientA("Eran", 650);//1
	Node clientB("Kfir", -1500);//1
	Node clientC("Shahar", 350);//1

	Queue tor;
	

	tor.add_node(&clientA);

	tor.add_node(&clientB);
	tor.add_node(&clientC);
	tor.prntQ();
	cout << endl;
	cout << tor.getLen();



	/*
		Node n = tor.get_node();
		cout << tor.is_empty() << endl;
		print_info(tor.top_node());

		print_Queue(tor);
		*/
	return 0;
}
