#include <iostream>
#include <stdlib.h>
#include "stack.h"
using namespace std;

int main() {
	Stack* top = NULL;
	top = push(10, top);
	top = push(20, top);
	top = push(30, top);
	top = pop(top);
	printStack(top);
	peek(top);
	search(10, top);
	size(top);

	return 0;
}