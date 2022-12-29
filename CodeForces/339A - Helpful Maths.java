import java.util.Arrays;
import java.util.Scanner;

public class HelloWorld {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String line = scanner.nextLine();

        String[] numbersstr = line.split("\\+") ;
        int[] numbers = new int[numbersstr.length];

        for (int i = 0; i < numbersstr.length ; i++) {
            numbers[i] = (Integer.valueOf(numbersstr[i]));
        }

        Arrays.sort(numbers);
        for (int i = 0; i < numbers.length ; i++) {
            System.out.print(numbers[i]);
            if( (numbers.length -1 )== i ){
                break;
            }
            System.out.print("+");
        }

    }

}
