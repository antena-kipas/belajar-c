// 123
// 3.14
// 0x14
// 017
//
//
// Bilangan desimal : 123, 456, 123
// Bilangan float :  4.14, 4.005, 5.12
// Bilangan oktal : 017
// Bilangan heksa : 0x14, 0xFF
// Bilangan Scientific notation : e E -> 123 1.23 x 10^3 = 1.23e3, 4.56e-2
//

#include <stdio.h>
int main(){
  printf("bilangan desimal: %d\n", 123);
  printf("bilangan heksadesimal: %x\n", 0xFF);
  printf("Bilangan oktal: %o\n", 017);
  printf("Bilangan float: %f\n", 4.21);
  printf("Bilangan float menggunakan %%.2f : %.2f\n", 4.21 );
  printf("Bilangan scientific notation: %e\n", 1.23e3);

  return 0;

}
