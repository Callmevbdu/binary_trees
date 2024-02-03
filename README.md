# C - Binary trees

In this project we studied:
- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Tests

* [tests](./tests): Folder of test files.

## Header File

* [binary_trees.h](./binary_trees.h): Header file encompassing declarations and
prototypes for all the types and functions developed within the project.

## Tasks

* **0. New node**
  * [0-binary_tree_node.c](./0-binary_tree_node.c): This C function generates a
  binary tree node with a specified parent and value.
  * Returns a pointer to the newly created node, or NULL if fails.

* **1. Insert left**
  * [1-binary_tree_insert_left.c](./1-binary_tree_insert_left.c): C function
  that adds a node as the left-child of another.
  * Returns a pointer to the new node, or NULL in case of failure.
  * If provided parent already has a left node, the new node assumes its
  position, and the previous left-child becomes the left-child of the newly
  added node.

* **2. Insert right**
  * [2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c): C function
  for inserting a node as the right-child of another.
  * Returns a pointer to the new node, or NULL if the operation fails.
  * If the specified parent already possesses a right node, the new node
  replaces it, and the former right-child becomes the right-child of the newly
  added node.

* **3. Delete**
  * [3-binary_tree_delete.c](./3-binary_tree_delete.c): C function which removes
  an entire binary tree.

* **4. Is leaf**
  * [4-binary_tree_is_leaf.c](./4-binary_tree_is_leaf.c): C function to verify
  whether a given node is a leaf.
  * Returns `1` if the node is a leaf and `0` otherwise.

* **5. Is root**
  * [5-binary_tree_is_root.c](./5-binary_tree_is_root.c): C function to check
  whether a given node is a root.
  * Returns `1` if the node is a root and `0` otherwise.

* **6. Pre-order traversal**
  * [6-binary_tree_preorder.c](./6-binary_tree_preorder.c): C function for
  traversing a tree using pre-order traversal.

* **7. In-order traversal**
  * [7-binary_tree_inorder.c](./7-binary_tree_inorder.c): C function for
  traversing a tree using in-order traversal.

* **8. Post-order traversal**
  * [8-binary_tree_postorder.c](./8-binary_tree_postorder.c): C function for
  traversing a tree using post-order traversal.

* **9. Height**
  * [9-binary_tree_height.c](./9-binary_tree_height.c): C function that
  calculates and returns the height of a binary tree.

* **10. Depth**
  * [10-binary_tree_depth.c](./10-binary_tree_depth.c): C function that returns
  the depth of a given node in a binary tree.

* **11. Size**
  * [11-binary_tree_size.c](./11-binary_tree_size.c): C function that calculate
  and returns the size of a binary tree.

* **12. Leaves**
  * [12-binary_tree_leaves.c](./12-binary_tree_leaves.c): C function that
  calculates and returns the number of leaves in a binary tree.

* **13. Nodes**
  * [13-binary_tree_nodes.c](./13-binary_tree_nodes.c): C function that returns
  the number of nodes in a binary tree with at least one child.

* **14. Balance factor**
  * [14-binary_tree_balance.c](./14-binary_tree_balance.c): C function that
  returns the balance factor of a binary tree.

* **15. Is full**
  * [15-binary_tree_is_full.c](./15-binary_tree_is_full.c): C function that
  checks if a binary tree is full.
  * Returns `1` if the tree is full and `0` otherwise.

* **16. Is perfect**
  * [16-binary_tree_is_perfect.c](./16-binary_tree_is_perfect.c): C function
  that checks if a binary tree is perfect.
  * Returns `1` if the tree is perfect and `0` otherwise.

* **17. Sibling**
  * [17-binary_tree_sibling.c](./17-binary_tree_sibling.c): C function that
  returns a pointer to the sibling of a given node in a binary tree.
  * Returns `NULL` if no sibling is found.

* **18. Uncle**
  * [18-binary_tree_uncle.c](./18-binary_tree_uncle.c): C function that returns
  a pointer to the uncle of a given node in a binary tree.
  * Returns `NULL` if no uncle is found.

## Authors
<details>
    <summary>Abdellatif Hmiche</summary>
    <ul>
    <li><a href="https://www.github.com/callmevbdu">Github</a></li>
    <li><a href="mailto:abdelt.2012@gmail.com">e-mail</a></li>
    </ul>
</details>
