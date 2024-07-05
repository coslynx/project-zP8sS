#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insert(int value) {
    Node* newNode = new Node(value);
    
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

bool LinkedList::remove(int value) {
    if (head == nullptr) {
        return false;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    Node* current = head;
    while (current->next != nullptr) {
        if (current->next->data == value) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            return true;
        }
        current = current->next;
    }

    return false;
}

bool LinkedList::search(int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void LinkedList::display() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
}

bool LinkedList::isEmpty() {
    return head == nullptr;
}