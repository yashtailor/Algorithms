/* Insertion Sort = O(n^2) */

#include<iostream>
using namespace std;

template <typename T>
void insertion(T arr[],int size){
	int temp,j;
	
	for(int i=1;i<=size-1;i++){
        temp=arr[i];
        j=i-1;
        
		while((temp<arr[j])&&(j>=0)){
            arr[j+1]=arr[j];    //moves element forward
            j=j-1;
        }
        arr[j+1]=temp;    //insert element in proper place*/
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
		insertion(arr,size);
		cout<<"\n\tArray After Bubble : ";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
	}
	delete[] arr;
	return 0;
}


