#include<iostream>
using namespace std;

void maxHeapify(int *arr, int index, int size) {

  int largest = index;
  int left = 2 * index +1;
  int right = 2 * index +2;

  if(left < size && arr[largest] < arr[left]) {
    largest = left;
  }
  if(right < size && arr[largest] < arr[right]) {
    largest = right;
  }

  if(largest != index) {
    swap(arr[largest], arr[index]);
    maxHeapify(arr, largest, size);
  }

}

// Max Heap
void BuildMaxHeap(int *arr, int size) {

  // Step down
  for(int i = size/2 -1; i >= 0; i--) {
    maxHeapify(arr, i, size);
  }
}

void printHeap(int *arr, int size) {
  for(int i = 0; i < size; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void HeapSort(int *arr, int size) {

  BuildMaxHeap(arr, size);
  
  for(int i = size -1; i > 0; i--) {

    swap(arr[0], arr[i]);
    maxHeapify(arr, 0, i);
  }
}

int main() {

  int arr[] = {10, 3, 38, 45, 25, 57, 24, 4, 6, 85};
  printHeap(arr, 10);
    
  HeapSort(arr, 10);
  printHeap(arr, 10);

    return 0;
}