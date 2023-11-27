# Project: 0x1D. C - Binary trees

## Resources

- **Read or watch**

- [Binary tree](https://en.wikipedia.org/wiki/Binary_tree)
- [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal](https://www.programiz.com/dsa/tree-traversal)
- [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

## Learning Objectives

### General

- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Description of what each file shows (Tasks)

- main --- folder holds test files that showcase examples of how to use functions.
- binary_trees.h --- holds files' function prototypes.

- Files that start with:

0. [New Node](./0-binary_tree_node.c) : Write a function that creates a binary tree node

- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the parent node of the node to create
- And `value` is the value to put in the new node
- When created, a node does not have any child
- Your function must return a pointer to the new node, or NULL on failure

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
  ayomide@Kazzywiz:~/binary_trees$ ./0-node
   .-------(098)-------.
  .--(012)--.         .--(402)--.
  (006)     (016)     (256)     (512)
  ayomide@Kazzywiz:~/binary_trees$
  ```

1. [Insert left](./1-binary_tree_insert_left.c) : Write a function that inserts a node as the left-child of another node

- Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the node to insert the left-child in
- And `value` is the value to store in the new node
- Your function must return a pointer to the created node, or `NULL` on failure or if parent is NULL
- If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
  ayomide@Kazzywiz:~/binary_trees$ ./1-left
  .--(098)--.
  (012)     (402)

   .--(098)-------.
  .--(054)       .--(402)
  (012)          (128)
  ayomide@Kazzywiz:~/binary_trees$
  ```

2. [Insert right](./2-binary_tree_insert_right.c) : Write a function that inserts a node as the right-child of another node

- Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the node to insert the right-child in
- And `value` is the value to store in the new node
- Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
- If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right
  ayomide@Kazzywiz:~/binary_trees$ ./2-right
  .--(098)--.
  (012)     (402)

  .-------(098)--.
  (012)--.       (128)--.
  	(054)          (402)
  ayomide@Kazzywiz:~/binary_trees$
  ```

| Task                    | File       |
| ----------------------- | ---------- |
| 3. Delete               | [SOON](./) |
| 4. Is leaf              | [SOON](./) |
| 5. Is root              | [SOON](./) |
| 6. Pre-order traversal  | [SOON](./) |
| 7. In-order traversal   | [SOON](./) |
| 8. Post-order traversal | [SOON](./) |
| 9. Height               | [SOON](./) |
| 10. Depth               | [SOON](./) |
| 11. Size                | [SOON](./) |
| 12. Leaves              | [SOON](./) |
| 13. Nodes               | [SOON](./) |
| 14. Balance factor      | [SOON](./) |
| 15. Is full             | [SOON](./) |
| 16. Is perfect          | [SOON](./) |
| 17. Sibling             | [SOON](./) |
| 18. Uncle               | [SOON](./) |

---

### Environment

- Language: C
  - OS: Ubuntu 20.04 LTS
  - Compiler: gcc 9.4.0 (gcc -Wall -pedantic -Werror -Wextra -std=gnu89 \*.c -o name_of_executable)
  - Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

---

## Author

- <em>Website</em> - [Ayomide Kayode](https://github.com/AyomideKayode)
- <em>ALX Software Engineering Program</em> - [ALX_AFRICA](https://www.alxafrica.com/programmes/)
- <em>Twitter</em> - [@kazzy_wiz](https://www.twitter.com/kazzy_wiz)
