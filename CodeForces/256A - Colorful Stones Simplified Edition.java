import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String stones = sc.nextLine() ;
        String instruction =sc.nextLine() ;


        int placeIndex =0;
        for (int i = 0; i <instruction.length() ; i++) {

            if(instruction.charAt(i)==stones.charAt(placeIndex))
                placeIndex ++ ;

        }
        System.out.println(placeIndex+1);

    }
}
