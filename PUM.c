#include <stdio.h>
 
int main() {
 
    int N;
    int NN;
    
    scanf("%d", &N);
    
    NN = 1;
    
    for (N; N > 0; N--) {
        
        printf("%d %d %d PUM\n", NN, NN + 1, NN + 2);
        NN += 4;
        
    }
 
    return 0;
}