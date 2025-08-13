PROGRAM :
#include <stdio.h>
#include <stdlib.h>
// Define the structure for a tree node
struct Node {
 int data;
 struct Node* left;
 struct Node* right;
};
// Function to create a new node with the given data
struct Node* createNode(int data) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = data;
 newNode->left = NULL;
 newNode->right = NULL;
 return newNode;

// Inorder Traversal (Left, Root, Right)
void inorderTraversal(struct Node* root) {
 if (root != NULL) {
 inorderTraversal(root->left);
 printf("%d ", root->data);
 inorderTraversal(root->right);
 }
}
// Preorder Traversal (Root, Left, Right)
void preorderTraversal(struct Node* root) {
 if (root != NULL) {
 printf("%d ", root->data);
 preorderTraversal(root->left);
 preorderTraversal(root->right);
 }
}
// Postorder Traversal (Left, Right, Root)
void postorderTraversal(struct Node* root) {
 if (root != NULL) {
 postorderTraversal(root->left);
 postorderTraversal(root->right);
 printf("%d ", root->data);
 }
}
// Driver function to test the tree traversal functions
int main() {
 // Create the root node and other nodes
 struct Node* root = createNode(1);
 root->left = createNode(2);
 root->right = createNode(3);
 root->left->left = createNode(4);
 root->left->right = createNode(5);
 // Perform and display each traversal
 printf("Inorder Traversal: ");
 inorderTraversal(root);
 printf("\n");
 printf("Preorder Traversal: ");
 preorderTraversal(root);
 printf("\n");
 printf("Postorder Traversal: ");
 postorderTraversal(root);
 printf("\n");
 return 0;
}
