/* 数据结构基础第一章一些简单的算法 */
#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 101
#define SWAP(x,y,t) ((t) = (x),(x) = (y),(y) = (t))

void sort(int[],int);//selection sort
int binsearch(int list[],int searchnum,int left,int right);//折半查找
int COMPARE(int ,int); //比较两个整型

int main(void)
{
  int i,n;
  int list[MAX_SIZE];
  int searchnum;
  printf("Enter the number of numbers to generate: ");
  scanf("%d",&n);

  if(n<1 || n>MAX_SIZE)
  {
    fprintf(stderr,"Improper value of n\n");
    exit(EXIT_FAILURE);
  }

  for(i = 0;i < n;i++)  //randomly generate numbers
  {
    list[i] = rand()%1000;
    printf("%d  ",list[i]);
  }

  sort(list,n);
  printf("\n Sorted array :\n");
  for(i = 0;i < n;i++)   //print sorted numbers
    printf("%d  ",list[i]);
  printf("\n");

  printf("enter a number to search in sorted list:");
  scanf("%d",&searchnum);
  printf("the number position:%d\n",binsearch(list,searchnum,0,n-1));

  
  return 0;
}



//选择排序法
void sort(int list[],int n)
{
  int i,j,min,temp;

  for(i = 0;i < n-1;i++)
  {
    min = i;
    for(j = i+1;j < n;j++)
      if(list[j] < list[min])
        min = j;
    SWAP(list[i],list[min],temp);
  }
}


//折半查找
int binsearch(int list[],int searchnum,int left,int right)
{
  int middle;
  while(left <= right)
  {
    middle = (left+right)/2;
    switch(COMPARE(list[middle],searchnum))
    {
      case -1: left = middle+1;break;
      case 0: return middle;
      case 1: right = middle-1;
    }
  }

  return -1;
}


int COMPARE(int x,int y)
{
  if(x < y)
    return -1;
  else if(x == y)
    return 0;
  else
    return 1;
}
