/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Main function for getint
 *
 *        Version:  1.0
 *        Created:  Sunday 18 November 2012 02:53:47  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kalpesh Adhatrao (kelsadita), kalpesh.adhatrao@gmail.com
 *        Company:  compag
 *
 * =====================================================================================
 */

#include "module.h"

int main(int argc, const char *argv[])
{
    int value;
    
    do {
        int a;
        
        fflush(stdout);
        value = getint(&a);
        if (value > 0) {
            printf("You entered: %d\n", a);
        }
        
    } while (value > 0);

    if (value == EOF)
        printf("End of file is reached\n");
    else 
        printf("Bad input\n");
    
    return 0;
}
