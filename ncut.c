


    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>


/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
char *strsplit(char *str , int mychar , int myitemfoo )
{  
      char ptr[strlen(str)+1];
      int myitem = myitemfoo +1;
      int i,j=0;
      int fooitem = 0;
      for(i=0; str[i]!='\0'; i++)
      {
        if ( str[i] == mychar ) 
           fooitem++;
        //else if ( str[i] != mychar &&  fooitem == myitem-1  ) 
        else if ( str[i] != mychar &&  fooitem == myitem-2  ) 
           ptr[j++]=str[i];
      } 
      ptr[j]='\0';
      size_t siz = sizeof ptr ; 
      char *r = malloc( sizeof ptr );
      return r ? memcpy(r, ptr, siz ) : NULL;
}



/// customed one
char *strdelimit(char *str , int mychar1, int mychar2,  int mycol )
{ 
      char ptr[strlen(str)+1];
      char ptq[strlen(str)+1];
      strncpy( ptr, strsplit( str, mychar1 , mycol+1 ), strlen(str)+1 );
      strncpy( ptq, strsplit( ptr, mychar2 , 1 ), strlen(str)+1 );
      size_t siz = sizeof ptq ; 
      char *r = malloc( sizeof ptq );
      return r ? memcpy(r, ptq, siz ) : NULL;
}


    int main( int argc, char *argv[])
    {
        int begin = 1;
        char linebuffer[BUFSIZ];
        strncpy( linebuffer, "" , BUFSIZ );
        char ptr[BUFSIZ];
        int j=0;

        int c ; 
        c = getchar();
        while( c != EOF )
        {
           //if ( begin == 1 )  printf( "%.0f: ", charpos++);
           //putchar( c );
           ptr[j++] = c;
           begin = 0;

           if ( c == '\n' )
           {  
             begin = 1;
             ptr[j]='\0';
             //printf( "%s", ptr );
             printf( "%s",  strdelimit( ptr, '{' , ',' , 1 ) );
             printf( "\n");
             strncpy( ptr, "", BUFSIZ );
             j = 0;
           }

           c = getchar();
        }
	return 0;
    }


