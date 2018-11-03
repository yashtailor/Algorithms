/* Linear Search = O(n) */

#include<iostream>
using namespace std;


template <typename T>
void linear(T arr[],int size,int item){
    for(int i=0;i<size;++i){
    	if(arr[i]==item){
    		cout<<"\n\tElement "<<item<<" Found at index "<<i;
    		break;
		}
	}
	cout<<"\n\tElement Not Found !";
}


int main(){
	
	int size,*arr,item;
	
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
		cout<<"\n\tEnter Element to Search : ";
		cin>>item;
		linear(arr,size,item);
	}
	delete[] arr;
	return 0;
}


