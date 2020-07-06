#pragma once
#include "Node.h"
class Queue
{
	int queue_size; Node* head; Node* tail;

public:
	void push(int value);
	void pop();
	int get_size();
	Queue();
	~Queue();
};

