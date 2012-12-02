/* calculate the distance between the maximum and the minimum value
 * in a double array*/
#include<stdio.h>

#define SIZE 10

double value_distance(double arr[],int size);

int main(void)
{
  double arr1[SIZE] = {1.1,2.2,0.1,4.4,5.5,6.6,7.7,8.8,9.9,10.0};

  printf("the distance between the maximum and the minimum value:\n");
  printf("%lf\n",value_distance(arr1,SIZE));

  return 0;
}


double value_distance(double arr[],int size)
{
  int max,min;
  int i;

  for(i=max=min=0;i < size;i++)
  {
    if(arr[i] >= arr[max])
      max = i;
    else if(arr[i] <= arr[min])
      min = i;
  }

  return (arr[max]-arr[min]);
}
