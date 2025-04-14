#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    // stack type string for undo
    stack<string> undo_stack;
    // stack type string for redo
    stack<string> redo_stack;

    // declare the command type and the text
    string command, text;

    // checking through the command types
    while(true)
    {
        // prompt the user to enter a type
        cout << "Enter a command (type, undo, redo, view, exit): ";
        cin >> command;

        if (command == "type")
        {
            cout << "Enter text: ";
            cin.ignore();
            getline(cin, text);
            undo_stack.push(text);

            while (!redo_stack.empty())
                redo_stack.pop();

            cout << "Typed: " << text << endl;
        }
        else if (command == "undo")
        {
            if (!undo_stack.empty())
            {
                redo_stack.push(undo_stack.top());
                undo_stack.pop();
                cout << "Undo successful\n";
            }
            else
            {
                cout << "Nothing to undo\n";
            }
        }
        else if (command == "redo")
        {
            if (!redo_stack.empty())
            {
                undo_stack.push(redo_stack.top());
                redo_stack.pop();
                cout << "Redo successful\n";
            }
            else
            {
                cout << "Nothing to redo\n";
            }
        }
        else if (command == "view")
        {
            if (undo_stack.empty())
                cout << "No text\n";
            else
                cout << "Current text: " << undo_stack.top() << endl;
        }
        else if (command == "exit")
        {
            break;
        }
        else
        {
            cout << "Unknown command! Please try again.\n";
        }
    }

    return 0;
}