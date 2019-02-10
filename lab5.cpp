#include<iostream>



using namespace std;



void partition(int arr[], int low, int high, int pivot){

int *ptr = arr;
int temp;

for(int i=low;i<high;i++){
if(*(ptr+i)>*(ptr+pivot)){
temp=*(ptr+i);
*(ptr)=*(ptr+(high-i));
*(ptr+(high-i))=temp;
}
}
for(int i=low;i<high;i++){
if(*(ptr+i)>*(ptr+pivot)){
temp=*(ptr+i);
*(ptr+i)=*(ptr+pivot);
*(ptr+pivot)=temp;
pivot=i;
break;
}
}

}



void quicksort(int arr[], int low, int high){

if(low<high){

int pivot=high;

partition(arr,low,high,pivot);

quicksort(arr,low,pivot-1);
quicksort(arr,pivot+1,high);

}


}





int main(){

int low,high;
int n;

cout<<"How many elements does your array have?"<<endl;
cin>>n;

int arr[n];

cout<<"Enter your elements one by one "<<endl;

for(int i=0; i<n;i++){
cin>>arr[i];
cout<<endl;
}


quicksort(arr,0,n-1);

for(int i=0; i<n;i++){
cout<<arr[i]<<"->";
}

cout<<endl;
}
