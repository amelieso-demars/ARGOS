// Author: HE-Arc

// Standard includes
#include <stdbool.h>

// Local includes
#include "ex_0023_CompareArray.h"

// Function definitions
bool ex_0023_CompareArray(int a1[], int a2[], int nb)
{
	for (int i = 0; i < nb; i += 1)
	{
		if (a1[i] != a2[i])
		{
			return false;
		}
	}
	return true;
}
