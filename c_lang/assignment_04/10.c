#include <stdio.h>

int main()
{
  int arr_a[50], arr_b[50], arr_c[100], l, p;
  float avg;

  printf("No of elements for arr_a: ");
  scanf("%d", &l);

  printf("Elements for arr_a: ");
  for (int i = 0; i < l; i++)
    scanf("%d", &arr_a[i]);

  printf("No of elements for arr_b: ");
  scanf("%d", &p);
  printf("Elements for arr_b: ");
  for (int i = 0; i < p; i++)
    scanf("%d", &arr_b[i]);

  int q = l + p;
  for (int i = 0; i < q; i++)
  {
    if (i < l)
      arr_c[i] = arr_a[i];
    else
      arr_c[i] = arr_b[i - l];
  }

  printf("Elems of arr_c: \n");
  for (int i = 0; i < q; i++)
    printf("%d ", arr_c[i]);

  return 0;
}
