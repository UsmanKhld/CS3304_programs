#include<iostream>
#include<vector>
#include<chrono>
#include "SimpleVector.h"

int main() {
    const int SIZE = 100000000; // Size of the data structures

    // Create STL vector and SimpleVector with the same size
    std::vector<int> stlVector(SIZE);
    SimpleVector<int> simpleVector(SIZE);

    // Initialize both vectors with the same values
    for (size_t i = 0; i < SIZE; ++i) {
        stlVector[i] = i;
        simpleVector[i] = i;
    }

    // Measure access time for STL vector
    clock_t start = clock();
    for (int i = 0; i < SIZE; i++) {
        int value = stlVector[i]; // Access element
    }
    clock_t end = clock();
    double stlTime = double(end - start) / CLOCKS_PER_SEC;

    // Measure access time for SimpleVector
    start = clock();
    for (int i = 0; i < SIZE; i++) {
        int value = simpleVector[i]; // Access element
    }
    end = clock();
    double simpleTime = double(end - start) / CLOCKS_PER_SEC;

    // Output results
    std::cout << "STL Vector access time: " << stlTime << " seconds" << std::endl;
    std::cout << "SimpleVector access time: " << simpleTime << " seconds" << std::endl;

    return 0;
}