#ifndef GTNODE_H
#define GTNODE_H
#include"LList.h"
template <typename E> class GTNode{
private:
	E val;
	GTNode<E>* parentNode;
public:
    LList<GTNode<E>* > list;
	GTNode(){parentNode = NULL;}
	GTNode(E val){this->val = val;parentNode = NULL;}
	GTNode(E val,GTNode* parentNode){this->val = val;this->parentNode = parentNode;}
	E value(){return val;}
	GTNode* parent(){return parentNode;}
	GTNode* leftmostChild(){
	    if(list.length()==0)
            return NULL;
	    list.moveToStart();
	    return list.getValue();
    }
	GTNode* rightSibling(){
	    parentNode->list.moveToStart();
	    int i;
	    for(i=0;i<parentNode->list.length()-1;i++)
	    {
	        if(parentNode->list.getValue() == this)
                break;
            parentNode->list.next();
	    }
	    if(i == parentNode->list.length()-1)
            return NULL;
        parentNode->list.next();
        return parentNode->list.getValue();
	}
    void setValue(E& val){this.val == val;}
    void insertFirst(GTNode<E>* node){list.moveToStart();list.insert(node);}
    void insertNext(GTNode<E>* node){list.append(node);}
    void removeFirst(){list.moveToStart();list.remove();}
    void removeNext(){list.moveToStart();list.next();list.remove();}
};

#endif
