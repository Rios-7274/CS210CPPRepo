
#include "Stack.h"

#include <cstdio>
#include <bits/ctype_base.h>

Stack::Stack() {
    topIndex = 0;
}

void Stack::push(int value) {
    // add value to data, topIndex updates logical position in stack
    if (!isFull()) {
        data[topIndex] = value;
        topIndex++;
    } else
        printf("Stack is Full");

}

void Stack::pop() {
    // if data isn't empty, remove the top element by shifting index
    if (!isEmpty()) {
        topIndex--;
    } else
        printf("pop: Stack is Empty");
}

int Stack::peek() const {
    // return the logical top element of data
    if (!isEmpty()) {
        return data[topIndex - 1];
    } else
        printf("peek: Stack is Empty");
    return 0;

}

bool Stack::isEmpty() const {
    // return whether data has zero elements
    return topIndex == 0;
}

bool Stack::isFull() const {
    // returns true if stack has reached maximum number of array elements
    return topIndex == 100;
}

int Stack::size() const {
    // return how many elements are in data
    return topIndex;
}
