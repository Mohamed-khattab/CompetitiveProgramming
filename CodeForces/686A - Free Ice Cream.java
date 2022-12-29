import java.util.Scanner;
import java.util.SplittableRandom;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String[] info = sc.nextLine().trim().split(" ");
        int n = Integer.parseInt(info[0]);
        int x = Integer.parseInt(info[1]);


        long [] action = new long[n];
        for (int i = 0; i <n ; i++) {
            action[i] = Integer.parseInt(sc.nextLine().replaceAll(" ",""));
        }

        long iceCreamPacks = x ; int distressBoys = 0 ;
        for (int i = 0; i <n; i++) {
            if(iceCreamPacks + action[i] >=0 ){
                iceCreamPacks += action[i];
            }
            else {
                distressBoys++;
            }
        }
        System.out.println(iceCreamPacks+" "+distressBoys);
    }
}
