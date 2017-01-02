#ifdef __cplusplus
extern "C" {
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
	fprintf(logFileHandle,"\"TIME:\" %02d:%02d:%02d\n\n",tm->tm_hour,tm->tm_min,tm->tm_sec);



}

int main()
{
	
}

#ifdef __cplusplus	
}
# endif