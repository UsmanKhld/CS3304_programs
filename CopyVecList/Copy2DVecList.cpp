#include<iostream>
#include<list>
#include<vector>

using namespace std;

template <typename T>
void Copy_Vector_To_List_2d(vector<vector<T>> vec, list<list<T>>& lst) {
	lst.clear();
	for (const auto& row : vec) {
		list<T> rowList;
		for (const auto& elem : row) {
			rowList.push_back(elem);
		}
		lst.push_back(rowList);
	}
}

template <typename T> 
void displayList(list<list<T>> lst) {
	for (const auto& row : lst) {
		for (const auto& elem : row) {
			cout << elem << " ";
		}
		cout << endl;
	}
	cout << endl;
}

template <typename T> 
void displayVec(vector<vector<T>> vec) {
	for (const auto& row : vec) {
		for (const auto& elem : row) {
			cout << elem << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	vector<vector<int>> nums = { {1}, {1, 2}, {1, 2, 3} };

	list<list<int>> lNums;

	Copy_Vector_To_List_2d(nums, lNums);
	displayList(lNums);
	displayVec(nums);
}