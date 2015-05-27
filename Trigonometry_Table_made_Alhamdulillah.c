/*==========================================================================*/
/*                                                                          */
/*                  Filename : Trigonometry table                           */
/*                   Author   : Abdul Haseeb Mir                            */
/*                Compiler used : C-free-5 Builder                          */
/*                            Contact Me                                    */
/*             FaceBook & Yahoo: haseeb_heaven@yahoo.com                    */
/*                Gmail: haseeb.striver@gmail.com                           */
/*                                                                         */
/*==========================================================================*/
 
 
/* Header Files */
#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
#include <windows.h>
/* Header Files */
 
main(){ /* Start of Main */
char yes = 'y'; /* Declaration Variables for Loop */   
char s,S; /* Declaration Variables for Sin */
char c,C; /* Declaration Variables for Cos */
char t,T; /* Declaration Variables for Tan */
char num; /* Declaration Variables to store user given Value */
float result,value; /* Declaration Variables for Value of Sin or Cos or Tan */
int swap; /* Variable for Swapping Value of Cos or Tan or Sin into it */
char e,E; /* Declaring Variable for Exit */
 
 
/*Assigning Values to Sin*/
s = 'sin'; /*for Small */
S = 'SIN'; /*for Capital */
 
/*Assigning Values to Cos*/
c = 'cos'; /*for Small */
C = 'COS';  /*for Capital */
 
/*Assigning Values to Tan*/
t = 'tan'; /*for Small */
T = 'TAN'; /*for Capital */
 
/* Assigning Values to Exit */
e = 'exit'; /*for Small */
E = 'EXIT'; /*for Capital */
 
/* While Loop Will Execute When Y will be = 'yes' */
 
while(yes == 'y'){
 
 
/* Coding of Color Starts */
HANDLE colorz;
colorz = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(colorz,FOREGROUND_GREEN );
/* Coding of Color Ends */
 
     
/* Output Starts */
printf("*%--_*^!--^**~*--*@~_*~   ");
printf("CHOOSE ANY TRIGONOMETRIC FUNCTION *~* ");
 
/* Coding of Color Starts */
HANDLE colorz2;
colorz2 = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(colorz2,FOREGROUND_INTENSITY | RED );
/* Coding of Color Ends */
printf(" Or Write Exit ");
 
/* Coding of Color Starts */
HANDLE colorz3;
colorz3 = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(colorz3,FOREGROUND_GREEN );
/* Coding of Color Ends */
printf(" *--^**--*@*@~  \n \n");
printf("\tApplication \t \t @*--*@ @*--*@ @*--*@ \t \t Abdul \n");
printf("   \t   made\t \t \t SIN \t COS \t TAN \t \t Haseeb \n");
printf("    \t    by\t \t \t @*--*@ @*--*@ @*--*@ \t \t  Mir \n");
     
 
/*reading users give value */
scanf("%s",&num);
 
/* If users given value is SIN  */
 
if (num == 's' || num == 'S')
 
/* Then it will Print this section */
{
printf("Now  Enter Value of SIN \n");
scanf("%f",&value);
swap = value; /* Swapping Value */
result = sin(value);
printf("Sin of %d",swap);
printf(" = %f \n \n",result);   
}
 
/* If users given value is COS */
else
{
if (num == 'c' || num == 'C')
 
/* Then it will Print this section */
{
printf("Now  Enter Value of COS \n");
scanf("%f",&value);
swap = value;  /* Swapping Value */
result = cos(value);
printf("Cos of %d",swap);
printf(" = %f \n \n",result);   
}
 
/* If users given value is TAN */
else
{
if (num == 't' || num == 'T')
 
/* Then it will Print this section */
{
printf("Now  Enter Value of TAN \n");
scanf("%f",&value);
swap = value;  /* Swapping Value */
result = tan(value);
printf("Tan of %d",swap);
printf(" = %f \n \n",result);
}
 
 
/* Condition for Exit */
else
{
if (num == 'e' || num == 'E' )
{/* Coding of Color Starts */
HANDLE colorz;
colorz = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(colorz,FOREGROUND_INTENSITY | RED );
printf("\t\t\t   *~*^**~* AllaaH-u-AkbaR *~*^**~* \n\n");
/* Coding of Color Ends */
exit(1);}
 
 
/* Condition for Error */
else
{
/* Coding of Color Starts */
HANDLE colorz;
colorz = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(colorz,FOREGROUND_INTENSITY | RED );
/* Coding of Color Ends */
printf(" \n \t\t\t  Error Wrong Choice \n");}
}}}
 
 
/* Message for Re-start */
 
/* Coding of Color Starts */
HANDLE colorz1;
colorz1 = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(colorz1,FOREGROUND_GREEN );
/* Coding of Color Ends */
printf("\n \t \t\tDo u want to Try Again Y/N \n \n");   
yes = getchar();
 
 
 
} /* While Loop Ends */
 
return TRUE;
} /* End of Main */
