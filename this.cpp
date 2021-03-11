#include <iostream>
#include "This.h"
#include <sstream>

Person::Person(){
    age = 22;
    name = "Love";
}
Person::Person(string name, int age){
    this->name = name;
    this->age = age;
}
string Person::toString(){
    stringstream together;
    together << "Name: ";
    together << name;
    together << "; age: ";
    together << age << endl;
    return together.str();
}

using namespace std;
int main(){
    Person cat;
    cout << cat.toString();
    Person dog("buddy", 25);
    cout << dog.toString();

    return 0;
}