/* double the value in array */
#include<stdio.h>

#define SIZE1 3
#define SIZE2 5

void show_arr(int arr[][SIZE2],int size1);
void double_value(int arr[][SIZE2],int size1);

int main(void)
{
  int arr[SIZE1][SIZE2] = {{1,1,1,1,1},
                           {2,2,2,2,2},
			   {3,3,3,3,3}};
  
  show_arr(arr,SIZE1);
  double_value(arr,SIZE1);
  show_arr(arr,SIZE1);

  return 0;
}


void double_value(int arr[][SIZE2],int size1)
{
  int i,j;

  for(i = 0;i < size1;i++)
    for(j = 0;j< SIZE2;j++)
      arr[i][j] *= 2;
}


void show_arr(int arr[][SIZE2],int size1)
{
  int i,j;

  for(i = 0;i < size1;i++)
  {
    for(j = 0;j < SIZE2;j++)
      printf("%d ",arr[i][j]);
    putchar('\n');
  }
  putchar('\n');
}
