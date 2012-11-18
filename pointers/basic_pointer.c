/*
 * =====================================================================================
 *
 *       Filename:  basic_pointer.c
 *
 *    Description:  Trying out increment and decrement operators on pointers in C *
 *
 *        Version:  1.0
 *        Created:  Sunday 18 November 2012 12:40:35  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kalpesh Adhatrao (kelsadita), kalpesh.adhatrao@gmail.com
 *        Company:  compag
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int b = 10;
    int *a  = &b;

    
    (*a)++;
    printf("Post-increment of a adding brackets for precedence : %d\n", *a);
    
    ++*a;
    printf("Pre-increment of a : %d\n", *a);
    
    *a++;
    printf("After post increment without bracket : %d\n", *a);

    return 0;
}



/* 
 * OUTPUT :
 * 
 *Post-increment of a adding brackets for precedence : 11
 *Pre-increment of a : 12
 *After post increment without bracket : -1078943316
 */    

