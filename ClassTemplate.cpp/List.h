#pragma once
// ------------------------------------------------------------------------------
// Example: class template
//
// Contains:
//    * A list class that is not a template - works only for integers
//    * The same class as a template - works with any datatype
//    * a main() routine that uses the template
//
// 1) cut and paste the List class into a .h file in VS and then create a main
//    that uses it to verify it works.
// 2) Cut and paste the template into another .h file compare the two side by
//    side to see what the differences are between them.
// 3) Identify what operators are used on the template data.
// 4) Use the main() provided to test the template code.
// ------------------------------------------------------------------------------
//===============================================================================
// List Class - NO TEMPLATE - only works with integers...

#include <iostream>

const int MAX_ITEMS = 10;

class List {
public:
    List(); //constructor
    bool addItem(int data); //adding integers to list
    void print(); //print list out
private:
    int mData[MAX_ITEMS]; //storing integers in the class
    int mTotalItems;
};

List::List() { //constructor initializes the total items to 0
    mTotalItems = 0;
}

bool List::addItem(int data) { //looks if array is full 
    if (mTotalItems < MAX_ITEMS) {
        mData[mTotalItems] = data;
        mTotalItems++;
        return true;
    }
    else
        return false;
}

void List::print() {//prints list of integers one per line
    for (int x = 0; x < mTotalItems; x++)
        std::cout << mData[x] << "\n";
}


