#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // storing the amount of numbers we want
    int n;
    double object;
    stack<double> numbers;

    cout << "Please enter an integer n followed by n numbers: \n";
    cin >> n;

    // pushing the numbers into the stack
    for (int i = 0; i < n; i++)
    {
        // input from the user
        cin >> object;

        // pushing object in the stck
        numbers.push(object);
    }

    // printing the numbers in the stack in reverse
    cout << "The numbers printed in reverse: \n";
    while (!numbers.empty())
    {
        cout << numbers.top() << " ";
        numbers.pop();
    }

    return 0;
}