#include "AVLTree.h"
#include "Tree.h"
#include <iostream>
#include <cstdlib>
#include <chrono>

int main()
{
    AVLTree treeAVL;
    Tree tree;
    int max = 1000;

    for (int i = 0; i < max; i++)
    {
        treeAVL.root = treeAVL.insert(treeAVL.root, i + 1);
        tree.root = tree.insert(tree.root, i + 1);
    }

    auto start1 = std::chrono::high_resolution_clock::now();
    Node *resultado1 = treeAVL.search(treeAVL.root, max);
    auto end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration1 = end1 - start1;

    std::cout << "tempo de procura da arvore avl pelo o ultimo numero adicionado " << duration1.count() << " segundos" << std::endl;

    auto start2 = std::chrono::high_resolution_clock::now();
    Node *resultado2 = tree.search(tree.root, max);
    auto end2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration2 = end2 - start2;
    std::cout << "tempo de procura da arvore normal pelo o ultimo numero adicionado " << duration2.count() << " segundos";
}