## C - Singly Linked Lists

-------

In this directory I delve into linked lists particularly singly linked lists.
Linked list is a sequence of data structures, connected together via links.Linked lists contain nodes which contain data and an address to the next node in the list.
Diagrammatic representation of a linked list:

![Linked list picture](https://imgs.search.brave.com/nkmvL63O1unP6MeRtYQroQ_pcGvkw7MIYDSn9fSxsgk/rs:fit:917:225:1/g:ce/aHR0cHM6Ly90c2Uz/Lm1tLmJpbmcubmV0/L3RoP2lkPU9JUC5r/WlNxU1l6S3hYLVRh/SDBZa1dDZ1hRSGFE/MSZwaWQ9QXBp)

A singly linked list is a type of linked list that is unidirectional, it can only be traversed in one direction.

Directory meme 😂

![Linked list meme](https://imgs.search.brave.com/M16nQYOKdLW9BiRWb4oduZOXOTePPz9RurZzYMoxfdA/rs:fit:474:225:1/g:ce/aHR0cHM6Ly90c2Uy/Lm1tLmJpbmcubmV0/L3RoP2lkPU9JUC43/UWxkSGtNbmpDT05I/QlU1bnAwbUlRSGFI/YSZwaWQ9QXBp)

The table below contains descriptions for prototypes to be used.

-----------

| Function Prototype | Description |
| -------------- | ----------- |
| `size_t print_list(const list_t *h);` | Function that prints all the elements of a list `list_t` list |
| `size_t list_len(const list_t *h);` | Function that returns the number of elements in a linked list `list_t` list |
| `list_t *add_node(list_t **head, const char *str);` | Function that adds a new node at the beginning of a `list-t` list |
| `list_t *add_node_end(list_t **head, const char *str);` | Function that adds a new node at the end of a `list_t` list |
| `void free_list(list_t *head);` | Function that frees a `list_t` list |

#### #cisfun
