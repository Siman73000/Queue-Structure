#ifndef QUEUE_H
#define QUEUE_H
#include "boolean.h"
typedef struct queuenode {
	int data;
	struct queuenode *next;
} *node_pointer;

typedef struct endpointer {
	node_pointer front;
	node_pointer back;
} *queue;

void init_queue(queue *);
void add(queue *, int);
int fetch(queue *);
void print_queue(queue);
boolean is_empty(queue);
boolean is_full(void);
#endif
