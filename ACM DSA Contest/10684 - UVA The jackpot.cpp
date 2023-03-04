import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            int[] b = new int[t];
            for (int i = 0; i < t; i++) {
                b[i] = sc.nextInt();
            }

            int mx = 0, cur = 0;

            for (int i = 0; i < t; i++) {
                cur = Math.max(cur + b[i], b[i]);
                mx = Math.max(mx, cur);

            }

            if (mx > 0) {
                System.out.println("The maximum winning streak is " + mx + ".");
            } else {
                System.out.println("Losing streak.");
            }


            t = sc.nextInt();
        }

        sc.close();

    }

}
