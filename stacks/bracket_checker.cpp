#include <iostream>
#include <stack>

using namespace std;

// function prototype
bool is_matching(char open, char close);

// ==== MAIN ====

int main()
{
    // declare a stack of type char
    stack<char> brackets;
    // declare the character input
    char ch;
    // initiate the supposed matching condition as true
    bool matched = true;

    // prompt the user to enter a line with brackets
    cout << "Enter a line which includes brackets: ";
    while ((ch = cin.get()) != '\n')
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            brackets.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (brackets.empty())
            {
                cout << "The closing brackets cannot be matched: " << ch << endl;
                matched = false;
                break; // exit the loop
            }


            char top = brackets.top();
            brackets.pop();

            if (!is_matching(top, ch))
            {
                cout << "Bad match: " << top << " vs " << ch << endl;
                matched = false;
                break;
            }
        }
    }

    if (matched && !brackets.empty())
    {
        cout << "Unmatched opening bracket(s) remain inside the stack!\n";
    } else if (matched)
    {
        cout << "All brackets are matching!\n";
    }

    return 0;
}

bool is_matching(char open, char close)
{
    return (open == '(' && close == ')') || (open == '{' && close == '}') || (open == '[' && close == ']');
}