#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h> 

void Enseash(){
	
	char * mess1 = "$ ./enseash : \n";
	char * mess2 = "Bienvenue dans le shell ENSEA \n";
	char * mess3 = "Pour quitter, tapez 'exit'. \n ";
	write ( STDOUT_FILENO,mess1, strlen(mess1));
	write (STDOUT_FILENO, mess2, strlen(mess2));
	write(STDOUT_FILENO,mess3, strlen(mess3)); 

}




