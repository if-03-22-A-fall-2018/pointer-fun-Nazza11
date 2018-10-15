/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 3
 * Title:			PointerFun
 * Author:	  Vinzent Kronreif
 * ----------------------------------------------------------
 * Description:
 * Pointer Übung
 * ----------------------------------------------------------
*/
#include <stdio.h>

void print_integers(int int_value, int *int_pointer) {
  printf("Got an integer value %d and an address to an integer with value %d\n", int_value, *int_pointer);
}

void change_integers(int int_value, int *int_pointer) {
  int_value = 111;
  *int_pointer = 78;
}

int main(int argc, char const *argv[]) {
  int int_value;
  int *int_pointer;

  int_value = 10;
  int_pointer = &int_value;

  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer);
  print_integers(int_value, int_pointer);
  return 0;
}
