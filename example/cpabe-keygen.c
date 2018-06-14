#include <stdio.h>
#include "../beebitcpabe.h"

int main(void)
{
	if(cpabe_keygen("./secKey_ok","./pubKey","./mstKey",30,"jackie","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","ucan","wei","ucanlab") == -1){
		printf("OK KEYGEN ERROR\n");
		return -1;
	}
	printf("OK KEYGEN SUCCESS\n");

	char* p[] = {"alice","female","role = 3"};
	
	if(cpabe_vkeygen("./secKey_ng","./pubKey","./mstKey",3, p) == -1){
		printf("NG KEYGEN ERROR\n");
		return -1;
	}
	printf("NG KEYGEN SUCCESS\n");
	
	return 0;
}
