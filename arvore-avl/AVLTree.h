#ifndef AVLTREE_H
#define AVLTREE_H
#include "Node.h"
#include <cmath>
#include <iostream>

class AVLTree
{
public:
    AVLTree();

    int height(Node *);
    int getBalance(Node *);
    Node * insert(Node *, int);
    Node * remove (Node * , int);
    void preOrder(Node *);
    void Order(Node *);
    void posOrder(Node *);
    Node *root;
    Node * search(Node * ,int);
private:
Node * rRotate(Node *);
Node * lRotate(Node *);
};
#endif
