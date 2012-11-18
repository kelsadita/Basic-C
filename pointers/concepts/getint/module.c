/*
 * =====================================================================================
 *
 *       Filename:  module.c
 *
 *    Description:  Module function definitions for getch() and ungetch()
 *
 *        Version:  1.0
 *        Created:  Sunday 18 November 2012 02:52:34  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kalpesh Adhatrao (kelsadita), kalpesh.adhatrao@gmail.com
 *        Company:  compag
 *
 * =====================================================================================
 */

#include "module.h"

char buf[BUFSIZE];
int bufp = 0;

int getch(void){

    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c){
    
    if (bufp >= BUFSIZE) {
        printf("ungetch: too many characters\n");
    }else {
        buf[bufp++] = c;
    }
}

int getint(int *pn){

    int c, sign;

    while(isspace(c = getch()))
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }
    
    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-')
        c = getch();
    
    for (*pn = 0; *pn < isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    
    *pn *= sign;

    if (c != EOF)
        ungetch(c);
    
    return c;
}
