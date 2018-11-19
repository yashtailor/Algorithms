/* fibonacci series(Dynamic Approach) = O(n) */

#include<iostream>
using std::cin;
using std::cout;

void fib(int n){
    int *f=new int[n];
    f[0]=0;
    f[1]=1;
    cout<<"\n\tFibonacci Series : ";
    cout<<f[0]<<" "<<f[1]<<" ";
    for(int i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
        cout<<f[i]<<" ";
    }
    delete[] f;
}
int main(){
    int n;
    cout<<"\nEnter Range : ";
    cin>>n;
    fib(n-1);
    return 0;
}