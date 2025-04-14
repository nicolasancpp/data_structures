#include <iostream>
#include "stack.h" // call the class file

using namespace std;

// constructor
Stack::Stack()
{
    // initiate at point zero
    count = 0;
}

// empty function
bool Stack::empty() const
{
    return count == 0;
}

// full function
bool Stack::full() const
{
    return count == MAX;
}

errorCode Stack::push(const stackEntry& item)
{
    if (full())
        return overflow;
    entry[count++] = item;
    return success;
}

errorCode Stack::pop() 
{
    if (empty())
        return underflow;
    count--;
    return success;
}

errorCode Stack::top(stackEntry& item) const 
{
    if (empty())
        return underflow;
    item = entry[count - 1];
    return success;
}

void Stack::print() const
{
    for (int i = count - 1; i >= 0; i--)
    {
        cout << entry[i] << " "; 
    }
    cout << endl;
}