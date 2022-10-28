### C - Hash tables

----------

In this directory I delve into hash tables which is a data structure used to store information A hash table has 2 main components: key and value. It is similar to a linked list only that it has a `hash function` which looks at a certain key and return an index for what location to store.

If 2 different keys got the same index we need to use other data structures(bucket) to account for those collisions.


-----------

Diagram of a hash table implementation 🚀:

![hash table](https://imgs.search.brave.com/8GhQLomRJErH2PYYoYUeNT8gBytMJxpCD67O4jVi7ok/rs:fit:689:225:1/g:ce/aHR0cHM6Ly90c2Ux/Lm1tLmJpbmcubmV0/L3RoP2lkPU9JUC4t/QmpiSndOZDM0blA2/T1lrMlRiQ2R3SGFG/RyZwaWQ9QXBp)

Surprising facts:
In `PHP`, hash tables are **ordered**. Wait… WAT? How is this even possible?
![surprised person](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221028%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221028T132333Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9858d1f0d070554890470d78a1fbe882b3dcf065023add305509fe85c0980b6c)
 
The table below shows the files used in this directory as well as their functions:

| **Files** | **Description** |
| --------- | ----------- |
| `0-hash_table_create.c` | function that creates a hash table |
| `1-djb2.c` |  hash function implementing the djb2 algorithm |
| `2-key_index.c` | function that gives you the index of a key |
| `3-hash_table_set.c` | function that adds an element to the hash table |
| `4-hash_table_get.c` | function that retrieves a value associated with a key |
| `5-hash_table_print.c` | function that prints a hash table | 
| `6-hash_table_delete.c` | function that deletes a hash table |
| `100-sorted_hash_table.c` | functions for ordered hash tables |

##### #cisfun
