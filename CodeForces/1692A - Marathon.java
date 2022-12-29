import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);



        int t = Integer.parseInt(sc.nextLine());

        int[] res = new int[t];
        String[] marathon;
        for (int i = 0; i <t ; i++) {
            marathon = sc.nextLine().split(" ") ;

            for (int j = 1; j <4 ; j++) {
                if(Integer.parseInt(marathon[j]) >Integer.parseInt( marathon[0]))
                    res[i] ++;
            }
        }

        for (int i = 0; i <t ; i++) {
            System.out.println(res[i]);
        }

    }
}
