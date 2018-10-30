/* Quick Sort = O(n log n) */

#include<iostream>
using namespace std;


template <typename T>
void quick(T arr[],int f,int l){
	int left, right, t, pivot = 0;

    if (f < l) {
        pivot = f;	
        left = f;	
        right = l;	

        while (left < right) {
            while (arr[left] <= arr[pivot] && left < l)
                left++;
            while (arr[right] > arr[pivot])
                right--;
            if (left < right) {
                t = arr[left];
                arr[left] = arr[right];
                arr[right] = t;
            }
        }

        t = arr[pivot];
        arr[pivot] = arr[right];
        arr[right] = t;
        
        quick(arr,f, right - 1);
        quick(arr,right + 1, l);
    }
}


int main(){
	
	int size,*arr;
	
	cout<<"\n\tEnter Size of Array : ";
	cin>>size;
	arr = new int[size];	//allocate memory for 'size' elements
	
	if(arr == nullptr){
		cout<<"\n\t\tMemory Error !";
	}
	
	else{
		cout<<"\n\tEnter "<<size<<" Elements : ";
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
		quick(arr,0,size-1);
		cout<<"\n\tArray After Quick() : ";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
	}
	delete[] arr;
	return 0;
}


