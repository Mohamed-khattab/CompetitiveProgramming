import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int participanteNumber = scanner.nextInt();
        int criticalParticipantIndex = scanner.nextInt();

        int[] scores = new int[participanteNumber];
        int count =0 ;
        for (int i = 0; i <participanteNumber ; i++) {
                scores[i]  = scanner.nextInt();
        }
        for (int i = 0; i <participanteNumber ; i++) {
            if ((scores[i] >= scores[criticalParticipantIndex -1])&& scores[i] !=0 ) {
                count++;
            }
        }
        System.out.println(count);

            }
}
