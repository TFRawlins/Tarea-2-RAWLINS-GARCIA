/*
 * stack.cpp
 *
 *  Created on: Aug 18, 2022
 *      Author: jsaavedr
 */

#include "stack.hpp"
#include <iostream>


Stack::Stack():head(nullptr) {
	// TODO Auto-generated constructor stub

}

void Stack::push(std::string val){
	Node* node = new Node(val);
	push_2(node);
}

void Stack::push_2(Node* node){
	node->setNext(head);
	head = node;
}

void Stack::pop(){
	if (!isEmpty()){
		Node* ptr = head;
		head = head->getNext();
		delete ptr;
	}
}

Node* Stack::top(){
	return head;
}

bool Stack::isEmpty(){
	return (head == nullptr);
}

void Stack::clear(){
	while (!isEmpty()){
		pop();
	}
}

Stack::~Stack() {
	std::cout<<"destructor Stack"<<std::endl;
	clear();
}

 /* namespace eda */