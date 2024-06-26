#ifndef TREE_H
#define TREE_H
#include "Node.h"
#include<iostream>
class Tree
{

public:
    Tree();
    int height(Node *);
    Node * insert(Node*, int);
    Node * root;
    Node * search(Node * , int);

    void preOrder(Node *);
    void Order(Node *);
    void posOrder(Node *);

};
#endif