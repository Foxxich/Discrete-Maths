#include <stdio.h>
  
// szukamy k!
long long silnia(int k) 
{ 
    // dla przypadku 0! = 1! = 1 
    if (k == 0) {
        return 1; 
    }
    long long res = 1; 
    //dla przypadku, gdy k=n-1
    for (int i = 2; i < k + 1; ++i) 
        res *= i; 
    return res; 
} 
  
// Funkcja, potrzebna do szukania potrzebnych kombinacji
int nCr(int k, int n) 
{ 
    //w przypadku, gdy k jest większe od n dajemy błąd
    if (n > k){
        return -1; 
    }
    //proste przypadki, gdy n=k i n=0
    if (k == n) {
        return 1; 
    }
    if (n == 0){ 
        return 1; 
    }
    //inne przypadki
    return nCr(k - 1, n - 1) + nCr(k - 1, n); 
} 
  
//funkcja potrzebna do szukania liczb Stirlinga 1 typu
long long liczba_Stirlinga(int n, int k) 
{ 
    //k nie moe być większe od n
    if (k > n) {
        return -1; 
    }
    if (k == 0) {
        return 0; 
    }
    if (k == n){ 
        return 1; 
    }
    if (k == 1) {
        return silnia(n - 1); 
    }
    if (n - k == 1){ 
        return nCr(n, 2); 
    }
    else{
        return liczba_Stirlinga(n - 1, k - 1) 
               + (n - 1) * liczba_Stirlinga(n - 1, k); 
    }
} 
  
int main() 
{ 
    int n = 29;
    for(int k=0;k<=n;k++){
    long long wynik = liczba_Stirlinga(n, k); 
    if (wynik == -1){
        printf("Niepoprawne dane"); 
    }
    if (wynik != -1){
        printf("Liczba Stirlinga dla (%d,%d) wynosi  %lld \n",n, k, wynik);
    }
    }
    return 0; 
}