/*
 * =====================================================================================
 *
 *       Filename:  swap.c
 *
 *    Description:  Swapping using pointers
 *
 *        Version:  1.0
 *        Created:  Sunday 18 November 2012 01:20:13  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kalpesh Adhatrao (kelsadita), kalpesh.adhatrao@gmail.com
 *        Company:  compag
 *
 * =====================================================================================
 */

#include <stdio.h>

void swap1(int a, int b){

    int temp;

    temp = a;
    a    = b;
    b    = temp;
}

void swap2(int *a, int *b){
    
    int temp;

    temp = *a;
    *a   = *b;
    *b   = temp;
}

int main(int argc, const char *argv[])
{
    int a = 10, b = 20;

    //in first case the arguments will act like call by value so no actual swapping occurs
    printf("before swap 1 a = %d and b = %d\n", a, b);
    swap1(a, b);
    printf("after swap 1 a = %d and b = %d\n", a, b);

    //in this second case the arguments will acts like call by reference using pointers
    //swapping will be performed in this case
    printf("before swap 2 a = %d and b = %d\n", a, b);
    swap2(&a, &b);
    printf("after swap 2 a = %d and b = %d\n", a, b);

    return 0;
}

/*
OUTPUT:

before swap 1 a = 10 and b = 20
after swap 1 a = 10 and b = 20
before swap 2 a = 10 and b = 20
after swap 2 a = 20 and b = 10
*/
