//
//  EvenStack.cpp
//  CS250 Homework 4
//
//  Created by Joseph D'Esposito on 11/7/23.
//

#include "EvenStack.hpp"
#include <iostream>
using namespace std;

EvenStack::EvenStack()
{
    //Constructor
}

bool EvenStack::empty() //Return true if the stack is empty, false if it is not
{
    return m_evens.empty();
}

int EvenStack::size() //Return the size of the stack
{
    return m_evens.size();
}

int EvenStack::top() //Return the top object
{
    return m_evens.top();
}

void EvenStack::push(int num) //Add an object to the stack if it is even
{
    if (num % 2 == 0)
        m_evens.push(num);
    else
        cout << "Error - can only push even numbers. Target: " << num << endl;
}

void EvenStack::pop() //Remove the top object
{
    m_evens.pop();
}

//Add only the even numbers of a stack to the even stack object
void EvenStack::getEvenNumbers(stack<int> originalStack)
{
    if (originalStack.empty()) //Return nothing if the original stack is empty
        return;
    int topNum = originalStack.top();
    originalStack.pop();
    
    //Recursive Call
    this->getEvenNumbers(originalStack);
    
    this->push(topNum);
    
}

void EvenStack::emptyStack() //Remove all the objects in the stack
{
    cout << "Removing the following: ";
    while (!m_evens.empty())
    {
        int topNum = m_evens.top();
        cout << topNum << " ";
        m_evens.pop();
    }
    cout << endl;
}
