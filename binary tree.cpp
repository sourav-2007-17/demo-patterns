#include <iostream>
using namespace std;

class BinaryTree {

public:

    // Node class
    class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
    };

    // Index for building tree
    int idx = -1;

    // Build Binary Tree
    Node* buildTree(int nodes[]) {

        idx++;

        // -1 means no node
        if (nodes[idx] == -1) {
            return nullptr;
        }

        // Create new node
        Node* newNode = new Node(nodes[idx]);

        // Build left subtree
        newNode->left = buildTree(nodes);

        // Build right subtree
        newNode->right = buildTree(nodes);

        return newNode;
    }
};

int main() {

    int nodes[] = {
        1, 2, 4, -1, -1, 5, -1, -1,
        3, -1, 6, -1, -1
    };

    BinaryTree tree;

    BinaryTree::Node* root = tree.buildTree(nodes);

    cout << "Root: " << root->data << endl;

    return 0;
}
