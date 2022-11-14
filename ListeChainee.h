#pragma once

#include <iostream>

class Node
{
private:
	std::string data;
	Node* next;
public:
	Node(std::string data, Node* next);
	std::string getData();
	Node* getNext();
	void setNext(Node* next);
};

/*==============================================*/

class LinkedList
{
private:
	Node *head;
public:
	LinkedList();
	~LinkedList();
	void push(std::string data);
	std::string pop();
};

