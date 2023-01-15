#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void permute(int *array, int start, int end)
{
  if (start == end)
  {
    for (int i = 0; i <= end; i++)
    {
      printf("%d ", array[i]);
    }
    printf("\n");
  }
  else
  {
    for (int i = start; i <= end; i++)
    {
      swap((array + start), (array + i));
      permute(array, start + 1, end);
      swap((array + start), (array + i));
    }
  }
}

int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  int array[n];
  printf("Enter %d elements: ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }
  printf("All permutations: \n");
  permute(array, 0, n - 1);
  return 0;
}