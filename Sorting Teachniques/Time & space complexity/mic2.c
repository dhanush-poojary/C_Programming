#include <stdio.h>//convert an array digits into a number then find out smallest/lowest number of sums with that number and print the smallest sum and second smallest sum
int main()
{
  int arr[] = {5, 4, 8, 3, 2, 6, 7, 1};//an unsorted array
  int n = 8, min_sum = 0, sec_min = 0;//size of array is 8
  for (int i = 0; i < n - 1; i++)//firstly we sorted the array in non decsending order 1 is the lowest number so our sum will start from the digit 1
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  int i = 0, j = 0;
  while (i < n)//in here we are converting array element into number by *10 which will add each element to the back of each 
  {
    j = i;
    min_sum = (min_sum * 10) + arr[i];
    i++;
  }
  while (j >= n - 2)//here we are finding second smallest sum which is first smallest only but only last 2 digits are reversed if first is 1234567 then second will be 1234576 which is greater then smallest
  {
    if (arr[j] > arr[j - 1])//we are swapping last 2 digits from the array
    {
      int temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j + 1] = temp;
    }
    j--;
  }
  i = 0;
  while (i < n)//in here we are converting array element into number by *10 which will add each element to the back of each 
  {
    sec_min = (sec_min * 10) + arr[i];
    i++;
  }
  printf("The smallest number of sum = %d\n", min_sum);//prints smallest sum of numbers
  printf("The second smallest number of sum = %d", sec_min);//prints second smallest sum of numbers
  return 0;
}