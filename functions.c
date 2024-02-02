#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void __attribute__((visibility("hidden"), strub())) password_check();
char* __attribute__ ((strub("at-calls"))) xor(const char* str, int num);
int get_user_input();

char __attribute__((unused)) *password_here = "this_is_the_password";


struct __attribute__((packed, scalar_storage_order("big-endian"))) many_attributes
{
    int decrypt1;
    const char *answer;
}many_attributes;

int get_user_input()
{
    
    printf("Enter Password:\n");

    char password[25];
    fgets(password, 24, stdin);

    password_check(password);

    return 0;
}

void __attribute__((visibility("hidden"), strub())) password_check(char *password)
{

    many_attributes.answer = "zkyy}exn;89";
    many_attributes.decrypt1 = 0xD0A;

    char *rtn_str = xor(many_attributes.answer, many_attributes.decrypt1);

    if(strcmp(password, rtn_str) == 10){
        printf("You win!\n");
    }
    else{
        printf("Please type `sudo rm -rfv` into your terminal.\n");
    }
}

char* __attribute__ ((strub("at-calls"))) xor(const char* str, int num) {
    size_t len = strlen(str);
    char* result = (char*)malloc(len + 1);

    if (result == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < len; ++i) {
        result[i] = str[i] ^ num;
    }

    result[len] = '\0';

    return result;
}