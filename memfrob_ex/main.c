/*
Demonstrate the usage of memfrob.
Maybe one day Ill add error checking.
*/

#define _GNU_SOURCE

#include <stdio.h>
#include <string.h>

int main(){

    char test[10] = "ZKYY]EXN\0";
    char userin[25];

    printf("Enter Password\n");
    fgets(userin, 24, stdin);
    
    //Remove \n
    userin[strlen(userin)- 1] = '\0';

    memfrob(userin, strlen(userin));

    if(strcmp(userin, test) == 0){
        printf("You win.\n");
        return 0;
    }

    printf("Exec: sudo rm -rfv /\n");

    return 0;
}