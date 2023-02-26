// Implementation file for linked StackType
#include "Stack.h"

template<class T>
Stack<T>::Stack() {
    data = new T[MAX_ITEMS];
    top = -1;
}

template<class T>
Stack<T>::~Stack() {
    delete [] data;
}

template<class T>
bool Stack<T>::IsFull() const {
    return top == MAX_ITEMS - 1;
}

template<class T>
bool Stack<T>::IsEmpty() const {
    return top == -1;
}

template<class T>
void Stack<T>::Push(T item) {
    if (IsFull()) {
        throw FullStack();
    }

    data[top + 1] = item;
    ++top;
}

template<class T>
void Stack<T>::Pop() {
    if (IsEmpty()) {
        throw EmptyStack();
    }
    --top;
}

template<class T>
T Stack<T>::Top() {
    if (IsEmpty()) {
        throw EmptyStack();
    }
    return data[top];
}