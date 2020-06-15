#ifndef STACK_H
#define STACK_H

struct Stack {
	int data;
	struct Stack* below;
};


Stack* push(int value, Stack* top);
void peek(Stack* top);
Stack* pop(Stack* top);
void search(int searchValue, Stack* top);
void size(Stack* pop);
void printStack(Stack* top);



#endif