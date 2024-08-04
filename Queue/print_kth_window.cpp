#include<iostream>
#include<queue>
using namespace std;

void display(queue<int> q) {

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
}

void print_Kth_Window(int arr[], int n, int k){

    queue<int> q;

    for(int i = 0; i < k; i++){
        q.push(arr[i]);
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = k; i < n; i++){

        q.push(arr[i]);
        q.pop();
        display(q);
    }
}

int main() {

    

    int arr1[] = {3, 4, 5, 6, 7, 8};
    int arr2[] = {56, 78, 18, 8};
    int arr3[] = {10, 20, 30, 40, 50, 60};
    int arr4[] = {9,3};
    int arr5[] = {7, 4, 10, 502, 583, 309, 89, 17, 39, 47};

    print_Kth_Window(arr1, 6, 3);
    cout<<endl;
    print_Kth_Window(arr2, 4, 2);
    cout<<endl;
    print_Kth_Window(arr3, 6, 4);
    cout<<endl;
    print_Kth_Window(arr4, 2, 1);
    cout<<endl;
    print_Kth_Window(arr5, 10, 5);
    cout<<endl;


    

    return 0;
}