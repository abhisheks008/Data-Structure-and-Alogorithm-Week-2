#include <stdio.h>
int main()
{
int n;
scanf ("%d",&n);
int k;
scanf ("%d",&k);
int arr[n];
// taking input and storing it in an array
for(int i = 0; i < n; ++i) {
scanf("%d", &arr[i]);
}
//Calculate length of array arr
int length = sizeof(arr)/sizeof(arr[0]);
//Rotate the given array by n times toward left
for(int i = 0; i < k; i++){
int j, first;
//Stores the first element of the array
first = arr[0];
for(j = 0; j < length-1; j++){
//Shift element of array by one
arr[j] = arr[j+1];
}
//First element of array will be added to the end
arr[j] = first;
}
for(int i = 0; i < length; i++){
printf("%d ", arr[i]);
}
return 0;
}
