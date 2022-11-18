#include <stdio.h>
int main(){
  int kolom, isi, r;
  scanf("%d", &kolom);
  int matrix[kolom];
    for (r = 0; r < kolom; r++) {
      scanf("%d", &isi);
      matrix[r] = isi;
  }      
      for (r = 0; r < kolom; r++) {
        printf("%d ", matrix[r] * (r + 1));
    }printf("\n");
}