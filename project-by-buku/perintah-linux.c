//----------------
// run perintah linux
// ---------------

#include<stdio.h>
#include<stdlib.h>

int main (void){
    char perintah[1024];
    printf("Masukan perintah Linux : \n");
    scanf("%s", perintah);
    system(perintah);
    exit(0);
}