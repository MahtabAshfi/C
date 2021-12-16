#include <stdio.h>
int main()
{
  int n, key, cnt = 0, pos;
  int arr[100];

  scanf("%d", &n);

  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  scanf("%d", &key);

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      pos = i + 1;
      printf("Item was found at position %d\n", pos);
      cnt++;
    }
  }
  if (cnt == 0)
    printf("Item was not found in the array!!\n");

  return 0;
}