#include "Tree.h"

Tree::Tree(): root(nullptr){}

int Tree::height(Node *N)
{
    if (N != nullptr)
        return N->H;
    return 0;
}

Node *Tree::insert(Node*N, int num)
{
    if(N == nullptr)
        return new Node(num);
    if(num < N->num)
        N->left = insert(N->left, num);
    else if(num > N->num)
        N->right = insert(N->right, num);

    return N;

}
Node * Tree::search(Node* N, int num)
{
    if(N == nullptr || N->num == num)
        return N;
    if(num < N->num)
        return search(N->left, num);

    return search(N->right, num);
}
void Tree::preOrder(Node* N)
{
    if(N != nullptr)
    {
        std::cout<<N->num<<" ";
        preOrder(N->left);
        preOrder(N->right);
    }
}
void Tree::Order(Node* N)
{
    if(N != nullptr)
    {
        Order(N->left);
        std::cout<<N->num<<" ";
        Order(N->right);
    }
}
void Tree::posOrder(Node* N)
{
    if(N != nullptr)
    {
        posOrder(N->left);
        posOrder(N->right);
        std::cout<<N->num<<" ";
    }
}
