#include <iostream>
#include <sstream>
#include "This_constructor_initalize.h"

using namespace std;
string Person::toString(){
    stringstream together;
    together << "Name: ";
    together << name;
    together << "; age: ";
    together << age << endl;
    return together.str();
}
int main(){
    Person hey;
    cout << hey.toString();
    Person hey2("Love", 2000);
    cout << hey2.toString();


    return 0;
}