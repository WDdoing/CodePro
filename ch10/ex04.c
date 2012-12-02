/* return a the maximum value's index in a double array*/
#include<stdio.h>

#define SIZE 10

int index_of_max(double arr[],int size);

int main(void)
{
  double arr1[SIZE] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,0.0};

  puts("the index of the maximum value in the array:");
  printf("%d\n",index_of_max(arr1,SIZE));

  return 0;
}


int index_of_max(double arr[],int size)
{
  int i,max;

  for(i = 0,max = 0;i < size;i++)
  {
    if(arr[i] >= arr[max])
    {
      max = i;
    }
  }

  return max;
}
