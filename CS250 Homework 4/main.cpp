//  Stacks (CS 250: HW4)
//  Created by: Joseph D'Esposito
//  Last updated: 11/11/23
//  This program implements an EvenStack class to to store only even integers of a stack.
//

#include <iostream>
#include <stack>
#include "EvenStack.hpp"

using namespace std;


int main()
{
    //Example stack
    EvenStack myStack;
    myStack.push(44);
    myStack.push(66);
    myStack.push(99);
    myStack.push(88);
    myStack.pop();
    myStack.emptyStack();

    //Stack of numbers to be sorted
    stack <int> aStack;

    aStack.push(2);
    aStack.push(9);
    aStack.push(6);
    aStack.push(2);
    aStack.push(3);
    aStack.push(5);
    aStack.push(4);

    //Even stack object
    EvenStack newStack;
    newStack.push(32);
    newStack.getEvenNumbers(aStack);

    cout << endl;
    cout << "aStack has " << aStack.size() << " elements" << endl;
    cout << "myStack has " << myStack.size() << " elements" << endl;
    cout << "newStack has " << newStack.size() << " elements" << endl;

    cout << endl;
    while (!newStack.empty()) {
       cout <<  newStack.top() << "  ";
       newStack.pop();
    }
    cout << endl;

    return 0;
}
