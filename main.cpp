// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
    //BST_312<int> bst;

    string s;
    //int s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }
                                          //IS SEARCHING OR SORTING SAME AS ONE OF THESE TRAVERSALS?
    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    //s = "tree";
    s = "jumps";
    //s = 9;
    bst.deleteItem(s);
    string j = "jordon";
    //int j = 0;
    bst.deleteItem(j);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

    string a = "hello";
    //int a = 10;
    bst.insertItem(a);
    cout << "inorder traversal after inserting item" << endl;
    print(bst.inOrderTraversal());

    cout << "is item in tree?" << endl;
    bool item1 = bst.isItemInTree("dog");
    cout << item1 << endl;   //should be true
    bool item2 = bst.isItemInTree("dog");
    cout << item2 << endl;   //should be true
   bool item3 = bst.isItemInTree("weird");
   cout << item3 << endl;   //should be false

    cout << "making empty..." << endl;
    bst.makeEmpty();
    print(bst.inOrderTraversal());
    cout << "empty now" << endl;

    cout << "traversing when empty..." << endl;
    print(bst.preOrderTraversal());
    cout << "is it empty?" << endl;
    cout << bst.isEmpty() << endl;

    cout << "deleting item" << endl;
   bst.deleteItem(a);
   print(bst.inOrderTraversal());

   cout << bst.countNodes() << endl;


}

