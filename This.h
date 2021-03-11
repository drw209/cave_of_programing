#ifndef THIS_H_
#define THIS_H_
#include <iostream>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person();
    Person (string name, int age);
    string toString();
};

#endif 