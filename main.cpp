#include<iostream>
#include "BST.h"

using namespace std;

int main(){
    
    BST b;
    string input = "in";
    
    cout << "Enter Data (Strings), d when done:" << endl;
    cin >> input;
    while(input[0] != 'd'){
        b.addNode(input);
        cin >> input;
    }
    
    cout << "Test if a string has been stored, q to quit:" << endl;
    cin >> input;
    while(input[0] != 'q'){
        if(b.isStored(input)){
            cout << "\"" << input << "\" has been stored" << endl;
        }else{
            cout << "\"" << input << "\" has not been stored" << endl;
        }
        
        cin >> input;
    }
    cout << "All the data stored is:\n" << b.printData() << endl;
    return 0;
}