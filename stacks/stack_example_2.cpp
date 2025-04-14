#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    // declare the size
    int size;
    string name;
    stack<string> names;

    cout << "Enter the number of names you want in the stack: ";
    cin >> size;

    // get name inputs
    cout << "Enter " << size << " names in the stack: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> name;
        names.push(name);
    }

    // printing the names in reverse order
    cout << "\nNames in reverse: ";
    while (!names.empty())
    {
        cout << names.top() << endl;
        names.pop();
    }

    return 0;
}