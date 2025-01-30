#include<iostream>
#include<vector>
#include<chrono>
#include "SimpleVector.h"

using namespace std;

int main() {
    int size = 1000000;
    SimpleVector<int> nums(size);
    vector<int> stlNums(size);

    for (int i = 0; i < size; i++) {
        stlNums[i] = i;
        nums[i] = i;
    }

    auto start = chrono::high_resolution_clock::now();

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

    cout << "Simple Vector duration in nanoseconds: " << duration.count() << endl;

    cout << endl;


    auto startSTL = chrono::high_resolution_clock::now();

    sum = 0;
    for (int i = 0; i < size; i++) {
        sum += stlNums[i];
    }

    auto endSTL = chrono::high_resolution_clock::now();
    auto durationSTL = chrono::duration_cast<chrono::nanoseconds>(endSTL - startSTL);

    cout << "STL Vector duration in nanoseconds: " << durationSTL.count() << endl;

    return 0;
}