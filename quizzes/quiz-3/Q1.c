#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char** argv ) {
    char movie[] = "finding nemo!";
    char mystery[100];
    strcpy(mystery, movie);
    printf( "%d\n", (int)strlen( movie ) );
    printf( "%d\n", (int)(sizeof( movie ) / sizeof( movie[0] )) );
    printf( "%d\n", (int)strlen( mystery ) );
    printf( "%d\n", (int)(sizeof( mystery ) / sizeof( mystery[0] )) );
    return EXIT_SUCCESS;
}