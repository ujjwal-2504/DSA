#include<iostream>
using namespace std;

class MaxHeap {

  int *arr;
  int size; // Total elements currently present in heap
  int totalSize; // Total size of heap

  public:
    MaxHeap(int n) {

      arr = new int[n];
      size = 0;
      totalSize = n;
    }

    // Insert into the heap

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

      while(index > 0 && arr[(index-1)/2] < arr[index]) {

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

};

int main() {

  MaxHeap H1(6);

  H1.insert(10);
  H1.insert(5);
  H1.insert(13);

  H1.print();

  H1.insert(46);
  H1.insert(69);
  H1.insert(236);
  H1.insert(26);

  H1.print();


  return 0;
}