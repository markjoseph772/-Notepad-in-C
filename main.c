#include <stdio.h>
#include <stdlib.h>
	extern char filecontent[10000];
const int MAX = 10000;

extern char writepad ();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		FILE *file;
        
	char filename[100];
        char *ptr;
        int i;
        ptr = filecontent;
        writepad();
	printf("Enter the name of the file:");
	scanf(" %s",filename);
     
	file = fopen(filename,  "w");
        for (i=0;i<MAX; i++){
          fputs( ptr, file);
          ptr ++;
          break;
         
         }
	if (file != NULL){
                
		printf("File open successful");
	
          
		
	}
	else{
		printf("File open unsuccessful");
	}
	fclose(file);
	extern char filecontent[10000];
const int MAX = 10000;

extern char writepad ();	return 0;
}
