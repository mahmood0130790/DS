#pragma once
#include "Node.h"
#include <iostream>
class List
{
private:
	
	Node *head;
	int list_size;

public:
	void append(int value);
	void insert(int index,int value);
	void list_print();
	void removeAt(int index);
	List();
	~List();
};

