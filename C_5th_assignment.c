#include <stdio.h>

int main() {
   int row;
   printf("줄 개수를 입력하세요:\n ");

   while (scanf("%d", &row))
 {
      int a[51][51] = { 0 };
      int i, j;
                a[0][0] = 0;          for (i = 1; i <= row; i++) {
         a[i][0] = 1;
         a[i][i] = 1;
      }

      for (i = 2; i <=row; i++) {
         for (j = 1; j <= row; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
         }
      }

      for (int i = 0; i <= row; i++) {
         for (int j = 0; j <= i; j++) {
            if (row > 1 && row < 50)
               printf("%3d", a[i][j]);
            else
               printf("%4d", a[i][j]);
         }
         printf("\n");
      }
   break;
   }
}