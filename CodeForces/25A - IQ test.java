import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        int[] numbers = new int[n];
        for (int i = 0; i < n; i++) {
            numbers[i] = sc.nextInt();
        }
        int StrangeIndex = 0;
        for (int i = 1; i < n; i++) {
            if (numbers[i] % 2 == numbers[StrangeIndex] % 2)
                StrangeIndex = i;
            else {
                if (StrangeIndex  == 0 && numbers[i]%2 == numbers[i+1]%2 ) {
                    System.out.println(StrangeIndex + 1);
                    break;
                } else{
                    System.out.println(StrangeIndex + 2);
                        break;

                }
            }
            }
        }
    }
