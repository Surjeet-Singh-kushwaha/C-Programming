// WAP to print Vowels and constants
import java.util.*;
public class P2{
    public static void main(String[] args) {
        System.out.print("Enter a String: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int V=0,C=0;
        Vector<Character> consonants = new Vector<>();
        Vector<Character> vowels = new Vector<>();
       
        for(int i =0;i<str.length();i++){
            char ch = str.charAt(i);
            if(Character.isAlphabetic(ch)){
                if(ch=='a'|| ch=='A'||ch=='E'|| ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
                  vowels.add(ch);
                    V++;
                }
                else{
                  consonants.add(ch);
                    C++;
                }
            }
        }
        System.out.println("Vowels are: "+vowels);
        System.out.println("Number of vowels: "+V);
        System.out.println("Constants are : "+ consonants);
        System.out.println("Number of constant: "+C);
    }
}