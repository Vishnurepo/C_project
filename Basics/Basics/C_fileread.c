#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PRINT_TIME(logFileHandle) do {\
	time_t day;\
	struct tm *tm;\
	time(&day);\
	tm = (localtime(&day));\
	fprintf(logFileHandle,"\"TIME:\" %02d:%02d:%02d\t",tm->tm_hour,tm->tm_min,tm->tm_sec);\
} while(0)

#define BUFFSIZE 256
int vistokenize(char *line, char ***tokens);

int main(int argc, char *argv[])
{
	FILE *fp = NULL;
	fp = fopen(argv[1],"r");
	char *Buffer = NULL;
	char **tokens = NULL;
	int numtokens = 0;

	while (!feof(fp))
	{
		fgets(Buffer, BUFFSIZE, fp);
		numtokens = vistokenize(Buffer, &tokens);
		
	}

	return 0;
}

int vistokenize(char *line, char ***tokens)
{
	int  i = 0;
	while (strcmp(line, "\n") != 0)
	{
		char *dup = NULL;
		int tokenlength = 0;		

		dup = line;
		line = strchr(dup, ',');//line now has new string from ,
		tokenlength = (strlen(dup) - strlen(line));
		//copy the leftover part to token
		*tokens = (char**)(realloc((*tokens),sizeof(char*) + 1));
		*tokens[i] = (char*)(malloc((sizeof(char)*tokenlength)));
		++i;
	}
	return i;
}

#ifdef __cplusplus	
}
# endif