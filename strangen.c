/*                @Project: IFJ14
-----------------------------------------------------
  @Author: Marek Bielik   xbieli05@stud.fit.vutbr.cz
  @Author: Filip Gulan    xgulan00@stud.fit.vutbr.cz
  @Author: Filip Ježovica xjezov01@stud.fit.vutbr.cz
  @Author: Luboš Matuška  xmatus29@stud.fit.vutbr.cz
  @Author: Eduard Rybár   xrybar04@stud.fit.vutbr.cz
-----------------------------------------------------
*/

#include <stdio.h>
#include "strangen.h"

int a1 = 0;
int a2 = 0;
int a3 = 0;
int a4 = 0;
int a5 = 0;
int a6 = 0;
int a7 = 0;
int a8 = 0;
int a9 = 0;
int a10 = 0;
char UNIKAT[] = "AAAAAAAAAA";

void strningRandGen()
{
   		if(a1 > 23)
   		{
   			a2++;
   			a1 = 0;
   		}
   		if(a2 > 23)
   		{
   			a3++;
   			a2 = 0;
   			a1 = 0;
   		}
   		if(a3 > 23)
   		{
   			a4++;
   			a3 = 0;
   			a2 = 0;
   			a1 = 0;
   		}
   		if(a4 > 23)
   		{
   			a5++;
   			a4 = 0;
   			a3 = 0;
   			a2 = 0;
   			a1 = 0;
   		}
   		if(a5 > 23)
   		{
   			a6++;
   			a5 = 0;
   			a4 = 0;
   			a3 = 0;
   			a2 = 0;
   			a1 = 0;
   		}
   		if(a6 > 23)
   		{
   			a7++;
   			a6 = 0;
   			a5 = 0;
   			a4 = 0;
   			a3 = 0;
   			a2 = 0;
   			a1 = 0;
   		}
   		if(a7 > 23)
   		{
   			a8++;
   			a7 = 0;
   			a6 = 0;
   			a5 = 0;
   			a4 = 0;
   			a3 = 0;
   			a2 = 0;
   			a1 = 0;
   		}
   		if(a8 > 23)
   		{
   			a9++;
   			a8 = 0;
   			a7 = 0;
   			a6 = 0;
   			a5 = 0;
   			a4 = 0;
   			a3 = 0;
   			a2 = 0;
   			a1 = 0;
   		}
   		if(a9 > 23)
   		{
   			a10++;
   			a9 = 0;
   			a8 = 0;
   			a7 = 0;
   			a6 = 0;
   			a5 = 0;
   			a4 = 0;
   			a3 = 0;
   			a2 = 0;
   			a1 = 0;
   		}
   		UNIKAT[0] = a1 + 65;
   		UNIKAT[1] = a2 + 65;
   		UNIKAT[2] = a3 + 65;
   		UNIKAT[3] = a4 + 65;
   		UNIKAT[4] = a5 + 65;
   		UNIKAT[5] = a6 + 65;
   		UNIKAT[6] = a7 + 65;
   		UNIKAT[7] = a8 + 65;
   		UNIKAT[8] = a9 + 65;
   		UNIKAT[9] = a10 + 65;
   		a1++;
   		//printf("%s\n", UNIKAT);
   		//return(a);
}

/*int main()
{
   while(1)
   {
   		stringRandGen();
   		printf("%s\n", a);
   }
}*/
