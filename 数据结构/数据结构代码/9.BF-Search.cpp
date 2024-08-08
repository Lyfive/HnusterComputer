#include<stdio.h>
#include<string.h>

void bf(char* text,char* pattern){
    int textlen = strlen(text);
    int patternlen = strlen(pattern);
    int i,j;
    for(i=0;i<=textlen-patternlen;i++){
        j=0;
        while(j<patternlen&&text[i+j]==pattern[j]){
            j++;
        }
        if(j==patternlen){
            printf("%d\n",i+1);
            return;
        }
    }
    printf("No");
}
int main(){
    char text[100];
    char pattern[100];
    scanf("%s",text);
    scanf("%s",pattern);
    bf(text,pattern);
}