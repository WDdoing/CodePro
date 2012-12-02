/* use pointer and array to copt a array */
#include<stdio.h>

#define SIZE 5

void copy_arr(double source[],double target[],int size);
void copy_ptr(double source[],double target[],int size);

int main(void)
{
  double source[SIZE] = {1.1,2.2,3.3,4.4,5.5};
  double target1[SIZE];
  double target2[SIZE];

  puts("copy use arr name:");
  copy_arr(source,target1,SIZE);
  puts("copy use a pointer:");
  copy_arr(source,target2,SIZE);

  return 0;
}


void copy_arr(double source[],double target[],int size)
{
  int i;

  for(i = 0;i < SIZE;i++)
  {
    *(target+i) = *(source+i);
    printf("copied:%lf\n",*(target+i));
  }
}


void copy_ptr(double source[],double target[],int size)
{
  double * origin;
  int i;

  origin = source;

  for(i = 0;i < SIZE;i++)
  {
    target[i] = *origin++;
    printf("copied:%lf\n",target[i]);
  }
}
