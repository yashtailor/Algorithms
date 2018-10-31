/* Merge Sort = O(log n) */

#include<iostream>
using namespace std;

template <typename T>
void merge(T *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
 
	// Merge the two parts into temp[].
	while (i <= mid && j <= high){
		if (a[i] < a[j]){
			temp[k] = a[i];
			k++;
			i++;
		}
		else{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid){
		temp[k] = a[i];
		k++;
		i++;
	}
 
	// Insert all the remaining values from j to high into temp[].
	while (j <= high){
		temp[k] = a[j];
		k++;
		j++;
	}
	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++){
		a[i] = temp[i-low];
	}
}

template <typename T>
void mergesort(T *a, int low, int high){
	int mid;
	if (low < high){
		mid=(low+high)/2;
		// Split the data into two half.
		mergesort(a, low, mid);
		mergesort(a, mid+1, high);
 
		// Merge them to get sorted output.
		merge(a, low, high, mid);
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
		mergesort(arr,0,size-1);
		cout<<"\n\tArray After MergrSort() : ";
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
	}
	delete[] arr;
	return 0;
}


