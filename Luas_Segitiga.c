#include <stdio.h>
int main(){
    int alas,tinggi,luas;
    printf("ini adalah program menghitung luas segitiga\n");
    printf("Masukan nilai Alas :");
    scanf("%d",&alas);
    printf("Masukan nilai Tinggi :");
    scanf("%d",&tinggi);
    luas= (alas*tinggi)/2;
    printf("Luas segitiga adalah : %d",luas);
}