/* find a maximum int value in a int array */
#include<stdio.h>

#define SIZE 10

int find_max_int(int arr[],int size);

int main(void)
{
  int arr1[SIZE] = {34,23,54,21,49,89,40,50,68,88};

  printf("The maximum value int the array:\n");
  printf("%d\n",find_max_int(arr1,SIZE));

  return 0;
}


int find_max_int(int arr[],int size)
{
  int max;
  int i;

  for(i = 0,max = i;i < size;i++)
  {
    if(arr[i] >= max)
      max = arr[i];
  }

  return max;
}
