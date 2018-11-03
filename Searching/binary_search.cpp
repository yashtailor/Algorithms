/* Binary Search = O(log n) */

#include<iostream>
using namespace std;


template <typename T>
int binary(T arr[],int size,int item){
    int beg = 0,last = size - 1,mid;
    
	while(beg<=last){
    	
    	mid = (beg+last)/2;
    	
    	if(arr[mid]==item)
    		return mid;
		else if(item>arr[mid])
			beg = mid + 1;
		else
			last = mid - 1;
	}
	return -1;
}


int main(){
	
	int size,*arr,item,output;
	
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
		output = binary(arr,size,item);
		if(output!=-1)
			cout<<"\n\tElement "<<item<<" Found at index "<<output;
		else
			cout<<"\n\tElement Not Found !";
	}
	delete[] arr;
	return 0;
}


