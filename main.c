#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "stack.h"


int main(void) {

	boolean quit = FALSE;
	int menu_sel, data_item, pop_var;
	stack top;
	init_stack(&top);

	while (!quit) {
		printf("1: Push\n");
		printf("2: Pop\n");
		printf("3: Print\n");
		printf("4: Quit\n");
		scanf("%d", &menu_sel);		

		switch (menu_sel) {
			case 1:
				if (!is_full()) {
					printf("Enter a number to Push: ");
					scanf("%d", &data_item);
					push (&top, data_item);
				}
				else {
					printf("ERROR: stack is full\n");
				}
				break;
			case 2:
				if (is_empty(top)) {
					printf("stack is empty\n");
				}
				else {
					pop_var = pop(&top);
					printf("%d was removed\n", pop_var);
				}
				break;
			case 3:
				if (is_empty(top)) {
					printf("stack is empty\n");
				}
				else {
					printf("Current stack:\n");
					print_stack(top);
					printf("\n");
				}
				break;
			case 4:
				quit = TRUE;
				break;
			default: printf("ERROR: %d is an invalid selection\n", menu_sel);
		}
	}
}
