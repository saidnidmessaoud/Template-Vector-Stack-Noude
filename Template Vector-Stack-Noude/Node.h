#pragma once
#include<iostream>
using namespace std;


template<class T>
class Node
{
public:
	Node(T data);
	void afficher() const;
	~Node();
	template<class U>friend class Stack;
private:

	T data;
	Node<T>* next;
};


template<class T>
Node<T>::Node(T data)
{
	this->data = data;
	this->next = nullptr;
}

template<class T>
void Node<T>::afficher() const
{
	cout << this->data << endl;
}

template<class T>
Node<T>::~Node()
{
	cout << "destructeur de Node" << endl;
}
