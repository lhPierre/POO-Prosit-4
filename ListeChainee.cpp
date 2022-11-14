#include "ListeChainee.h"

Node::Node(std::string data, Node *next = nullptr)
{
	this->data = data;
	this->next = next;
}

std::string Node::getData()
{
	return this->data;
}

Node* Node::getNext()
{
	return this->next;
}

void Node::setNext(Node* next)
{
	this->next = next;
}

/*=================================================*/

LinkedList::LinkedList()
{
	this->head = nullptr;
}

LinkedList::~LinkedList()
{
	while (this->head != nullptr)
	{
		this->pop();
	}
}

void LinkedList::push(std::string data)
{
	this->head = new Node(data, this->head);
}

std::string LinkedList::pop()
{
	std::string data = "";
	
	if (this->head != nullptr){
		data = this->head->getData();
		Node* temp = this->head;
		this->head = this->head->getNext();
		delete temp;
		
	} else {
		//std::cout << "Pas de message en attentes !" << std::endl;
		//throw std::range_error("List is empty !");
	}

	return data;
}