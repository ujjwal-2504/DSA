#include<iostream>
using namespace std;

// Using step down method
// Time Complexity = O(n).
// Space Complexity = O(log n).

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

void minHeapify(int *arr, int index, int size) {

  int smallest = index;
  int left = 2 * index +1;
  int right = 2 * index +2;

  if(left < size && arr[smallest] > arr[left]) {
    smallest = left;
  }
  if(right < size && arr[smallest] > arr[right]) {
    smallest = right;
  }

  if(smallest != index) {
    swap(arr[smallest], arr[index]);
    minHeapify(arr, smallest, size);
  }

}

// Max Heap
void BuildMaxHeap(int *arr, int size) {

  // Step down
  for(int i = size/2 -1; i >= 0; i--) {
    maxHeapify(arr, i, size);
  }
}

// Min Heap
void BuildMinHeap(int *arr, int size) {

  // Step down
  for(int i = size/2 -1; i >= 0; i--) {
    minHeapify(arr, i, size);
  }
}

void printHeap(int *arr, int size) {
  for(int i = 0; i < size; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main() {

  int arr1[] = {10, 3, 38, 45, 25, 57, 24, 4, 6, 85};
  int arr2[] = {10, 3, 38, 45, 25, 57, 24, 4, 6, 85};
  
  BuildMaxHeap(arr1, 10);
  printHeap(arr1, 10);

  BuildMinHeap(arr2, 10);
  printHeap(arr2, 10);

  return 0;
}