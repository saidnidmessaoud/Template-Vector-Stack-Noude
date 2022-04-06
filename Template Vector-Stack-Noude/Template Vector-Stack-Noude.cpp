#include <iostream>
#include"Node.h"
#include"Stack.h"
#include"Vecteur.h"
using namespace std;

int main()
{

    std::cout << "Class Stack Node :" << std::endl;
    Node<int>* n1 = new Node<int>(12);
    Node<int>* n2 = new Node<int>(20);
    Node<int>* n3 = new Node<int>(15);

    Stack<int>* pile = new Stack<int>();

    pile->push(n1);
    pile->push(n2);
    pile->push(n3);
    //pile->print();
    pile->print_stack();
   std::cout << std::endl;
   std::cout << std::endl;
   std::cout << std::endl;



   std::cout << "Class Vecteur :" << std::endl;

   Vecteur<int>* v1 = new Vecteur<int>(1,2,3);
   Vecteur<int> v2(1, 2, 3);
   Vecteur<int> v3(v2);
   Vecteur<int> *v4= new Vecteur<int>(0,0,0);

   std::cout << v2.operator[](1) << std::endl;
   v2.afficher(); //123
   v2.operator[](1) = 12;
   v2.afficher();//1 12 3

   v4->operator=(v2);
   v4->afficher();
   v4 = v4;
   v1->afficher();
   v2.afficher();
   v3.afficher();
   v4->afficher();
}

