#include <stdio.h>
 
int main() {
 
    int a;
    int b;
    int c;
    int maiorAB;
    int maiorC;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    
    maiorAB = (a + b + abs (a - b)) / 2;
    maiorC = (maiorAB + c + abs (maiorAB - c)) / 2;
    
    printf("%d eh o maior", maiorC);
 
    return 0;
}