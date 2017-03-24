#include <stdio.h>
#include <stdlib.h>

int main()
{

  int hora, minuto, segundo, a, b, c;
   hora=minuto=segundo=0;

   printf("\n\n\n\n\n");
   printf("   Relogio batata abaixo\n\n\n");

   printf("Alarme");


















   while (1)
      {
       printf("\r   Hora Provavelmente Errada: %2dh %2dm %2ds", hora, minuto, segundo );
       segundo ++;
       if(segundo==60)
            {
             segundo=0;
             minuto++;
            }
       if(minuto==60)
            {
             minuto=0;
             hora++;
            }
       if(hora==24)
            {
             hora=0;
            }
  sleep(1);
      }

  return 0;
}
