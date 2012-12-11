/* calculate in array */
#include<stdio.h>

#define SIZE1 3
#define SIZE2 5

void get_input(double arr[][SIZE2],int size1);
double cal_average(double arr[],int size2);
double average_all(double arr[][SIZE2],int size1);
double max_all(double arr[][SIZE2],int size1);
void show_result(double arr[],int size,double average,double max);

int main(void)
{
  double arr1[SIZE1][SIZE2];
  double arr2[SIZE1];
  double average;
  double max;

  get_input(arr1,SIZE1);

  for(int i = 0;i < SIZE1;i++)
  {
    arr2[i] = cal_average(arr1[i], SIZE2);
  }

  average = average_all(arr1,SIZE1);
  max = max_all(arr1,SIZE1);

  show_result(arr2,SIZE1,average,max);

  return 0;
}


void get_input(double arr1[][SIZE2],int size1)
{
  int i,j;

  puts("Please enter 5 doulbe values:");
  for(i = 0;i < size1;i++)
  {
    for(j = 0;j < SIZE2;j++)
    {
      scanf("%lf",&arr1[i][j]);
    }
    puts("Please enter another 5:");
  }

  puts("\n");
}

double cal_average(double arr[],int size2)
{
  int i;
  double aver=0.0f;

  for(i = 0;i < size2;i++)
  {
    aver += arr[i];
  }
 
  aver /= size2;

  return aver;

}


double average_all(double arr[][SIZE2],int size1)
{
  int i,j;
  double aver=0.0f;

  for(i = 0;i < size1;i++)
    for(j = 0;j < SIZE2;j++)
    {
      aver += arr[i][j];
    }
    
  aver /= SIZE2*size1;


  return aver;
}


double max_all(double arr[][SIZE2],int size1)
{
  int i,j;
  double max=arr[0][0];

  for(i = 0;i < size1;i++)
    for(j = 0;j < SIZE2;j++)
    {
      if(arr[i][j] >= max)
        max = arr[i][j];
    }

 return max;
}


void show_result(double arr[],int size,double average,double max)
{
  puts("the average fo every line is:");

  for(int i = 0;i < size;i++)
    printf("line %d's average:%lf\n",i+1,arr[i]);

  printf("the average of all is:%lf\n",average);
  printf("the max value is:%lf\n",max);
}
