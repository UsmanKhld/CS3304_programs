#include <iostream>
#include <vector>
#include <list>
#include <chrono>
#include <cstdlib>
using namespace std;
using namespace std::chrono;

int main() {
    const int SIZE = 10000;
    vector<int> vec;
    list<int> lst;

    for (int i = 0; i < SIZE; ++i) {
        vec.push_back(i);
        lst.push_back(i);
    }

    // Measure delete time for Vector

    auto start = high_resolution_clock::now();
    vec.erase(vec.begin() + (SIZE / 2)); 
    auto end = high_resolution_clock::now();

    auto vectorTime = duration_cast<microseconds>(end - start).count();
    cout << "Vector delete time: " << vectorTime << " microseconds\n";

    // Measure delete time for List
    auto it = lst.begin();
    advance(it, SIZE / 2); 

    start = high_resolution_clock::now();
    lst.erase(it); 
    end = high_resolution_clock::now();

    auto listTime = duration_cast<microseconds>(end - start).count();
    cout << "List delete time: " << listTime << " microseconds\n";

    return 0;
}
