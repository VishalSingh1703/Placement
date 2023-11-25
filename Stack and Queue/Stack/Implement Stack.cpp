https://www.codingninjas.com/studio/problems/stack-implementation-using-array_3210209?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=DISCUSS

class Stack {

 

public:

int size;

int *a;

int topm;

Stack(int capacity) {

// Write your code here.

this->size=capacity;

a=new int [size];

topm=-1;

}

 

void push(int num) {

// Write your code here.

// Write your code here.

 

if(!isFull()){

 

topm++;

 

a[topm] = num;

 

}

 

else return;

}

 

int pop() {

if(!isEmpty()){

 

int x = a[topm];

 

topm--;

 

return x;

 

}

 

else return -1;

}

 

int top() {

// Write your code here.

if(topm==-1)return -1;

else return a[topm];

}

 

int isEmpty() {

// Write your code here.

if(topm == -1)return 1;

 

else return 0;

}

 

int isFull() {

// Write your code here.

if(topm==size-1)return 1;

else return 0;

}

 

};
