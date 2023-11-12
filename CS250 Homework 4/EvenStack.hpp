//
//  EvenStack.hpp
//  CS250 Homework 4
//
//  Created by Joseph D'Esposito on 11/7/23.
//

#ifndef EvenStack_hpp
#define EvenStack_hpp
#include <string>
#include <stdio.h>
#include <stack>
using namespace std;

class EvenStack
{
public:
    EvenStack();
    bool empty();
    int size();
    int top();
    void push(int);
    void pop();
    void getEvenNumbers(stack<int>);
    void emptyStack();
protected:
    
private:
    stack <int> m_evens;
};
#endif /* EvenStack_hpp */
