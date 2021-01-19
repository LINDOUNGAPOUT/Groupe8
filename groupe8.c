
#include <stdio.h>
#include <unistd.h>
#include <time.h>

// lindou

void duree(){
int i=1800;
clock_t start,end;
start=clock(); /*recuperation de l'heur actuel*/
while((( end=clock())-start)<=i*CLOCKS_PER_SEC); /*effectuons les calcules pour determiner le temps d'arret apres chaque 10 beep*/

}



int main()
{


	int i=1;	
		while(i<=10){
		
		printf("Beep n° %d", i);
		printf("\a\n");
		duree();/*delai d'attente*/
		i++;
		
	
}

printf("fin d'execution");
	
}
