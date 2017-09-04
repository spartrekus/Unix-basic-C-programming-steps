


    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
	//printf("Hello World \n");
        int c ; 
        c = getchar();
        while( c != EOF )
        {
           putchar( c );
           c = getchar();
        }
	return 0;
    }
