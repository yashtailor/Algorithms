/* Ternary Search = O(log n) */

#include<iostream>
using namespace std;


template <typename T>
int ternary(T arr[],int l,int r, int x)
{
    if(r>=l)
    {
        int mid1 = l + (r-l)/3;
        int mid2 = r -  (r-l)/3;
        if(arr[mid1] == x)
            return mid1;
        if(arr[mid2] == x)
            return mid2;
        if(x<arr[mid1])
            return ternary(arr,l,mid1-1,x);
        else if(x>arr[mid2])
            return ternary(arr,mid2+1,r,x);
        else
            return ternary(arr,mid1+1,mid2-1,x);

    }
    return -1;
}


int main(){
	
	int size,*arr,item,output;
	
	cout<<"\n\tEnter Size of Array : ";
	cin>>size;
	arr = new int[size];	//allocate memory for 'size' elements
	
	if(arr == NULL){
		cout<<"\n\t\tMemory Error !";
	}
	
	else{
		cout<<"\n\tEnter "<<size<<" Elements : ";
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
		cout<<"\n\tEnter Element to Search : ";
		cin>>item;
		output = ternary(arr,0,size,item);
		if(output!=-1)
			cout<<"\n\tElement "<<item<<" Found at index "<<output;
		else
			cout<<"\n\tElement Not Found !";
	}
	delete[] arr;
	return 0;
}


