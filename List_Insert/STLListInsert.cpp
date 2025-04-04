#include<iostream>
#include<list>
#include<iterator>

using namespace std;

template <typename T>
void List_Insert(list<T>& l, int pos, int val) {
	if (pos > l.size()) {
		cerr << "Invalid position" << endl;
	}
	else {
		auto it = l.begin();
		advance(it, pos);
		l.insert(it, val);
	}
}

template <typename T> 
void printList(list<T>& l) {
	for (const auto& item : l) {
		cout << item << " ";
	}
	cout << endl;
}

int main() {
	list<int> nums{ 1,2,3,4,5,7 };
	printList(nums);
	List_Insert(nums, 5, 6);
	printList(nums);
}