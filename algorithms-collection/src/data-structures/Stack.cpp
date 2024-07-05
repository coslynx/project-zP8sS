#include "Stack.h"

Stack::Stack() {
    top = nullptr;
}

Stack::~Stack() {
    Node* current = top;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void Stack::push(int value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
}

void Stack::pop() {
    if (top == nullptr) {
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

int Stack::peek() {
    if (top == nullptr) {
        return -1;
    }
    return top->data;
}

bool Stack::isEmpty() {
    return top == nullptr;
}