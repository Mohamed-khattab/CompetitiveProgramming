import java.awt.*;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
//        List<Point> friends = new ArrayList<>();
        int [] friends = new int[n];
        for (int i = 0; i <n ; i++) {
            friends[i] = sc.nextInt();
        }
        int j ,i ;
        for ( i = 1; i <= n ; i++) {
            for ( j = 1; j <=n ; j++) {
                if (friends[j-1] == i)
                    break;
            }
            System.out.print(j+" ");
        }

    }
}
