//#include "stdafx.h"

#include <iostream>
#include <new>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

struct Node{
	friend class LinkedList;
public:
	Node();
	Node(int value);
	int printVal();
	Node getNextNode();

private:
	int _value;
	Node *_nextNode;
};

Node::Node(){
	_nextNode	= NULL;
	_value		= NULL;
}

int Node::printVal(){
	return _value;
}

Node Node::getNextNode(){
	return *_nextNode;
}

Node::Node(int value){
	_nextNode	= NULL;
	_value		= value;
}


class LinkedList{
public:
	LinkedList();
	//~LinkedList();
	void addNodeBegin(int value);
private:
	int _length = 0;
	Node *_listHead;
	Node *_listTail;
};

LinkedList::LinkedList(){
	_listHead = NULL;
	_listTail = NULL;
	_length   = 0;
}

void LinkedList::addNodeBegin(int value){
	if (_listHead == NULL){
		Node *newNode = new Node(value);
		_length += 1;
		_listHead = newNode;
		_listTail = newNode;
	}
	else{
		Node *newNode = new Node(value);
		_length += 1;
		newNode->_nextNode = _listHead;
		_listHead = newNode;
	}
}


int main(int argc, char* argv[])
{
}
