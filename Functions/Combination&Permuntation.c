//nCr = n! / (r! * (n-r)!)

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    
    int nFact = 1, rFact=1, nrFact=1;
    
    for(int i=2; i<=n; i++){
        nFact = nFact * i;
    }
    for(int i=2; i<=r; i++){
        rFact = rFact * i;
    }
    for(int i=2; i<=n-r; i++){
        nrFact = nrFact * i;
    }
    
    int nCr = nFact / (rFact * nrFact);
    
    printf("%d", nCr);
    return 0;
}


//********OR********** */

#include <stdio.h>
int Factorial(int x){
    int Fact = 1;
    for(int i=2; i<=x; i++){
        Fact = Fact*i;
    }
    return Fact;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    
    int nFact = Factorial(n);
    int rFact=Factorial(r);
    int nrFact=Factorial(n-r);
    
    
    int nCr = nFact / (rFact * nrFact);
    
    printf("%d", nCr);
    return 0;
}