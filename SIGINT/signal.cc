// C++ code for capturing SIGINT ( Ctrl + C )

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_handler(int s){
           printf("You pressed Ctrl - C! Gotcha!! %d\n",s);
           exit(1); 

}

int main(int argc,char** argv)
{
	struct sigaction sigIntHandler;

    sigIntHandler.sa_handler = my_handler;
    sigemptyset(&sigIntHandler.sa_mask);
    sigIntHandler.sa_flags = 0;

	sigaction(SIGINT, &sigIntHandler, NULL);
	while(1){
	   
	   //  pause();
	   printf("In while loop	\n");
	   // return 0; 
	}   
}