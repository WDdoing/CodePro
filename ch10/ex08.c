/* verify length array */
#include<stdio.h>

#define SIZE1 3
#define SIZE2 5

void copy_VLA(int size1,int size2,double arr1[size1][size2],double arr2[size1][size2]);
void show_VLA(int size1,int size2,double arr[size1][size2]);

int main(void)
{
  double arr1[SIZE1][SIZE2] = {{1.1,1.1,1.1,1.1,1.1},
                               {2.2,2.2,2.2,2.2,2.2},
			       {3.3,3.3,3.3,3.3,3.3}};
  double arr2[SIZE1][SIZE2];

  copy_VLA(SIZE1,SIZE2,arr1,arr2);
  show_VLA(SIZE1,SIZE2,arr1);
  show_VLA(SIZE1,SIZE2,arr2);

  return 0;
}


void copy_VLA(int size1,int size2,double arr1[size1][size2],double arr2[size1][size2])
{
  int i,j;

  for(i = 0;i < size1;i++)
    for(j = 0;j < size2;j++)
    {
      arr2[i][j] = arr1[i][j];
      printf("copied:%lf\n",arr2[i][j]);
    }

  putchar('\n');
}


void show_VLA(int size1,int size2,double arr[size1][size2])
{
  int i,j;

  for(i = 0;i < size1;i++)
  {
    for(j = 0;j < size2;j++)
      printf("%lf ",arr[i][j]);
    putchar('\n');
  }

  putchar('\n');
}
