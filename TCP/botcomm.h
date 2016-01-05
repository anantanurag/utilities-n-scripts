// Class for server and client
#ifndef BOTCOMM_H
#define BOTCOMM_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>

#define PORT "3490"  // the port users will be connecting to

#define BACKLOG 10     // how many pending connections queue will hold

#define PORT "3490" // the port client will be connecting to 

#define MAXDATASIZE 100 // max number of bytes we can get at once 

class botcomm
{
public:
	char Tx[1000], Rx[1000];   // string to be transmitted and received

	int client(int argc, char argv[]);

	int server(void);

private:
	// get sockaddr, IPv4 or IPv6:
	void *get_in_addr(struct sockaddr *sa); 

	void sigchld_handler(int s);
};

#endif


