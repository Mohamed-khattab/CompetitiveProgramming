import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int c  = Integer.parseInt(sc.nextLine());

        String[] context = sc.nextLine().split(" ");
        int min , max ;
        int count =0 ;
        min =max =  Integer.parseInt(context[0]);
        for (int i = 1; i < context.length ; i++) {
            if (Integer.parseInt(context[i]) > max){
                count++;
                max = Integer.parseInt(context[i]) ;
            }
            if (Integer.parseInt(context[i]) < min ){
                count++;
                min = Integer.parseInt(context[i]) ;
            }

        }
        System.out.println(count );

    }
}
