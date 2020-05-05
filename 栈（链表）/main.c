#include"func.h"

int main() {				//≤‚ ‘
	Stack s;
	init_stack(&s);
	push(&s, 10);
	push(&s, 5);
	printf("the top value of the stack is %d\n", top(&s));
	pop(&s); 
	printf("the top value of the stack is %d\n", top(&s));
	pop(&s); 
	printf("the stack is empty?=%s\n", empty(&s)?"yes":"no");
}
