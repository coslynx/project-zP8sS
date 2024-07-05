#include <iostream>
#include <vector>
#include "sorting/BubbleSort.cpp"
#include "sorting/SelectionSort.cpp"
#include "sorting/InsertionSort.cpp"
#include "sorting/MergeSort.cpp"
#include "sorting/QuickSort.cpp"
#include "searching/LinearSearch.cpp"
#include "searching/BinarySearch.cpp"
#include "graph-traversal/DepthFirstSearch.cpp"
#include "graph-traversal/BreadthFirstSearch.cpp"
#include "dynamic-programming/Fibonacci.cpp"
#include "dynamic-programming/Knapsack.cpp"
#include "data-structures/LinkedList.cpp"
#include "data-structures/Stack.cpp"
#include "data-structures/Queue.cpp"
#include "data-structures/BinarySearchTree.cpp"

void displayMenu() {
    std::cout << "1. Bubble Sort\n";
    std::cout << "2. Selection Sort\n";
    std::cout << "3. Insertion Sort\n";
    std::cout << "4. Merge Sort\n";
    std::cout << "5. Quick Sort\n";
    std::cout << "6. Linear Search\n";
    std::cout << "7. Binary Search\n";
    std::cout << "8. Depth First Search\n";
    std::cout << "9. Breadth First Search\n";
    std::cout << "10. Fibonacci Sequence\n";
    std::cout << "11. Knapsack Problem\n";
    std::cout << "12. Linked List\n";
    std::cout << "13. Stack\n";
    std::cout << "14. Queue\n";
    std::cout << "15. Binary Search Tree\n";
    std::cout << "16. Exit\n";
}

int main() {
    int option;
    do {
        displayMenu();
        std::cout << "Enter your choice: ";
        std::cin >> option;
        
        switch(option) {
            case 1:
                // Execute Bubble Sort function
                break;
            case 2:
                // Execute Selection Sort function
                break;
            case 3:
                // Execute Insertion Sort function
                break;
            case 4:
                // Execute Merge Sort function
                break;
            case 5:
                // Execute Quick Sort function
                break;
            case 6:
                // Execute Linear Search function
                break;
            case 7:
                // Execute Binary Search function
                break;
            case 8:
                // Execute Depth First Search function
                break;
            case 9:
                // Execute Breadth First Search function
                break;
            case 10:
                // Execute Fibonacci Sequence function
                break;
            case 11:
                // Execute Knapsack Problem function
                break;
            case 12:
                // Execute Linked List function
                break;
            case 13:
                // Execute Stack function
                break;
            case 14:
                // Execute Queue function
                break;
            case 15:
                // Execute Binary Search Tree function
                break;
            case 16:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
        
    } while(option != 16);

    return 0;
}