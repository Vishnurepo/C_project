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
	fprintf(logFileHandle,"\"TIME:\" %02d:%02d:%02d\t",tm->tm_hour,tm->tm_min,tm->tm_sec);\	
}

#define BUFFSIZE 256

int main(int argc, char *argv)
{
	FILE *fp = NULL;
	fp = fopen(argv[1],"r");
	char *Buffer = NULL;
	char **tokens = NULL;
	int numtokens = 0;

	while (!feof(fp))
	{
		fgets(Buffer, BUFFSIZE, fp);
		vistokenize(Buffer, &tokens);
		
	}


}

#ifdef __cplusplus	
}

int vistokenize(char *line, char ***tokens)
{
	
	while(strcmp(*line,"\n")!=0 )
	{
		char *dup = NULL;
		dup = line;
		line = strchr(dup,',');//line now has new string from ,
		tokenlength = strlen(dup)-strlen(line);
		//copy the leftover part to token
		**tokens = (char**)(malloc(sizeof(char*)+sizeof(**tokens));
		**tokens[i] = (char*)(malloc(sizeof(char)*tokenlength));
		
	}
}
# endif