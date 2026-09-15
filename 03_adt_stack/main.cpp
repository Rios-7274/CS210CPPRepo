
#include <iostream>
#include "Stack.h"

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Stack size: " << s.size() << std::endl;
    std::cout << "Top: " << s.peek() << std::endl;

    s.pop();
    std::cout << "After pop, peek: " << s.peek() << std::endl;
    std::cout << "Is empty? " << (s.isEmpty() ? "yes" : "no") << std::endl;

    return 0;
}

