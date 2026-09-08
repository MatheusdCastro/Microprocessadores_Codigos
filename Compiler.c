//escrever um programa que leia um .asm e salve em binário (.bin) que será lido pelo verilog
//strcmt
#include <stdio.h>
#include <string.h>

int main(){
FILE *asm = fopen("Arquivo.asm","r");
FILE *binary = fopen("ArquivoBin.bin","W+b");
char buffer[5];
char text[5];

fseek(asm, SEEK_SET, 0);
while(fgets(buffer, sizeof(buffer),asm)){
    if(buffer == "ADD"){
        fputs("0001",binary);
    }
    else if(buffer == "SUB"){
    //  fwrite();   
    }
}

fclose(binary);
 

fclose(asm);

return 0;
}