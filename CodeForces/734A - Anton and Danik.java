import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine()) ;
        String streem = sc.nextLine();
        int Acount =0 ;
        int Dcount =0 ;
        for (int i =0 ; i<streem.length();i++){
            if(streem.charAt(i)=='A')
                Acount ++ ;
            else if (streem.charAt(i)=='D')
                Dcount ++ ;
        }
        if (Acount>Dcount)
            System.out.println("Anton");
        else if (Acount==Dcount) {
            System.out.println("Friendship");
        }else
            System.out.println("Danik");

    }
