#include <iostream>
#include <unordered_map>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    std::unordered_map<int, int> fibMap;
    fibMap[0] = 0;
    fibMap[1] = 1;

    for (int i = 2; i <= n; i++) {
        fibMap[i] = fibMap[i - 1] + fibMap[i - 2];
    }

    return fibMap[n];
}