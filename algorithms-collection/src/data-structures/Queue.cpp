#include "Queue.h"

Queue::Queue() {
    front = nullptr;
    rear = nullptr;
}

Queue::~Queue() {
    Node* current = front;
    Node* next;

    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
}

bool Queue::isEmpty() {
    return front == nullptr;
}

void Queue::enqueue(int value) {
    Node* newNode = new Node(value);

    if (isEmpty()) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void Queue::dequeue() {
    if (isEmpty()) {
        return;
    }

    Node* temp = front;
    front = front->next;
    delete temp;

    if (front == nullptr) {
        rear = nullptr;
    }
}

int Queue::peek() {
    if (isEmpty()) {
        return -1;
    }
    return front->data;
}