#include <iostream>
#include <sstream>

using namespace std;

int main(){
    string name = "bob";
    int age = 32;
    stringstream ss;
    ss << "name : " ;
    ss << name;
    ss << ": age";
    ss << age;
    cout << ss.str();


    return 0;
}