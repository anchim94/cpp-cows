#pragma once
class Node
{
public:
	Node();
	Node* next = nullptr;
	virtual int weight()=0;
	virtual ~Node();
    void climb(Node*);
};

