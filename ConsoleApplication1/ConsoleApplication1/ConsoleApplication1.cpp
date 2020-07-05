
#include <iostream>
#include "Node.h"
#include "List.h"
using namespace std;
int main()
{
	List l1;

	l1.insert(0,1);
	l1.insert(1, 2);
	l1.insert(2, 3);
	l1.insert(3, 4);

	l1.list_print();

	l1.removeAt(1);
	l1.removeAt(2);
	l1.removeAt(1);
	l1.removeAt(0);
	
	

	List l2;
	l2.insert(0,99);
	l2.insert(1, 100);
	l2.insert(2,1000);

	l2.removeAt(1);
	l2.removeAt(0);
	l2.removeAt(0);
	
	return 0;


}
