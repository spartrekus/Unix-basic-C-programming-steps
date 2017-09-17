
#include <stdio.h>
#include <string.h>
#include <stdlib.h>   // system

#include <unistd.h>   // chdir


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <dirent.h>
#include <ctype.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>

///////////////////////////////////
#include <ctype.h>  // fexist
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>
///////////////////////////////////
#include <unistd.h>  //define getcwd


int main()
{
    char cwd[PATH_MAX];
    char cmdi[PATH_MAX];
    strncpy( cwd, "" , PATH_MAX );
    char pathbefore[PATH_MAX];
    strncpy( pathbefore , getcwd( cwd, PATH_MAX ) , PATH_MAX );

    ////////////////////////////////////////////////////////
    printf("%s\n", pathbefore );
    return 0;
}


