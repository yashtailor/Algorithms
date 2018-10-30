/* Bubble Sort = O(n^2) */

#include<iostream>
using namespace std;

template <typename T>
void bubble(T arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j] > arr[j+1]){
				int swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
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
		bubble(arr,size);
		cout<<"\n\tArray After Bubble : ";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
	}
	delete[] arr;
	return 0;
}

