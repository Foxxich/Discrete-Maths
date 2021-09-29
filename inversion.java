import java.util.Scanner;

public class inversion

{
    // Funkcja do sprawdzenia tego,jaka jest ilość elementów mniejszych po prawej strony od jakieś liczby
    public static int inwersja(int[] arr)
    {
        int ilośc_inwersji = 0;
        for (int i = 0; i < arr.length - 1; i++){
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] > arr[j]) {
                    ilośc_inwersji++;
                }
             }
        }
        return ilośc_inwersji;
    }
    
    public static void main(String[] args)
    {
        Scanner mScanner = new Scanner(System.in);
        System.out.print("Proszę podać,ile ilementów ma permutacja: "); 
        int first = mScanner.nextInt();
        System.out.print("Ilość elementów:"+first+"\n");
        int[] arr=new int[first];
        for(int i = 0; i < first; i++){
            System.out.print("Proszę podać elementy: ");
            int second = mScanner.nextInt(); 
            System.out.print("Element №:"+i+" wynosi "+second+"\n");
            arr[i]=second;
            }
        int potega = (int)Math.pow(-1, inwersja(arr));
        if(potega==1){
            System.out.println("Znak danej permatucji = " + potega+"(dodatnia)");
        }
        if(potega==-1){
            System.out.println("Znak danej permatucji = " + potega+"(ujemna)");
        }
    }
}