#define DEBUG
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "include/GenTree.h"
#include "include/GTNode.h"

using namespace std;

int main()
{
    srand((unsigned)time(0));
    GTNode<int>* node =new GTNode<int>(rand()%100);
    int level = 2+rand()%5;
    cout<<"height:"<<level+1<<endl;
    for(int j=0;j<level;j++)
    {
        cout<<"level"<<j+1<<endl;
        node->insertFirst(new GTNode<int>(rand()%100,node));
        int childNum=rand()%4;
        for(int k=0;k<childNum;k++)
        {
            node->insertNext(new GTNode<int>(rand()%100,node));
        }
        cout<<"childNum: "<<childNum+1<<endl;
        if(rand()%2 == 0)
            node = node->leftmostChild();
        else
        {
             #ifdef DEBUG
            cout<<"choose"<<endl;
            #endif
            GTNode<int>* temp=node->leftmostChild();
            int which = rand()%(childNum+1);
            cout<<"which:"<<which<<endl;
            for(int i=0;i<which;i++)
                temp = temp->rightSibling();
            node = temp;
        }
        #ifdef DEBUG
        cout<<"debug"<<endl;
        #endif
    }
    #ifdef DEBUG
    cout<<"out"<<endl;
    #endif
    GenTree<int>* tree =new GenTree<int>(node);
    cout<<"count:"<<tree->count()<<endl;

    return 0;
}
