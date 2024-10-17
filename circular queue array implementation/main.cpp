/******************************
 *                            *
 *    Author :  Mahmoud Saleh *
 *    Created:  __.__.2024    *
 *                            *
 ******************************
 *******************************************************
 *                                                     *
 *  ***-->           RE STUDENT             <--***     *
 *  ***--> 	      MALWARE ANALYST           <--***     *
 *  ***--> COMPUTER SCIENCE AND ENGINEERING <--***     *
 *                                                     *
 *******************************************************/
#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
using namespace std;
// circular queue using array implementation
#define circularQueueSize 5
int circularQueue[circularQueueSize], Front=-1, Rear=-1;

bool isEmpty();
bool isFull();
void enqueue(int value);
void dequeue();
int peek();
void display();

int32_t main()
{
    fast;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display(); // 1 2 3 4 5, now queue is full

    enqueue(6); // queue is full, it will not be added
    display();

    peek(); // get front -> 1
    dequeue(); // remove front -> 1
    display(); // 2 3 4 5

    peek(); // 2
    dequeue();
    display(); // 3 4 5

    enqueue(6); // 6 3 4 5
    peek(); // 3
    enqueue(7); // 6 7 3 4 5
    peek(); // 3
    display();
}

bool isEmpty()
{
    return (Front == -1 && Rear == -1);
}

bool isFull()
{
    return ( (Front == 0 && Rear == circularQueueSize-1) || (Front == Rear + 1));
}

void enqueue(int value)
{
    if(isFull())
        return;
    else
    {
        if(isEmpty())
        {
            Front = Rear = 0;
            circularQueue[Rear] = value;
        }
        else if(Rear == circularQueueSize-1)
        {
            Rear = 0;
            circularQueue[Rear] = value;
        }
        else
            circularQueue[++Rear] = value;
    }
}

void dequeue()
{
    if(isEmpty())
        return;
    else
    {
        if(Front == Rear) // queue has only one element
            Front = Rear = -1; // reset the queue
        else if(Front == circularQueueSize-1)
            Front = 0;
        else
            ++Front;
    }
}

int peek()
{
    if(isEmpty())
        return 0;
    else
        cout<<circularQueue[Front]<<endl;
}

void display()
{
    if(isEmpty())
        return;
    else
    {
        if(Front <= Rear)
        {
            for(int i=Front; i<=Rear; ++i)
                cout<<circularQueue[i]<<" ";
            // cout<<endl;
        }
        else
        {
            for(int i=Front; i<circularQueueSize; ++i)
                cout<<circularQueue[i]<<" ";
            for(int i=0; i<=Rear; ++i)
                cout<<circularQueue[i]<<" ";
            // cout<<endl;
        }
        cout<<endl;
    }
}
