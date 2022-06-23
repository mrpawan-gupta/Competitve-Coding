class MyCircularQueue {
public:
    int length, start, end,size;
    vector<int> queue;
    MyCircularQueue(int k) {
        length = k;
        queue = vector<int>(k);
        start = size = 0;
        end = -1; 
    }
    bool enQueue(int value) {
        if(!isFull()) {
            if(end == length-1) {
                end = 0;
            }
            else end++;
            queue[end] = value;
            size++;
            return true;
        }
        return false;
    }
    bool deQueue() {
         if(!isEmpty()) {
            if(start == length-1) {
                start = 0;
            }
            else start++;
            size--;
            return true;
        }
        return false;
        
    }
    int Front() {
        if(isEmpty())
            return -1;
        return queue[start];
    }
    int Rear() {
        if(isEmpty()) return -1;
        return queue[end];
    }
    bool isEmpty() {
    if(size==0)
            return true;
        return false;    
    }
    bool isFull() {
        if(length == size)
            return true;
        return false;  
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */