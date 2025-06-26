#include <iostream>
using namespace std;

class Node
{
    public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the node class
    Node()
    {
        leftchild = nullptr; // initialize left child to null
        rightchild = nullptr; // initialize right child to null

    }
};

class BinaryTree
{
     public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // initializing ROOT to null
    }

    void insert()
    {
         int x;
        cout << "Masukkan nilai: ";
        cin >> x;

        // step 1: Allocate memory for the new node
        Node *newNode = new Node();

        // step 2: Assign value to the data field of new node 
        newNode->info = x;

        // step 3: Make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // step 4: locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentnode = nullptr;
        search(x, parent, currentnode);

        // step 5: If parent is NULL (tree is empty)
        if (parent == nullptr)
        {
            // 5a. Mark the new node as ROOT
            ROOT = newNode;

            //5b. EXIT
            return;

        }

         // step 6: If the value in the data field of new node is less than that of parent
        if (x < parent->info)
        {
            // step 6a. Make the left child of parent point to the new node
            parent->leftchild = newNode;
            

            // 6B. EXIT
            return;
        }

        //step 7: if the value in the data field of the new node is greater than that of the parent
        else if(x > parent->info){
        //7a: make the right child of the parent point to the new node
        parent->rightChild = newNode;

        }

    }
}