/* Interpolation Search = O(log log n) */

#include<iostream>
using namespace std;


template <typename T>
int interpolate(T arr[],int size,int item){
    int low = 0, high =size - 1,pos;
    
	while(low<=high && item >=arr[low] && item <= arr[high]){
    	
    	pos = low + (((double)(high-low) / (arr[high]-arr[low]))*(item - arr[low])); 
    	
    	if(arr[pos]==item)
    		return pos;
		else if(item>arr[pos])
			low = pos + 1;
		else
			high = pos - 1;
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
		output = interpolate(arr,size,item);
		if(output!=-1)
			cout<<"\n\tElement "<<item<<" Found at index "<<output;
		else
			cout<<"\n\tElement Not Found !";
	}
	delete[] arr;
	return 0;
}


