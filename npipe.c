


    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int begin = 1;
        int c ; 
        c = getchar();
        while( c != EOF )
        {
           //if ( begin == 1 )  printf( "%.0f: ", charpos++);
           putchar( c );
           begin = 0;
           if ( c == '\n' ) begin = 1;
           c = getchar();
        }
	return 0;
    }


