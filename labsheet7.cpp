#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

void display(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    display(root->left);
    display(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Binary Tree: ";
    display(root);
    return 0;
}


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    inorder(root);
    return 0;
}



#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    preorder(root);
    return 0;
}




#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    postorder(root);
    return 0;
}


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

void preorder(Node* r) {
    if (!r) return;
    cout << r->data << " ";
    preorder(r->left);
    preorder(r->right);
}

void postorder(Node* r) {
    if (!r) return;
    postorder(r->left);
    postorder(r->right);
    cout << r->data << " ";
}

int main() {
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    cout << "Inorder: ";
    inorder(root);
    cout << "\nPreorder: ";
    preorder(root);
    cout << "\nPostorder: ";
    postorder(root);
    return 0;
}



#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

Node* insert(Node* r, int x) {
    if (!r) return new Node(x);
    if (x < r->data) r->left = insert(r->left, x);
    else if (x > r->data) r->right = insert(r->right, x);
    return r;
}

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

int main() {
    Node* root = NULL;
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        root = insert(root, x);
    }

    cout << "BST: ";
    inorder(root);
    return 0;
}



#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

Node* insert(Node* r, int x) {
    if (!r) return new Node(x);
    if (x < r->data) r->left = insert(r->left, x);
    else if (x > r->data) r->right = insert(r->right, x);
    return r;
}

bool search(Node* r, int key) {
    if (!r) return false;
    if (r->data == key) return true;
    if (key < r->data) return search(r->left, key);
    return search(r->right, key);
}

int main() {
    Node* root = NULL;
    root = insert(root, 40);
    root = insert(root, 20);
    root = insert(root, 60);

    int key;
    cout << "Enter key: ";
    cin >> key;

    if (search(root, key)) cout << "Found";
    else cout << "Not Found";
    return 0;
}




#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

Node* insert(Node* r, int x) {
    if (!r) return new Node(x);
    if (x < r->data) r->left = insert(r->left, x);
    else if (x > r->data) r->right = insert(r->right, x);
    return r;
}

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

int main() {
    Node* root = NULL;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        root = insert(root, x);
    }

    cout << "Inorder: ";
    inorder(root);
    return 0;
}



#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

Node* insert(Node* r, int x) {
    if (!r) return new Node(x);
    if (x < r->data) r->left = insert(r->left, x);
    else if (x > r->data) r->right = insert(r->right, x);
    return r;
}

Node* del(Node* r, int key) {
    if (!r) return NULL;
    if (key < r->data) r->left = del(r->left, key);
    else if (key > r->data) r->right = del(r->right, key);
    else if (!r->left && !r->right) {
        delete r;
        return NULL;
    }
    return r;
}

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

int main() {
    Node* root = NULL;
    for (int x : {40, 20, 60, 10, 30})
        root = insert(root, x);

    root = del(root, 10);
    inorder(root);
    return 0;
}




#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

Node* insert(Node* r, int x) {
    if (!r) return new Node(x);
    if (x < r->data) r->left = insert(r->left, x);
    else if (x > r->data) r->right = insert(r->right, x);
    return r;
}

Node* del(Node* r, int key) {
    if (!r) return NULL;
    if (key < r->data) r->left = del(r->left, key);
    else if (key > r->data) r->right = del(r->right, key);
    else {
        if (!r->left || !r->right) {
            Node* child = r->left ? r->left : r->right;
            delete r;
            return child;
        }
    }
    return r;
}

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

int main() {
    Node* root = NULL;
    for (int x : {40, 20, 60, 10})
        root = insert(root, x);

    root = del(root, 20);
    inorder(root);
    return 0;
}




#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

Node* insert(Node* r, int x) {
    if (!r) return new Node(x);
    if (x < r->data) r->left = insert(r->left, x);
    else if (x > r->data) r->right = insert(r->right, x);
    return r;
}

Node* minimum(Node* r) {
    while (r && r->left) r = r->left;
    return r;
}

Node* del(Node* r, int key) {
    if (!r) return NULL;
    if (key < r->data) r->left = del(r->left, key);
    else if (key > r->data) r->right = del(r->right, key);
    else {
        if (!r->left) {
            Node* t = r->right;
            delete r;
            return t;
        }
        if (!r->right) {
            Node* t = r->left;
            delete r;
            return t;
        }
        Node* t = minimum(r->right);
        r->data = t->data;
        r->right = del(r->right, t->data);
    }
    return r;
}

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

int main() {
    Node* root = NULL;
    for (int x : {40, 20, 60, 10, 30, 50, 70})
        root = insert(root, x);

    root = del(root, 40);
    inorder(root);
    return 0;
}


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

int height(Node* r) {
    if (!r) return 0;
    int l = height(r->left);
    int rt = height(r->right);
    return 1 + max(l, rt);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << "Height: " << height(root);
    return 0;
}


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

int count(Node* r) {
    if (!r) return 0;
    return 1 + count(r->left) + count(r->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << "Total Nodes: " << count(root);
    return 0;
}



#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

int leaves(Node* r) {
    if (!r) return 0;
    if (!r->left && !r->right) return 1;
    return leaves(r->left) + leaves(r->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << "Leaf Nodes: " << leaves(root);
    return 0;
}



#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

Node* insert(Node* r, int x) {
    if (!r) return new Node(x);
    if (x < r->data) r->left = insert(r->left, x);
    else if (x > r->data) r->right = insert(r->right, x);
    return r;
}

bool search(Node* r, int x) {
    if (!r) return false;
    if (r->data == x) return true;
    return x < r->data ? search(r->left, x)
                       : search(r->right, x);
}

void inorder(Node* r) {
    if (!r) return;
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}

void preorder(Node* r) {
    if (!r) return;
    cout << r->data << " ";
    preorder(r->left);
    preorder(r->right);
}

void postorder(Node* r) {
    if (!r) return;
    postorder(r->left);
    postorder(r->right);
    cout << r->data << " ";
}

Node* del(Node* r, int x) {
    if (!r) return NULL;

    if (x < r->data) r->left = del(r->left, x);
    else if (x > r->data) r->right = del(r->right, x);
    else {
        if (!r->left || !r->right) {
            Node* t = r->left ? r->left : r->right;
            delete r;
            return t;
        }

        Node* t = r->right;
        while (t->left) t = t->left;

        r->data = t->data;
        r->right = del(r->right, t->data);
    }
    return r;
}

int height(Node* r) {
    if (!r) return 0;
    return 1 + max(height(r->left), height(r->right));
}

int count(Node* r) {
    if (!r) return 0;
    return 1 + count(r->left) + count(r->right);
}

int main() {
    Node* root = NULL;
    int ch, x;

    do {
        cout << "\n1.Insert  2.Search  3.Inorder";
        cout << "\n4.Preorder  5.Postorder  6.Delete";
        cout << "\n7.Height  8.Count Nodes  9.Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "Enter value: ";
            cin >> x;
            root = insert(root, x);
            break;

        case 2:
            cout << "Enter key: ";
            cin >> x;
            cout << (search(root, x) ? "Found" : "Not Found");
            break;

        case 3:
            inorder(root);
            break;

        case 4:
            preorder(root);
            break;

        case 5:
            postorder(root);
            break;

        case 6:
            cout << "Enter value to delete: ";
            cin >> x;
            root = del(root, x);
            break;

        case 7:
            cout << "Height: " << height(root);
            break;

        case 8:
            cout << "Total Nodes: " << count(root);
            break;

        case 9:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice";
        }
    } while (ch != 9);

    return 0;
}


