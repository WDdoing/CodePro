/*copy a two dimension double array*/
#include<stdio.h>

#define SIZE 5

void copy_2d_array(double source[][SIZE],double target[][SIZE],int size);
void copy_array(double source[],double target[],int size);


int main(void)
{
  double source[SIZE][SIZE] = {{1.0,1.0,1.0,1.0,1.0},
                               {2.0,2.0,2.0,2.0,2.0},
			       {3.0,3.0,3.0,3.0,3.0},
			       {4.0,4.0,4.0,4.0,4.0},
			       {5.0,5.0,5.0,5.0,5.0}};
  double target[SIZE][SIZE];
  
  copy_2d_array(source,target,SIZE);

  return 0;
}


void copy_2d_array(double source[][SIZE],double target[][SIZE],int size)
{
  int i;

  for(i = 0;i < size;i++)
  {
    copy_array(source[i],target[i],SIZE);
  }
}


void copy_array(double source[],double target[],int size)
{
  double * orgin;
  int i;

  orgin = source;
  for(i = 0;i < size;i++)
  {
    target[i] = *orgin++;
    printf("copied:%lf\n",target[i]);
  }
}
