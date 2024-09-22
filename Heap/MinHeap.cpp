#include<iostream>
using namespace std;

class MinHeap {

  int *arr;
  int size; // Total elements currently present in heap
  int totalSize; // Total size of heap

  public:
    MinHeap(int n) {

      arr = new int[n];
      size = 0;
      totalSize = n;
    }

    // Insert into the heap
    // T.C -> O(n log n)

    void insert(int val) {

      // If heap size is available of not
      if(size == totalSize) {
        cout<<"Heap Overflow"<<endl;
        return;
      }

      arr[size] = val;
      int index = size;
      size++;

      // Compare it with parent

      while(index > 0 && arr[(index-1)/2] > arr[index]) {

        swap(arr[(index-1/2)], arr[index]);

        index = (index - 1) / 2;
      }

      cout<<arr[index]<<" is inserted into the heap"<<endl;
    }

    void print() {

      for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }

    // Delete operation
    // T.C. -> O(log n)
    void Delete() {

      // Heap doesn't exist
      if(!size) {
        cout<<"Heap Underflow"<<endl;
        return;
      }
      
      cout<<arr[0]<<" is deleted from the heap"<<endl;

      arr[0] = arr[size -1];

      size--;

      if(!size) return;

      Heapify(0);

    }

    void Heapify(int index) {
      
      int smallest = index;
      int left = 2 * index +1, right = 2 * index +2;
      
      // smallest stores index of smallest child.
      if(left < size && arr[left] < arr[smallest])
        smallest = left;
      if(right < size && arr[right] < arr[smallest])
        smallest = right;

      if(smallest != index) {
        swap(arr[index], arr[smallest]);
        Heapify(smallest);
      }

    }
};

int main() {

  MinHeap H1(6);

  H1.insert(10);
  H1.insert(5);
  H1.insert(13);

  H1.print();

  H1.insert(46);
  H1.insert(69);
  H1.insert(236);
  H1.insert(26);

  H1.print();

  H1.Delete();
  H1.Delete();
  H1.Delete();

  H1.print();


  return 0;
}

// 10 5 13 46 69 236