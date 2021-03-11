#ifndef THIS_H_
#define THIS_H_
#include <iostream>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person(): name("unnamed"), age(20) {};
    Person (string name, int age): name (name), age(age){};
    string toString();
};

#endif 