/*
 * =====================================================================================
 *
 *       Filename:  module.h
 *
 *    Description:  header file for the getint program
 *
 *        Version:  1.0
 *        Created:  Sunday 18 November 2012 02:52:02  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kalpesh Adhatrao (kelsadita), kalpesh.adhatrao@gmail.com
 *        Company:  compag
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>

#define BUFSIZE 100

int getch(void);
void ungetch(int);
int getint(int *);
