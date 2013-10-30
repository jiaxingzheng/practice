//
//Queue.h
//Queue
//
//Created by 郑佳兴 on 13-10-30
//

#include<iostream>
#include<stdexcept>
using namespace std;
typedef int ElemType;
class Queue
{private:
	ElemType *elems;
	int sizeOfElems;
	int sizeOfAllocatedMemory;
public:
	Queue(int size=5);
	Queue(const Queue&queue);
	~Queue();
	bool queueEmpty();//If the queue is empty,return true.
	bool queueFull();//If the queue is full,return true.
	void queueInsert(ElemType e);//Insert an elem into the queue.
	void queueDelete();//Delete the elem in the front of the queue.
	ElemType queueFront();//Return the elem in the front of the queue.
	ElemType queueRear();//Retuen the elem in the rear of the queue.
	void queueClear();//Make the queue empty.
};



	
