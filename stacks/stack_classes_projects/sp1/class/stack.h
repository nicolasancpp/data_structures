#ifndef STACK_H
#define STACK_H

// max elements in the stack
const int MAX = 100;
typedef char stackEntry;

// declare the errors
enum errorCode {success, underflow, overflow};

// declare class
class Stack {
    private:
        // stack array
        stackEntry entry[MAX];
        // size of the stack
        int count;

    public:
        Stack(); // constructor
        bool empty() const;
        bool full() const;
        errorCode push(const stackEntry&);
        errorCode pop();
        errorCode top(stackEntry&) const;
        void print() const;
};

#endif