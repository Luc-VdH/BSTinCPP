#include<iostream>
#include "node.h"

using namespace std;

class BST{
    private:
         node *root;
    public:
        BST();
        void addNode(string d);
        bool isStored(string d);
//        string printData();
};