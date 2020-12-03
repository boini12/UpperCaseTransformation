#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * UpperCase(char *bundesland){
    int i=0;
    char *t = bundesland;
    while(t[i] != 0){
        if((t[i] >= 'a') && (t[i] <= 'z')){
            t[i] = t[i] - 32;
        }
        i++;
    }
    return bundesland;
}
int main()
{
    int i;
    char * a = malloc(256);
    char * b = malloc(256);
    char * c = malloc(256);
    char * d = malloc(256);
    char * e = malloc(256);

    strcpy(a, "Bayern");
    strcpy(b, "Hessen");
    strcpy(c, "Hamburg");
    strcpy(d, "Berlin");
    strcpy(e, "Saarland");

    char *bundeslaender[] = {a, b, c, d, e};

for(i=0; i<5; i++){
  printf("\nbundesland[%d] = %s", i, bundeslaender[i]);
}
printf("\n\n");
for(i=0; i<5; i++){
    printf("\nBundesland[%d] = %s", i, UpperCase(bundeslaender[i]));
}
printf("\n\n");
free(a);
free(b);
free(c);
free(d);
free(e);

 return 0;
}