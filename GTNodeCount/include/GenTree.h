#ifndef GENTREE_H
#define GENTREE_H
#include "GTNode.h"
#include <iostream>
using namespace std;

template <typename E> class GenTree
{
    public:
        GenTree(){treeRoot = NULL;}
        GenTree(GTNode<E>* node){
            while(node->parent()!=NULL)
                node = node->parent();
            treeRoot = node;
        }

        virtual ~GenTree(){}
        GTNode<E>* root(){return treeRoot;}

        int count(){
            return countNode(treeRoot);
        }


    private:
        GTNode<E>* treeRoot;

        int countNode(GTNode<E>* node)
        {
            if(node == NULL) return 0;
            int sum=0;
            for(GTNode<E>* temp=node->leftmostChild();temp!=NULL;temp=temp->rightSibling())
                sum+=countNode(temp);
            return 1+sum;
        }

};

#endif // GENTREE_H
