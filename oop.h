#pragma once
#ifndef OOP_H
#define OOP_H

class Base
{
public:
    Base();
    ~Base();
    void func() const;
};

class Child : public Base
{
public:
    Child();
    ~Child();
    virtual void func() const;
};
void Function(const Base &obj);
#endif // OOP_H
