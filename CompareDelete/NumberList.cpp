#include<iostream>
#include"NumberList.h"

using namespace std;

void NumberList::appendNode(double num) {
	ListNode* newNode;
	ListNode* nodePtr;

	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr;

	if (!head) {
		head = newNode;
	}
	else {
		nodePtr = head;

		while (nodePtr->next) {
			nodePtr = nodePtr->next;
		}

		nodePtr->next = newNode;
	}
}

void NumberList::insertNode(double num) {
	ListNode* newNode;
	ListNode* nodePtr;
	ListNode* prevNode = nullptr;

	newNode = new ListNode;
	newNode->value = num;

	if (!head) {
		head = newNode;
		newNode->next = nullptr;
	}
	else {
		nodePtr = head;

		prevNode = nullptr;


	}
}