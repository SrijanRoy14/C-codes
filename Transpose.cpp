#include <stdio.h>
int main() {
  int a[50][50], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  {
  
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);}
    
  printf("\n");
  }

  
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    a[j][i] = a[i][j];
  }

  
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  {
  
  for (int j = 0; j < r; ++j) {
    printf("%d  ", a[i][j]);}
    
    printf("\n");
  }
  return 0;
}
