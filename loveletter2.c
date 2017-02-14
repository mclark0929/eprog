#include <stdio.h>
#include <string.h>
main(){
    FILE *myFile;
    myFile = fopen("out.txt", "r");
        int ch;
			FILE *fp;
			fp=fopen("out.txt","r");
			while(!feof(fp))
			{
			ch=getc(fp);
			printf("%d ",ch);
		}
    }
