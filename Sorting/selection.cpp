/* Selection Sort = O(n^2) */

#include<iostream>
using namespace std;

template <typename T>
void selection(T arr[],int size){
	int small,pos,temp;
	
	for(int i=0;i<size-1;i++){
		small = arr[i];
		pos = i;
		for(int j=i+1;j<size;j++){
			if(arr[j] < small){
				small = arr[j];
				pos = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = temp;
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
		selection(arr,size);
		cout<<"\n\tArray After Selection() : ";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
	}
	delete[] arr;
	return 0;
}


