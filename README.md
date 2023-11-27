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

3. [Delete](./3-binary_tree_delete.c) : Write a function that deletes an entire binary tree

- Prototype: `void binary_tree_delete(binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to delete
- If `tree` is `NULL`, do nothing

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ valgrind ./3-del
  ==70645== Memcheck, a memory error detector
  ==70645== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
  ==70645== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
  ==70645== Command: ./3-del
  ==70645==
  .-------(098)--.
  (012)--.       (128)--.
  	(054)          (402)
  ==70645==
  ==70645== HEAP SUMMARY:
  ==70645==     in use at exit: 0 bytes in 0 blocks
  ==70645==   total heap usage: 10 allocs, 10 frees, 1,973 bytes allocated
  ==70645==
  ==70645== All heap blocks were freed -- no leaks are possible
  ==70645==
  ==70645== For lists of detected and suppressed errors, rerun with: -s
  ==70645== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
  ayomide@Kazzywiz:~/binary_trees$
  ```

4. [Is leaf](./4-binary_tree_is_leaf.c) : Write a function that checks if a node is a leaf

- Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check
- Your function must return `1` if `node` is a leaf, otherwise `0`
- If `node` is `NULL`, return `0`

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf
  ayomide@Kazzywiz:~/binary_trees$ ./4-leaf
  .-------(098)--.
  (012)--.       (128)--.
  	(054)          (402)
  Is 98 a leaf: 0
  Is 128 a leaf: 0
  Is 402 a leaf: 1
  ayomide@Kazzywiz:~/binary_trees$
  ```

5. [Is root](./5-binary_tree_is_root.c) : Write a function that checks if a given node is a root

- Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check
- Your function must return `1` if `node` is a root, otherwise `0`
- If `node` is `NULL`, return `0`

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root
  ayomide@Kazzywiz:~/binary_trees$ ./5-root
  .-------(098)--.
  (012)--.       (128)--.
  	(054)          (402)
  Is 98 a root: 1
  Is 128 a root: 0
  Is 402 a root: 0
  ayomide@Kazzywiz:~/binary_trees$
  ```

6. [Pre-order traversal](./6-binary_tree_preorder.c) : Write a function that goes through a binary tree using pre-order traversal

- Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre
  ayomide@Kazzywiz:~/binary_trees$ ./6-pre
  	.-------(098)-------.
  .--(012)--.         .--(402)--.
  (006)     (056)     (256)     (512)
  98
  12
  6
  56
  402
  256
  512
  ayomide@Kazzywiz:~/binary_trees$
  ```

7. [In-order traversal](./7-binary_tree_inorder.c) : Write a function that goes through a binary tree using in-order traversal

- Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in
  ayomide@Kazzywiz:~/binary_trees$ ./7-in
  	.-------(098)-------.
  .--(012)--.         .--(402)--.
  (006)     (056)     (256)     (512)
  6
  12
  56
  98
  256
  402
  512
  ayomide@Kazzywiz:~/binary_trees$
  ```

8. [Post-order traversal](./8-binary_tree_postorder.c) : Write a function that goes through a binary tree using post-order traversal

- Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is NULL, do nothing

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post
  ayomide@Kazzywiz:~/binary_trees$ ./8-post
  	.-------(098)-------.
  .--(012)--.         .--(402)--.
  (006)     (056)     (256)     (512)
  6
  56
  12
  256
  512
  402
  98
  ayomide@Kazzywiz:~/binary_trees$
  ```

9. [Height](./9-binary_tree_height.c) : Write a function that measures the height of a binary tree

- Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the height.
- If `tree` is `NULL`, your function must return `0`

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height
  ayomide@Kazzywiz:~/binary_trees$ ./9-height
  .-------(098)--.
  (012)--.       (128)--.
  	(054)          (402)
  Height from 98: 2
  Height from 128: 1
  Height from 54: 0
  ayomide@Kazzywiz:~/binary_trees$
  ```

10. [Depth](./10-binary_tree_depth.c) : Write a function that measures the depth of a node in a binary tree

- Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
- Where `tree` is a pointer to the node to measure the depth
- If `tree` is NULL, your function must return `0`

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth
  ayomide@Kazzywiz:~/binary_trees$ ./10-depth
  .-------(098)--.
  (012)--.       (128)--.
  	(054)          (402)
  Depth of 98: 0
  Depth of 128: 1
  Depth of 54: 2
  ayomide@Kazzywiz:~/binary_trees$
  ```

11. [Size](./11-binary_tree_size.c) : Write a function that measures the size of a binary tree

- Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the size
- If `tree` is `NULL`, the function must return 0

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size
  ayomide@Kazzywiz:~/binary_trees$ ./11-size
  .-------(098)--.
  (012)--.       (128)--.
  	(054)          (402)
  Size of 98: 5
  Size of 128: 2
  Size of 54: 1
  ayomide@Kazzywiz:~/binary_trees$
  ```

12. [Leaves](./12-binary_tree_leaves.c) : Write a function that counts the leaves in a binary tree

- Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to count the number of leaves
- If `tree` is `NULL`, the function must return 0
- A `NULL` pointer is not a leaf

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 12-binary_tree_leaves.c 12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves
  ayomide@Kazzywiz:~/binary_trees$ ./12-leaves
  .-------(098)--.
  (012)--.       (128)--.
  	(054)          (402)
  Leaves in 98: 2
  Leaves in 128: 1
  Leaves in 54: 1
  ayomide@Kazzywiz:~/binary_trees$
  ```

13. [Nodes](./13-binary_tree_nodes.c) : Write a function that counts the nodes with at least 1 child in a binary tree

- Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to count the number of nodes
- If `tree` is `NULL`, the function must return 0
- A `NULL` pointer is not a node

  ```sh
  ayomide@Kazzywiz:~/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-nodes
  ayomide@Kazzywiz:~/binary_trees$ ./13-nodes
  .-------(098)--.
  (012)--.       (128)--.
  	(054)          (402)
  Nodes in 98: 3
  Nodes in 128: 1
  Nodes in 54: 0
  ayomide@Kazzywiz:~/binary_trees$
  ```

| Task               | File       |
| ------------------ | ---------- |
| 14. Balance factor | [SOON](./) |
| 15. Is full        | [SOON](./) |
| 16. Is perfect     | [SOON](./) |
| 17. Sibling        | [SOON](./) |
| 18. Uncle          | [SOON](./) |

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
