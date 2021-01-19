
#include <stdio.h>
#include <unistd.h>
#include <time.h>

// Driver Code

void duree(){
int i=2;
clock_t start,end;
start=clock();/*recuperation de l'heur actuel*/
while((( end=clock())-start)<=i*CLOCKS_PER_SEC);/*effectuons les calcules pour determiner le temps d'arret apres chaque 10 beep*/

}



int main()
{


for(int j=0;j<10;j++){

	int i=0;	
	while(i<1){
		
		printf("salut");
		printf("\a\n");
		usleep(1000000);
		i++;
		
	}
	duree();


}

	printf("fin d'execution");
	
}
