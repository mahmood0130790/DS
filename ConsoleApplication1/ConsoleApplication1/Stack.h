
#include "Node.h"
class Stack
{
	Node* head;
	int stack_size;

public:
	void push(int value);
	void pop();
	
	int get_size();
	Stack();
	~Stack();

};
