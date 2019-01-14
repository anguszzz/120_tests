#include <stdio.h>
#include <assert.h>
#include "aux.h"
#include "umix.h"

void Main ()
{
	int pid = 0;
		for(int i = 0; i<12; i++){
			pid = Fork();
			DPrintf("The created process is: %d", pid);
		}
	DPrintf("Test case passed");
}