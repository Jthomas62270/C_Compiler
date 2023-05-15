#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Tokens accepted 
enum { 
    T_PLUS, T_MINUS, T_STAR, T_SPLASH, T_INTLIT
}; 

struct token {
    int token; 
    int intvalue; 
}; 