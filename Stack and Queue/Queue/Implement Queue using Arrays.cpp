https://www.codingninjas.com/studio/problems/implement-queue-using-arrays_8390825?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

class Queue {

	int front, rear, size;
	vector<int> arr;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		if(rear == arr.size()) return;
		else
		{
			arr[rear++] = e;
		}
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		int element = -1;
		if(front == rear) return element;
		else
		{
			element = arr[front];
			front++;
		}
		return element;
	}
};
