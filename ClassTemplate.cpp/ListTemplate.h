#pragma once
//===============================================================================
//List Class TEMPLATE, works with any Type that supports = and << operator

#include <iostream>

const int MAX_ITEMS = 10;

// Type is a name we made up that will be replaced with a real datatype at compile time.
// Since the class is a template based on Type, “template <typename Type>” needs to
//   precede the class definition and be prepended to every member function of the class.
// Whatever Type we build the class for needs to support any operators we use on that type.

template <typename Type>
class List {
public:
    List();
    bool addItem(Type data);
    void print();
private:
    Type mData[MAX_ITEMS];
    int mTotalItems;
};

template <typename Type>
List<Type>::List() {//constructor
    mTotalItems = 0;
}

template <typename Type>
bool List<Type>::addItem(Type data) {
    if (mTotalItems < MAX_ITEMS) {
        mData[mTotalItems] = data;        //assignment operator!
        mTotalItems++;
        return true;
    }
    else
        return false;
}

template <class Type>
void List<Type>::print() {
    for (int x = 0; x < mTotalItems; x++)
        std::cout << mData[x] << "\n";    //streaming operator!
}
