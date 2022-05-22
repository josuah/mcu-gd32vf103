#include "libc.h"

void *
memset(void *mem, int val, size_t sz)
{
	for (char *mp = mem; sz > 0; sz--, mp++)
		*mp = (char)val;
	return mem;
}
