#include <iostream>
using namespace std;

class A
{
public:
    void f() { cout << "base"; }
};
class B : public A
{
    public:
    void f() { cout << "derived"; }
};
int main()
{
    A *obj = new B();
    obj->f();
}

/*
base
*/