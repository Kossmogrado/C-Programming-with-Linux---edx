#include <stdio.h>
int main(void)

{
 int sunny = 1;
 int vacation = 1;
 int sunORvac = sunny||vacation;    /* compara as variáveis e se e uma delas ou ambas forem de nível lógico alto, a variável atribuída também se torna nível alto. */

                                    /* níveis lógicos 1||1 = 1 : 1||0 = 1 : 0||1 = 1 : 0||0 = 1 */

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
