#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG 0

int search(char * txt, char * key, int key_size, int position){
   	int i;
   	for(i=key_size-2; i>=0; i--){
   		if(key[i] != txt[position]){
        	return 0;
      	}
      	position --;
   	}
   	return 1;
}

int a_menor_que_b(char* a, char* b, int len) {
    return strlen(a) < strlen(b) ? 1 : 0;
}

int main(){
   	int i, j, k, counter = 0;
   	int num_lines, num_emo, lola = 1;
   	char line[10000];
   	
	scanf("%d %d\n", &num_emo, &num_lines);
  	while(num_emo && num_lines){
	    lola++;
	     
	    char emoticons[num_emo][20];
	      
	    for(i=0; i<num_emo; i++){
	        fgets(emoticons[i], 10000, stdin);
	    }

	    for(i=0; i<num_lines; i++){
		    fgets(line, 10000, stdin);
		    int tam_linha = strlen(line)-1;

		    for(j=0; j<tam_linha; j++){
		    	for(k=0; k<num_emo; k++){
		    		int tam_emo = strlen(emoticons[k])-1;
		    		if(line[j] == emoticons[k][tam_emo-1]){
		    			if(search(line, emoticons[k], tam_emo, j-1)){
		    				line[j] = ' ';
		    				counter++;
		    			}
		    		}
		    	}
		    }
	    }

	    printf("%d\n", counter);
	    counter = 0;
		scanf("%d %d\n", &num_emo, &num_lines);
	}
	return 0;
}