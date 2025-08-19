// 'ini karakter 1-0,a-z, dan simbol-simbol'
// 1. karakter tunggal -> 'a', 'b', 'c', '*'
// 2. escape karakter '\n', '\t', '\\', '\''
// 3. ascii \x41 \101

#include <stdio.h>

int main(){
  printf("ini huruf : %c\n", 'H');
  printf("angka karakter : %c\n", '8');
  printf("ini simbol: %c\n", '$');
  printf("karakter newline: %c\nini baris baru\n", '\n');
  printf("karakter tabulation: Tab%cTab\n", '\t');
  printf("karakter ascii: %c\n", '\x41');


  return 0;
}
