// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0023_CompareArray.h"

int main(void)
{
  int array1[] = { 1,2,3,4,4 };
  int array2[] = { 1,2,3,4,5 };
  bool résult = ch08_ex21_1_CompareArray(array1, array2, 0);
  printf("%b", résult);
  bool résult = ch08_ex21_1_CompareArray(array1, array2, 4);
  printf("%b", résult);
  bool résult = ch08_ex21_1_CompareArray(array1, array2, 5);
  printf("%b", résult);

  return 0;
}
