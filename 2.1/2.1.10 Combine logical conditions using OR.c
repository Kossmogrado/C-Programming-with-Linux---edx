#include <stdio.h>
int main(void)

{
 int sunny = 1;
 int vacation = 1;
 int sunORvac = sunny||vacation;    /* compara as vari�veis e se e uma delas ou ambas forem de n�vel l�gico alto, a vari�vel atribu�da tamb�m se torna n�vel alto. */

                                    /* n�veis l�gicos 1||1 = 1 : 1||0 = 1 : 0||1 = 1 : 0||0 = 1 */

 if (sunORvac)
 {
     printf("Sunny OR Vacations OR both!\n");
 }
 else
 {
     printf("NEITHER sunny NOR I am on vacation.\n");
 }

 return 0;
}
