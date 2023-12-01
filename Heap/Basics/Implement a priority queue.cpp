https://www.codingninjas.com/studio/problems/implement-a-priority-queue-_1743878?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


int pop(vector<int> &heap)
{
    if(heap.empty()) return -1;
    int ans = heap[0];
    int size = heap.size() - 1;
    heap[0] = heap[size];
    heap.pop_back();
    int n = heap.size() - 1, i = 0;
    while(i<n)
    {
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        if(left<=n && heap[largest]<heap[left])
        {
            largest = left;
        }
        if(right<=n && heap[largest]<heap[right])
        {
            largest = right;
        }
        if(largest == i) return ans;
        if(largest != i)
        {
            swap(heap[largest], heap[i]);
            i = largest;
        }
    }
    return ans;
}

// Code Snippet of the push function: 
//
//     void push(vector<int> &heap, int x)
//     {
//           heap.push_back(x);
//
//            // Posistion of the current inserted element.
//            int pos=heap.size()-1;
//
//            // Shifting the element up until it reaches the top most node if it is larger than its parent.
//            while(pos>0)
//            {
//                int parent = (pos-1)/2;
//                if(heap[pos] > heap[parent])
//                {
//                    swap(heap[parent],heap[pos]);
//                    pos=parent;
//               }
//              else
//              {
//                  // As parent is larger the element now is in its correct position. 
//                  break;
//              }
//          }
//      }
