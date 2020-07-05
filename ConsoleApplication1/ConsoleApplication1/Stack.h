
#include "Node.h"
class Stack
{
	Node* head;
	int stack_size;

public:
	void push(int value);
	int pop();
	int get_size();
	Stack();
	~Stack();

};
