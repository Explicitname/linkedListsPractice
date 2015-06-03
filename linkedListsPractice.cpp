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
	void addNodeEnd(int value);
	int removeHeadNode(int value);
	int removeTailNode(int value);
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

void LinkedList::addNodeEnd(int value){
	if (_listHead == NULL){
			Node *newNode = new Node(value);
			_length += 1;
			_listHead = newNode;
			_listTail = newNode;
}
	else{
		Node *newNode = new Node(value);
		_length += 1;
		Node *current = _listTail;
		current->_nextNode = newNode;
		_listTail = newNode;
	}
}

int LinkedList::addNodeBegin(int value){
	if (_listHead == NULL){
		return 0;
	}
	else if(_length == 1){
		_length -= 1;
		int PopHead = _listHead->_value;
		delete _listHead;
		_listHead = NULL;
		_listTail = NULL;
		return PopHead;


	}
	else{
		_length -= 1;
		Node *current = _listHead->_nextNode;
		int PopHead = _listHead->_value;
		delete _listHead;
		_listHead = current;
		return PopHead;
		}

}

int LinkedList::RemoveTailNode(int value){
	if (_listHead == NULL){
		return 0;
	}
	else if(_length == 1){
			_length -= 1;
			int PopHead = _listHead->_value;
			delete _listHead;
			_listHead = NULL;
			_listTail = NULL;
			return PopHead;
	}
	else{
		_length -= 1;
		int PopTail = _listTail->_value;
		Node *top = _listHead;

		while(_listTail != top->_nextNode){
			top = top->_nextNode;
		}
		delete _listTail;
		_listTail = top;
		top->_nextNode = NULL;
		return PopTail;
	}

}

int main(int argc, char* argv[])
{
}
