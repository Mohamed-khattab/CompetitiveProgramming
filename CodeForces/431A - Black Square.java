import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String[] values = sc.nextLine().split(" ") ;
        String strips  = sc.nextLine();
        int calories =  0;
        for(int i =0 ; i<strips.length() ;i++){
            char strip = strips.charAt(i) ;
            switch (strip) {
                case '1':
                    calories += Integer.parseInt(values[0]);
                    break;
                case '2':
                    calories += Integer.parseInt(values[1]);
                    break;
                case '3':
                    calories += Integer.parseInt(values[2]);
                    break;
                case '4':
                    calories += Integer.parseInt(values[3]);
            }
        }
        System.out.println(calories);

    }
}
