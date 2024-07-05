#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

BinarySearchTree::~BinarySearchTree() {
    destroyTree(root);
}

void BinarySearchTree::destroyTree(Node* node) {
    if (node != nullptr) {
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }
}

void BinarySearchTree::insert(int key) {
    root = insertNode(root, key);
}

Node* BinarySearchTree::insertNode(Node* node, int key) {
    if (node == nullptr) {
        return new Node(key);
    }

    if (key < node->key) {
        node->left = insertNode(node->left, key);
    } else if (key > node->key) {
        node->right = insertNode(node->right, key);
    }

    return node;
}

Node* BinarySearchTree::search(int key) {
    return searchNode(root, key);
}

Node* BinarySearchTree::searchNode(Node* node, int key) {
    if (node == nullptr || node->key == key) {
        return node;
    }

    if (key < node->key) {
        return searchNode(node->left, key);
    } else {
        return searchNode(node->right, key);
    }
}

void BinarySearchTree::remove(int key) {
    root = removeNode(root, key);
}

Node* BinarySearchTree::removeNode(Node* node, int key) {
    if (node == nullptr) {
        return node;
    }

    if (key < node->key) {
        node->left = removeNode(node->left, key);
    } else if (key > node->key) {
        node->right = removeNode(node->right, key);
    } else {
        if (node->left == nullptr) {
            Node* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr) {
            Node* temp = node->left;
            delete node;
            return temp;
        }

        Node* temp = minValueNode(node->right);
        node->key = temp->key;
        node->right = removeNode(node->right, temp->key);
    }

    return node;
}

Node* BinarySearchTree::minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}