#ifndef EXCEPTIONS_h
#define EXCEPTIONS_h
#include<exception>
#include<iostream>
using namespace std;

class NeuspeloSlanjePoruke :public exception {
public:
//Navodno je dovoljno da se navede samo konstruktor koji roditeljsko klasi prosledjuje poruku
	NeuspeloSlanjePoruke(const char* message) :exception(message) {};
};
#endif //EXCEPTIONS_h