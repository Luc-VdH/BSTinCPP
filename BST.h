#include<iostream>
#include "node.h"

using namespace std;

class BST{
    private:
         node *root;
         string out;
         void printData(node *start);
    public:
        BST();
        void addNode(string d);
        bool isStored(string d);
        string printData();
};