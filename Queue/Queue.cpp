//
// Queue.cpp
// Queue
//
// Created by 郑佳兴 on 13-10-30
// 
#include "Queue.h"
Queue::Queue(int size)
{
	elems=new ElemType[size];
	sizeOfElems=0;
	sizeOfAllocatedMemory=size;
}
Queue::Queue(const Queue&queue)
{	  
    elems=new ElemType[queue.sizeOfAllocatedMemory];
    sizeOfElems=queue.sizeOfElems;
    sizeOfAllocatedMemory=queue.sizeOfAllocatedMemory;
    for(int i=0;i<queue.sizeOfElems;i++)
    {
         elems[i]=queue.elems[i];
    }
} 
Queue::~Queue()
{
	delete []elems;
}
bool Queue::queueEmpty() 
{
	if(sizeOfElems=0)
		return true;
}
bool Queue::queueFull() 
{
	if(sizeOfElems=sizeOfAllocatedMemory)
		return true;
}
void Queue::queueInsert(ElemType e)
{
	if(sizeOfElems!=sizeOfAllocatedMemory)
		elems[sizeOfElems]=e;
}
void Queue::queueDelete()
{
	if(sizeOfElems!=0)
	{
		for(int i=0;i<sizeOfElems-1;i++)
			elems[i]=elems[i+1];
		sizeOfElems=sizeOfElems-1;
	}
}
ElemType Queue::queueFront()
{
	if(sizeOfElems!=0)
		return elems[0];
	else
		throw runtime_error("The queue is empty!");
}
ElemType Queue::queueRear()
{
	if(sizeOfElems!=0)
		return elems[sizeOfElems-1];
	else
		throw runtime_error("The queue is empty!");
}
void Queue::queueClear()
{
	sizeOfElems=0;
}






