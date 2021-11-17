//===============================================================================
// code that uses the template
#include <iostream>
#include <string>
#include "ListTemplate.h"


using namespace std;

int main() {
    List<int> list1;
    List<string> list2;

    list1.addItem(4);
    list1.addItem(10);
    list1.addItem(5);
    list1.print();

    list2.addItem("Bob");
    list2.addItem("Sue");
    list2.addItem("Kelly");
    list2.print();

    return 1;
}

