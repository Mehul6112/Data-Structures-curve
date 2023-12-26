#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* right;
    Node* left;

    Node(int d) {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

Node* BST_build(Node*& root, int d) {
    if (root == NULL) {
        root = new Node(d);
    } else if (root->data < d) {
        root->right = BST_build(root->right, d);
    } else {
        root->left = BST_build(root->left, d);
    }
    return root;
}

void Take_Input(Node*& root) {
    int d;
    cout << "Enter Node data: " <<endl;
    cin >> d;
    while (d != -1) {
        BST_build(root, d);
        cin >> d;
    }
}

int Height(Node* root) {
    if (root == NULL) {
        return 0;
    } else {
        int l_height = Height(root->left);
        int r_height = Height(root->right);
        if (l_height > r_height) {
            return l_height+1 ;
        } else {
            return r_height+1 ;
        }
    }
}
void preorder(Node* root){
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main() {
    Node* root = NULL;
    Take_Input(root);
    cout << "Height is:" << Height(root) << endl;
    preorder(root);
    return 0;
}
