#ifdef __cplusplus
	extern "C"{
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PRINT_TIME(logFileHandle)\
{\
	time_t day;\
	struct tm *tm;\
	time(&day);\
	tm = (localtime(&day));\
	fprintf(logFileHandle,"%02d:


}

int main()
{
	
}

#ifdef __cplusplus	
}
# endif