#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

// ==== FUNCTION PROTOTYPES ====
void reverse_sentence(const string& sentence); // reversing the whole sentence
void reverse_words(const string& sentence); // reversing each word individually
void reverse_chars(const string& sentence); // reversing characters in the sentence

// ==== MAIN ====
int main()
{
    // input declaration
    string user_input;

    // prompt the user to enter a sentence
    cout << "Please enter a sentence: ";
    getline(cin, user_input);

    // calling the reversing functions
    reverse_sentence(user_input);
    reverse_words(user_input);
    reverse_chars(user_input);

    return 0;
}

// reversing the whole sentence
void reverse_sentence(const string& sentence)
{
    // declare the stack
    stack<char> s;
    for (char ch : sentence)
    {
        // pushing the character in the stack
        s.push(ch);
    }

    // sentence revrsed
    cout << "The sentence in reverse: ";
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << endl;
}

// function for reversing each word individually
void reverse_words(const string& sentence)
{
    stringstream ss(sentence);
    string word;

    cout << "Each word of the sentence in reverse: ";
    while (ss >> word)
    {
        stack<char> s;
        for (char ch : word)
        {
            s.push(ch);
        }
        while (!s.empty())
        {
            cout << s.top();
            s.pop();
        }
        cout << endl;
    }
}

// function for reversing characters in the sentence
void reverse_chars(const string& sentence)
{
    stack<char> s;
    for (char ch : sentence)
    {
        s.push(ch);
    }

    cout << "Characters in reverse: ";
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << endl;
}