#include "bst.hpp"
#include "bst.cpp"

int main ()
{
    BST tree,tree1;
    tree.insert(5);
    tree.insert(6);
    tree.insert(4);
    tree.insert(8);
     
    tree.insert(20935);
    tree1.insert(1);
    tree1.insert(100);
    tree1.insert(1123);
    tree1.insert(1123);
    tree1.insert(133);
    tree1.insert(1345);
    tree1.insert(111);
    

    //tree.afisare();

    BST newtree = tree1 + tree;
    //tree=newtree;
    //newtree.afisare();
    auto s = BST::inordine(newtree);
    for (auto x : s) std::cout << x << ' ';
}
