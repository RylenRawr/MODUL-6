#include <stdio.h>
int main(){
    int r, y, angka, a;
    scanf("%d %d", &r, &y);
    if(r!=y){
        printf("Jumlah tidak sama");
    }else{
    int barisr[r];int barisy[y];
    for(a = 0; a < r; a++){
        scanf("%d", &barisr[a]);} 
    for (a = 0; a < y; a++){
        scanf("%d", &barisy[a]);} 
    for(a = 0; a < r; a++){
        angka = barisr[a] * barisy[a];
        printf("%d ", angka);}
    }
}