/* Counting Sort = O(n + k) */

#include<iostream>
using namespace std;


template <typename T>
void counting(T arr[],int size,int max){
	int count[50]={0},i,j;
     
    for(i=0;i<size;++i)
    	count[arr[i]]=count[arr[i]]+1;
      
    cout<<"\n\tArray After Counting() : ";
     
    for(i=0;i<=max;++i)
    	for(j=1;j<=count[i];++j)
        	cout<<i<<" ";
}


int main(){
	
	int size,*arr,max=0;
	
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
			 if(arr[i]>max)
      			max=arr[i];
		}
		counting(arr,size,max);
	}
	delete[] arr;
	return 0;
}


