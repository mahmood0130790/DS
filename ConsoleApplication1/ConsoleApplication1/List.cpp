#include "List.h"
#include<iostream>
using namespace std;


void List::append(int value)
{
	
	Node* node_inair = new Node(value);
	if (head == nullptr) {
		head = node_inair;
		list_size = 0;
	}
	else {
		Node* temp = head;
			while (temp->node_ptr!=nullptr) {
				temp = temp->node_ptr;
		}
			temp->node_ptr = node_inair;
			
	}
	list_size++;
}



void List::insert(int index, int value)
{
	
	Node* node_inair=new Node(value);
	if (index == 0) {
		head = node_inair; list_size = 0;
	}
	else {
		Node* temp = head;
		int i = 0;
		while (i<index-1) {
			temp = temp->node_ptr;
			i++;
		}
		node_inair->node_ptr = temp->node_ptr;
		temp->node_ptr = node_inair;
	}
	list_size++;
}


void List::list_print()
{
	list_size = 0;
	Node* temp = head;
	cout << "List Values: ";

	while (temp->node_ptr != nullptr) {

		if (temp == head) {
			cout << temp->node_value << ' ';
			list_size++;
		}
		temp = temp->node_ptr;
		cout << temp->node_value << ' '; list_size++;

	}
	
	if (head->node_value != NULL && list_size == 0){
		list_size++; cout << head->node_value;
}
	else
	{
		cout <<' ' ;
	}


		cout <<endl<< "List Size: "<<list_size<<endl;
}


void List::removeAt(int index)
{
	Node* temp = head;
	Node* temp_bef=head; Node* temp_mid=head; Node* temp_aft=head;
	
	int Oaf=0;
	
	if (index == 0) {
		if (list_size == 1) {
			head->node_value = NULL; head->node_ptr = nullptr;
		}
		else {
			temp = head->node_ptr;
			delete head;
			head = temp;
		}
	}
	
	while (temp->node_ptr != nullptr && index != 0 ) {
			temp = temp->node_ptr;
			Oaf++;

			if (Oaf == index - 1) {
				temp_bef = temp;
			}
			if (Oaf == index) {
				temp_mid = temp;
				if (list_size - 1 == index && temp->node_ptr == nullptr) {
					delete temp_mid; temp_bef->node_ptr = nullptr; break;
				}
			}
			if (Oaf == index + 1 && list_size - 1 != index) {
				temp_aft = temp;
				delete temp_mid; temp_bef->node_ptr = temp_aft; break;
			}
		}
	
	list_print();
}




List::List()
{
	head = nullptr; list_size = 0;
}

List::~List()
{
	Node* temp = head;
	while (temp->node_ptr != nullptr) {
		temp =head->node_ptr ;
		delete head;
		head = temp;
	}
}




