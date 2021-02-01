#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        cout << "i is :" << i << endl;

        if (i==3){
            cout << "We are going to skip 'Looping...' with contine\n";
            continue;
        }
        else if (i==4){
            cout << "We are going to break\n";
            break;
        }
        
       
        
        cout << "Looping..." << endl;

    }
    cout << "Program quitting..." << endl;
    return 0;
}