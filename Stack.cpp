#include <iostream>
#include <stdlib.h>
#include "stack.h"
using namespace std;

void printStack(Stack* top) {
	Stack* curr = top;
	while (curr != NULL) {
		cout << curr->data << endl;
		cout << "|" << endl;
		curr = curr->below;
	}
}

Stack* push(int value, Stack* top) {
	if (top == NULL) {
		Stack* newTop = (Stack*)malloc(sizeof(Stack));
		newTop->data = value;
		newTop->below = NULL;
		return newTop;
	}
	else {
		Stack* newTop = (Stack*)malloc(sizeof(Stack));
		newTop->data = value;
		newTop->below = top;
		return newTop;
	}
}

Stack* pop(Stack* top) {
	Stack* pop = top;
	top = top->below;
	free(pop);
	return top;
}

void search(int searchValue, Stack* top) {
	Stack* curr = top;
	int count = 1;
	while (curr != NULL) {
		if (curr->data == searchValue) {
			cout << "Found " << searchValue << " at " << count << endl;
			return;
		}
		curr = curr->below;
		count++;
	}
}

void peek(Stack* top) {
	cout << "The top is " << top->data<< endl;
}

void size(Stack* top) {
	int count = 0;
	Stack* curr = top;
	while (curr != NULL) {
		count++;
		curr = curr->below;
	}
	cout << "The size of the stack is " << count << endl;
}