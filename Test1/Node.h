#pragma once
class Node
{
public:
	Node();
	Node* next = nullptr;
	Node* prev = nullptr;
	virtual int weight()=0;
	virtual ~Node();
    void climb(Node*);
	virtual void print()=0;
};

