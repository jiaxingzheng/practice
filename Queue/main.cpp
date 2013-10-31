//
//  main.cpp
//  Queue
//
//  Created by  郑佳兴 on 13-10-30.
//  Copyright (c) 2013年  郑佳兴. All rights reserved.
//
#include "Queue.h"


int main(int argc, const char * argv[])
{
    try
	{
		Queue q1(5);
		//Insert elements into the queue of q1
		q1.queueInsert(10);
		q1.queueInsert(20);
		q1.queueInsert(30);
		q1.queueInsert(40);
		q1.queueInsert(50);
		//output the elem in the rear of q1
      	cout<<"q1:"<<q1.queueRear()<<endl;


		Queue q2(q1);
		//remove an element in the front of the queue of q2
		q2.queueDelete();
		//output the elem in the front of q1
		cout<<"q2:"<<q2.queueFront()<<endl;
		//clear q2
		q2.queueClear();
		//make error
		q2.queueDelete();
		
	}
	catch (runtime_error& e)
	{
		cout<<"Exception："<<e.what()<<endl;
	}
    return 0;
}
//the run result of the program:
//q1:50
//q2:20
//Exception：The queue is empty!
//
