#pragma once
#include <iostream>
using namespace std;

class Animal {
public:
	virtual void crier() const = 0;
	virtual void manger() const = 0;
	virtual ~Animal() {}
};
