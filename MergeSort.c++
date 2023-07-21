#include<iostream>
using namespace std;
void merge (int* ,int ,int* ,int, int* ,int);
void mergeSort (int* ,int);
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0;i < n;i++){
     cin>>arr[i];
}
mergeSort (arr ,n);
for(int i:arr){
   cout << i <<" ";
     }
return 0;
}
void mergeSort (int* arr, int n){
if (n < 2){
return ;
}
int mid= n/2;
int left[mid];
int right[n-mid];
for (int i = 0;i < mid;i++){
    left[i]=arr[i];
}
for(int i = mid;i < n;i++){
   right[i-mid]=arr[i];
}
mergeSort(left,mid);
mergeSort(right,n-mid);
merge(left , mid, right ,n-mid, arr ,n);
}
void merge(int* left, int NL, int* right, int NR, int* arr, int n){
int i=0,j=0,k=0;
 while(i < NL && j < NR){
if (left[i] <= right[j]){
arr[k] = left[i];
i++;
k++;
}
 else{
 arr[k]=right[j];
 j++;
 k++;
}
  }
while(i<NL){
arr[k] = left[i];
i++;
k++;
}
while(j<NR){
arr[k] = right[j];
j++;
k++;                                  
}
}
