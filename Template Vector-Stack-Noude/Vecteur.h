#pragma once
#include<assert.h>

template<class T>
class Vecteur
{
public:
	Vecteur(T x, T y,T z);
	Vecteur(const Vecteur<T>& v);
	void afficher() const;
	Vecteur<T>& operator=(const Vecteur<T>& v);
	bool operator==(const Vecteur<T>&)const;
	bool operator!=(const Vecteur<T>&)const;
	T& operator[](int index);
	~Vecteur();

private:
	T* vect;
};




template<class T>
Vecteur<T>::Vecteur(T x, T y, T z)
{
	this->vect = new T[3];
	this->vect[0] = x;
	this->vect[1] = y;
	this->vect[2] = z;
}

template<class T>
Vecteur<T>::Vecteur(const Vecteur<T>& v)
{
	this->vect = new T[3];
	this->vect[0] = v.vect[0];
	this->vect[1] = v.vect[1];
	this->vect[2] = v.vect[2];
}

template<class T>
void Vecteur<T>::afficher() const
{
	cout << "(" << this->vect[0] << "," << this->vect[1] << "," << this->vect[2] << ")" << endl;
}

template<class T>
Vecteur<T>& Vecteur<T>::operator=(const Vecteur<T>& v)
{
	if (this != &v) {
		delete[] this->vect;
		this->vect = 0;
		this->vect = new T[3];
		for (int i = 0; i < 3; i++)
		{
			this->vect[i] = v.vect[i];
		}
	}
	return *this;
}

template<class T>
bool Vecteur<T>::operator==(const Vecteur<T>& v) const
{
	bool res = true;
	for (int i = 0; i < 3; i++)
	{
		res = res && (this->vect[i] == v.vect[i]);
	}
	return res;
}

template<class T>
bool Vecteur<T>::operator!=(const Vecteur<T>& v) const
{
	return !(this->operator==(v));
}

template<class T>
T& Vecteur<T>::operator[](int index)
{
	assert((index >= 0 && index < 3)); // en mode debug

	return this->vect[index];
}



template<class T>
Vecteur<T>::~Vecteur()
{
	cout << "desctructeur" << endl;
	delete[] this->vect;
	this->vect = 0;
}
