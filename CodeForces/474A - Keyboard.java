import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./" ;

        Scanner sc = new Scanner(System.in);
        String direction = sc.nextLine() ;
        String inwords  = sc.nextLine();
        String outWords="" ;
        int dir = direction.equals("R")? -1: 1 ;
        for (int i = 0; i <inwords.length() ; i++) {
            outWords += keyboard.charAt(keyboard.indexOf(inwords.charAt(i))+dir) ;
        }
        System.out.println(outWords);
    }
}
