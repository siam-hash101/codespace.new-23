#include <iostream>

// Define the structure for a tree node
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    Node* root;

    // Private helper functions
    Node* insert(Node* root, int value) {
        if (root == nullptr) {
            return new Node(value);
        }
        
        if (value < root->data) {
            root->left = insert(root->left, value);
        } else if (value > root->data) {
            root->right = insert(root->right, value);
        }
        
        return root;
    }

    Node* search(Node* root, int value) {
        if (root == nullptr || root->data == value) {
            return root;
        }
        
        if (value < root->data) {
            return search(root->left, value);
        } else {
            return search(root->right, value);
        }
    }

    Node* findMin(Node* root) {
        while (root->left != nullptr) {
            root = root->left;
        }
        return root;
    }

    Node* remove(Node* root, int value) {
        if (root == nullptr) {
            return root;
        }

        if (value < root->data) {
            root->left = remove(root->left, value);
        } else if (value > root->data) {
            root->right = remove(root->right, value);
        } else {
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = remove(root->right, temp->data);
        }
        return root;
    }

    void inorderTraversal(Node* root) {
        if (root != nullptr) {
            inorderTraversal(root->left);
            std::cout << root->data << " ";
            inorderTraversal(root->right);
        }
    }

public:
    BinarySearchTree() : root(nullptr) {}

    // Public interface for the BST operations
    void insert(int value) {
        root = insert(root, value);
    }

    bool search(int value) {
        return search(root, value) != nullptr;
    }

    void remove(int value) {
        root = remove(root, value);
    }

    void inorderTraversal() {
        inorderTraversal(root);
        std::cout << std::endl;
    }
};

int main() {
    BinarySearchTree bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    std::cout << "Inorder traversal of the BST: ";
    bst.inorderTraversal();

    int value_to_search = 30;
    if (bst.search(value_to_search)) {
        std::cout << value_to_search << " is in the BST." << std::endl;
    } else {
        std::cout << value_to_search << " is not in the BST." << std::endl;
    }

    int value_to_remove = 30;
    bst.remove(value_to_remove);
    std::cout << "Inorder traversal after removing " << value_to_remove << ": ";
    bst.inorderTraversal();

    return 0;
}
