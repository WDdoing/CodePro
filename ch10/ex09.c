/* add two arrays */
#include<stdio.h>

#define SIZE 4

void add_arr(int arr1[],int arr2[],int arr3[],int size);
void show_arr(int arr[],int size);


int main(void)
{
  int arr1[SIZE] = {1,2,3,4};
  int arr2[SIZE] = {5,6,7,8};
  int arr3[SIZE];

  add_arr(arr1,arr2,arr3,SIZE);
  show_arr(arr1,SIZE);
  show_arr(arr2,SIZE);
  show_arr(arr3,SIZE);

  return 0;
}


void add_arr(int arr1[],int arr2[],int arr3[],int size)
{
  int i;

  for(i = 0;i < size;i++)
    arr3[i] = arr1[i]+arr2[i];
}


void show_arr(int arr[],int size)
{
  int i;

  for(i = 0;i < size;i++)
    printf("%d ",arr[i]);
  puts("\n");
}
