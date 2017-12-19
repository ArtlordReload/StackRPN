#ifndef STACK_H
#define STACK_H

class Stack
{
private:
	int data;
	Stack *next;
public:
	Stack();
	int getData();
	void setData(int data);
	void Push(int data);
	void Pop();
	int  Show();
	bool IsEmpty();
};


#endif STACK_H