#pragma once
#include"Node.h"
template<class T>


class Stack
{
public:
	Stack();
	void push(Node<T> * n);
	void pop();
	bool is_empty() const;
	void print() const;
	void print_stack();
	Node<T>* sommet() const;
	~Stack();
private:
	Node<T>* top;
};



template<class T>
Stack<T>::Stack()
{
	this->top = nullptr;
}

template<class T>
void Stack<T>::push(Node<T>* n)
{
	n->next = this->top;
	this->top = n;
}

template<class T>
void Stack<T>::pop()
{
	Node<T>* tmp = this->top;
	this->top = this->top->next;
}

template<class T>
bool Stack<T>::is_empty() const
{
	return (this->top == nullptr);
}

template<class T>
void Stack<T>::print() const
{
	Node<T>* tmp = this->top;
	while (tmp != nullptr)
	{
		tmp->afficher();

		tmp = tmp->next;
	}
}

template<class T>
void Stack<T>::print_stack()
{
	Node<T>* tmp = this->top;
	Stack newstack;
	while (tmp != nullptr)
	{
		tmp->afficher();
		this->pop();
		newstack.push(tmp);
		tmp = this->top;
	}
	tmp = newstack.top;
	while (tmp != nullptr)
	{
		this->push(tmp);
		tmp = tmp->next;
		newstack.pop();

	}

}

template<class T>
Node<T>* Stack<T>::sommet() const
{
	return this->top;
}

template<class T>
Stack<T>::~Stack()
{
	while (this->is_empty() != true) {
		this->pop();
	}
}
