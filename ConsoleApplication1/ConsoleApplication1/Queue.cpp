#include "Queue.h"

void Queue::push(int value)
{
	Node*node_inair=new Node(value);
	if (tail == nullptr) {
		tail = node_inair;
		head = node_inair;
	}
	else {
		tail->node_ptr = node_inair;
		tail =node_inair ;
	}
	queue_size++;
}

void Queue::pop(){
 Node* node_inair = head;

    if(queue_size!=0){
	
	node_inair = head->node_ptr;
	delete head;
	head = node_inair;
      queue_size--;
}
}

int Queue::get_size()
{
	return queue_size;
}


Queue::Queue()
{
	queue_size = 0; head = nullptr; tail =nullptr ;
}

Queue::~Queue()
{
	Node* node_inair = head;
	while (queue_size > 0) {
		
		node_inair = head->node_ptr;
		delete head;
		head = node_inair;
		queue_size--;
	}
}
