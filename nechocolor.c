

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KCYN  "\x1B[36m"
#define KNRM  "\x1B[0m"



#include <stdio.h>

main(argc, argv)
int argc;
char *argv[];
{
	register int i, nflg;

	nflg = 0;
	if(argc > 1 && argv[1][0] == '-' && argv[1][1] == 'n') {
		nflg++;
		argc--;
		argv++;
	}
	for(i=1; i<argc; i++) {

	        //printf("%s%s\n", KCYN, entry->d_name );
	        printf("%s", KCYN );
		fputs(argv[i], stdout);
	        printf("%s", KNRM );

		if (i < argc-1)
			putchar(' ');
	}
	if(nflg == 0)
		putchar('\n');
	exit(0);
}



