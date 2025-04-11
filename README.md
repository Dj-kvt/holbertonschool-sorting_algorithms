# Title: holbertonschool-sorting_algorithms

## 1-Description 
### In this project we learn to manipulate and understand the complexity of our different C programs. For this we use Big O notations and apply them with command outputs.

## 2-Tools used

-  for make my project i have need:
### 2.1-My header file 

```bash
#ifndef SORT_H_
#define SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);
void insertion_sort_list(listint_t **list);

#endif /* SORT_H_ */
```

### My different prototypes and theme of task

 _ 0. Bubble sort that use the prototype "void bubble_sort(int *array, size_t size);"
 _ 1. Insertion sort that use the prototype "void insertion_sort_list(listint_t **list);"
 _ 2. Selection sort that use the prototype "void selection_sort(int *array, size_t size);"
 _ 3. Quick sort that use the prototype "void quick_sort(int *array, size_t size);"

 # AUTHORS OF PROJECT 
 ##### Emmanuel MOUMBOUILOU
 ##### QUENTIN C26
 ##### Vyckash Djepang

 ## -Trelo link
 - https://trello.com/b/B86EiSLA/c-sorting-algorithms-big-o