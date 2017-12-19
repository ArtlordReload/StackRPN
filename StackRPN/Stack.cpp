#include<stdio.h>

#include "Stack.h"

Stack::Stack()
{
	this->next = NULL;
	this->data = NULL;
}
int Stack::getData()
{
	return this->data;
}
void Stack::setData(int data)
{
	this->data = data;
}

struct Node {
	int data;
	struct Node*link;
};
struct Node*top = NULL;

// funcion para insertar el primer elemento en pila
void Stack::Push(int x)
{
	Node *temp = new Node();
	temp->data = x;
	temp->link = top;
	top = temp;
}

//funcion para borrar el primer elemento de pila
void Stack::Pop()
{
	struct Node *temp;
	if (top == NULL) return;
	temp = top;
	top = top->link;
	delete temp;
}

int Stack::Show()
{
	if (top == NULL)
	{
		printf("No existen elementos en Pila");
		return NULL;
	}
	return top->data;
}