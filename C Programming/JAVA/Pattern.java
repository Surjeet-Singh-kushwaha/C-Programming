
import java.util.*;
public class Pattern {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of Line: ");
        int n = sc.nextInt();
        for(int i =1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                System.out.print(" ");
            }
            for(int k =i;k>0;k--){
                System.out.print(k);
            }
            for(int l = 2;l<=i;l++){
                System.out.print(l);
            }
            System.out.println();
        }
    }
}
