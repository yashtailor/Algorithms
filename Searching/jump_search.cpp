/* Jump Search = O(n ½) */

#include<iostream>
#include<math.h>
using namespace std;


template <typename T>
int jump_search(T arr[],int size,int item){
    int jump, step; 
    jump = step = sqrt(size);	//jump size
 
    while (arr[jump-1] < item){
        jump = jump + step;
        if ((jump - step) >= size)
            return -1;
    }
 
    int prev = jump - step;
    
    while (arr[prev] < item){
        prev++;     
        if (prev == jump)
            return -1;
    }
   
    //if item is found
    if (arr[prev] == item)
        return prev;
 
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
		output = jump_search(arr,size,item);
		if(output!=-1)
			cout<<"\n\tElement "<<item<<" Found at index "<<output;
		else
			cout<<"\n\tElement Not Found !";
	}
	delete[] arr;
	return 0;
}


