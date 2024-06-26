#include "AVLTree.h"
AVLTree::AVLTree(): root(nullptr){}
int AVLTree::height(Node *N)
{
    if (N != nullptr)
        return N->H;
    return 0;
}
int AVLTree::getBalance(Node *N)
{
    if (N != nullptr)
        return height(N->left) - height(N->right);
    return 0;
}

Node *AVLTree::rRotate(Node *N)
{
    Node *x = N->left;
    Node *y = x->right;
    x->right = N;
    N->left = y;
    N->H = std::fmax(height(N->left), height(N->right)) + 1;
    x->H = std::fmax(height(x->left), height(x->right)) + 1;
    return x;
}

Node *AVLTree::lRotate(Node *N)
{
    Node *x = N->right;
    Node *y = x->left;
    x->left = N;
    N->right = y;
    N->H = std::fmax(height(N->left), height(N->right)) + 1;
    x->H = std::fmax(height(x->left), height(x->right)) + 1;
    return x;
}
Node *AVLTree::insert(Node*N, int num)
{
    if(N == nullptr)
        return new Node(num);
    if(num < N->num)
        N->left = insert(N->left, num);
    else if(num > N->num)
        N->right = insert(N->right, num);
    else 
        return N;
    N->H = 1 + std::fmax(height(N->left), height(N->right));
    int balance = getBalance(N);
    if(balance > 1 && num < N->left->num)
        return rRotate(N);
    if(balance <-1 && num > N->right->num)
        return lRotate(N);
    if (balance >1 && num > N->left->num)
    {
        N->left = lRotate(N->left);
        return rRotate(N);
    }
    if(balance < -1 && num < N->right->num)
    {
        N->right = rRotate(N->right);
        return lRotate(N) ;
    }

    return N;
}


Node * AVLTree::search(Node* N, int num)
{
    if(N == nullptr || N->num == num)
        return N;
    if(num < N->num)
        return search(N->left, num);

    return search(N->right, num);
}










void AVLTree::preOrder(Node* N)
{
    if(N != nullptr)
    {
        std::cout<<N->num<<" ";
        preOrder(N->left);
        preOrder(N->right);
    }
}
void AVLTree::Order(Node* N)
{
    if(N != nullptr)
    {
        Order(N->left);
        std::cout<<N->num<<" ";
        Order(N->right);
    }
}
void AVLTree::posOrder(Node* N)
{
    if(N != nullptr)
    {
        posOrder(N->left);
        posOrder(N->right);
        std::cout<<N->num<<" ";
    }
}
