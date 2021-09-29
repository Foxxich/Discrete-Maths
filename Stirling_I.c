#include <stdio.h>

    int Stirling_2(int n,int k) {
        if (k == 1 || k == n){
        return 1;
        }
    return Stirling_2(n-1,k-1) + k*Stirling_2(n-1,k);
}

int main()
{
    int n = 14;
    if(n<0 ){
        printf("Niepoprawne dane \n");
    }
    for(int k=1; k<=n;k++){
        if(k==1)
        printf("Liczba Stirlinga2 dla (%d,0) wynosi  0 \n",n);
        printf("Liczba Stirlinga2 dla (%d,%d) wynosi  %d \n",n, k,Stirling_2(n,k));
    }
    return 0;
}