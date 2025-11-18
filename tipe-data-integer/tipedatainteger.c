// int -> 4 byte (32bit) -> -2....M -> 2 M 
// signed. Signed merupakan tipe data positif dan negatif : int nomor = -3, int nomor = 3
// unsigned kebalikan dari signeed yang berarti hanya positif -> 0 - 4 Miliar : unsigned int nilai = 40
// 
// short -> 2 byte (16bit) -> -32 rb -> 32rb
// signed, unsigned
// short ukuran =  -32 
// unsigned short = 100 
// khusus untuk short. Jika variabel unsigned short dimasukan nilai' - ' maka hasilnya tetap positif
//
// long -> 4 byte (32bit), 8 byte (64bit)
// signed, unsigned
// long masyarakat_wakanda = 10000;
// unsigned panjang = 500000
//
//
// long long -> 8 byte (64bit)
// signed, unsigned
// long long angkaGede = 123456789
// unsigned long long = 987654321

#include <stdio.h>

int main(){
  int angka = 10;
  short Angkakecil = 10;
  long AngkaBesar  = 1234566789;
  long long AngkaSangatBesar = 987654321;
  unsigned int BIlanganpositif = 1000;
  unsigned long satuMiliar = 1000000000;

  printf("ini int: %d\n", angka);
  printf("ini angka short: %hd \n", Angkakecil);
  printf("ini AngkaBesar: %ld \n", AngkaBesar);
  printf("ini long long: %lld\n", AngkaSangatBesar);
  printf("ini unsigned int: %u\n", BIlanganpositif);
  printf("ini unsigned long %lu\n", satuMiliar);

  return 0;
}





















