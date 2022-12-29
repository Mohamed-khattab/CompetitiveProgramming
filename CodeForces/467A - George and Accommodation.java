

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {



        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());

        int p , q,count =0 ;
        for (int i = 0; i <n ; i++) {

                p = sc.nextInt();
                q = sc.nextInt();
            if( q-p  >=2)
                count ++ ;
        }
        System.out.println(count);
    }
}
