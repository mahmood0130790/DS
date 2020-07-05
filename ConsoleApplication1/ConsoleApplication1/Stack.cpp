
#include "Stack.h"
#include <iostream>
using namespace std;
void Stack::push(int value)
{
	Node* node_inair =new Node(value) ;
	node_inair->node_ptr=head;
	head =node_inair ;
	stack_size++;
}

int Stack::pop()
{
	Node* node_inair = head;
	
	if (stack_size > 0) {
		return head->node_value;
		node_inair = head->node_ptr;
		delete head;
		head = node_inair;
		stack_size--;
	}  
	
}

int Stack::get_size()
{
	return stack_size;
}

Stack::Stack()
{
	head = nullptr;
	stack_size = 0;
}

Stack::~Stack()
{
	Node* node_inair = head;
	while (stack_size>0) {
		node_inair = head->node_ptr;
		delete head;
		head = node_inair;
		stack_size--;
}
}
