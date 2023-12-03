https://www.codingninjas.com/studio/problems/min-heap-implementation_5480527?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


class minHeap {
public:
    vector<int> heap;
    int size, capacity;
    // Constructor for the class.
    minHeap(int cap) {
        // Write your code here.
        heap.resize(cap);
        size = 0;
        capacity = cap;
    }

    void heapify(int i) {
        int smallest = i;
        int li = 2*i + 1, ri = 2*i + 2;
        if(li < size && heap[li] < heap[smallest]) {
            smallest = li;
        }

        if(ri < size && heap[ri] < heap[smallest]) {
            smallest = ri;
        }

        if(i != smallest) {
            swap(heap[i],heap[smallest]);
            heapify(smallest);
        }
    }

    // Implement the function to remove minimum element.
    int extractMinElement() {
        // Write you code here.
        if(size == 0) return -1;
        int ans = heap[0];
        swap(heap[0],heap[size-1]);
        size--;
        heapify(0);
        return ans;
    }

    // Implement the function to delete an element.
    void deleteElement(int ind) {
        // Write you code here.
        if(ind >= size) return ;
        swap(heap[ind],heap[size-1]);
        size--;
        heapify(ind);
    }

    // Implement the function to insert 'val' in the heap.
    void insert(int val) {
        // Write you code here.
        if(size == capacity) return ;
        heap[size] = val;
        size++;
        int ind = size-1;
        while(ind >= 0) {
            int parent = (ind-1)/2;
            if(heap[parent] > heap[ind]) {
                swap(heap[parent],heap[ind]);
                ind = parent;
            }else break;
        }
    }
};
