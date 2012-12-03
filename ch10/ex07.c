/* copy array elements */
#include<stdio.h>

#define SIZE1 7
#define SIZE2 3

void copy_array(int * ptr1,int * ptr2,int num);

int main(void)
{
  int arr1[SIZE1] = {1,2,3,4,5,6,7};
  int arr2[SIZE2];

  copy_array(arr1+2,arr2,3);

  return 0;
}


void copy_array(int * ptr1,int * ptr2,int num)
{
  int i;

  for(i = 0;i < num;i++)
  {
    *ptr2++ = *ptr1++;
    printf("copyed:%d\n",*(--ptr2));
  }
}
