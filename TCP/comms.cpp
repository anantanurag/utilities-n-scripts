#include "botcomm.h"

int main(void){
	int choice;
	printf("Enter 0 to send data, 1 to receive data\n");
	scanf("%d", &choice);
	botcomm b;
	switch(choice){
		case 0: 
			b.client(2, "192.168.1.3");
			break;
		case 1:
			b.server();
			break;
		default :
			printf("Enter a valid choice\n");
	}
}