#include <stdio.h>
int main(){
  int baris, kolom, isi, r, y;
  scanf("%d %d", &baris, &kolom);
  int matrix[baris][kolom];
    for (r = 0; r < baris; r++) {
      for (y = 0; y < kolom; y++) {
        scanf("%d", &isi);
        matrix[r][y] = isi;
      }
    }      
    for (r = 0; r < baris; r++) {
      for (y = 0; y < kolom; y++) {
        printf("%d ", matrix[r][y]);
      } printf("\n");
    }
}