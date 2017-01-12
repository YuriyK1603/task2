#pragma once
//#include "stdafx.h"
#include<iostream>
#include "oop.h"
using namespace std;

Base::Base()//constructor of class Base
{
    cout << "Construct Base object\n";
}

Base::~Base()//destructor of clase Base
{
    cout << "Destruct Base object\n";
}

void Base::func()const//method of Base
{
    cout << "Function func() of class Base\n";
}

Child::Child()//constructor of class Child
{
    cout << "Construct Child object\n";
}

Child ::~Child()//destructor of clase Child
{
    cout << "Destruct Child object\n";
}

void Child::func() const//method of Child
{
    cout << "Function func() of class Child\n";
}

void Function(const Base &obj)
{
    cout << "* Call method func() for object obj" << endl;
    obj.func();
}
