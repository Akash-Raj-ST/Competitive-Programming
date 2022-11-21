//https://leetcode.com/problems/design-circular-deque/description/

class MyCircularDeque {
public:
    int arr[1001];
    int start=-1;
    int end=-1;
    int size=0;
    int capacity;

    MyCircularDeque(int k) {
        capacity = k;
    }
    
    bool insertFront(int value) {
        if(size==capacity) return false;
        
        size++;

        if(start==-1){   
            start = 0;
            end = 0;
        }
        else if(start==0) start = capacity-1;
        else   start--;

        arr[start] = value;
        cout<<start<<'\n';
        return true;
    }
    
    bool insertLast(int value) {
        if(size==capacity)  return false;

        size++;

        if(start==-1){   
            start = 0;
            end = 0;
        }else{
            end++;
            if(end==capacity) end=0;
        }

        arr[end] = value;
        cout<<end<<'\n';
        return true;
    }
    
    bool deleteFront() {
        if(size==0) return false;
        
        size--;

        if(start==end){
            start=-1;
            end=-1;
            return true;
        }

        start++;

        if(start==capacity){
            start=0;
        }

        return true;
    }
    
    bool deleteLast() {
        if(size==0) return false;

        size--;

        if(start==end){
            start=-1;
            end=-1;
            return true;
        }

        end--;

        if(end==-1){
            end = capacity-1;
        }


        return true;
    }
    
    int getFront() {
        if(size==0) return -1;
        return arr[start];
    }
    
    int getRear() {
        if(size==0) return -1;
        return arr[end];
    }
    
    bool isEmpty() {
        if(size==0) return true;
        return false;
    }
    
    bool isFull() {
        if(size==capacity) return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */