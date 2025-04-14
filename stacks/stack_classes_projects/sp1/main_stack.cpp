#include <iostream>
#include "../include/stack.h" // depends on where stack.h and stack.cpp are saved

using namespace std;

int main()
{
    // declare a stack
    Stack s;
    s.push('A');
    s.push('B');
    s.push('C');

    // printing the stack
    s.print();

    stackEntry topChar;
    if (s.top(topChar) == success)
    {
        cout << "Top of the stack: " << topChar << endl;
    }

    s.pop();
    s.print();

    return 0;
}