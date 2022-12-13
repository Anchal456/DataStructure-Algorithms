#include<iostream>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
            
        }
    }
    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }

};



void HeapifyMin(int arr[], int n, int i){
    int smallest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left<n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right<n && arr[smallest]>arr[right]){
        smallest = right;
    }

    if(smallest != i){
        swap(arr[smallest],arr[i]);
        HeapifyMin(arr,n, smallest);
    }
}

int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for(int i =n/2-1; i>=0; i--){
        
        HeapifyMin(arr,n,i);
    }
    cout<<"printing the array now"<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}