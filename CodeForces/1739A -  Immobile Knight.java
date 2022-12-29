import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int testCsesNumber = scanner.nextInt();

        for (int k = 0; k <testCsesNumber ; k++) {
            int rows = scanner.nextInt();
            int coloms = scanner.nextInt();
            int i = rows / 2;
            int j = coloms / 2;
            if(rows%2 !=0) i ++;
            if(coloms%2!=0) j++ ;
            if (i - 1 < 0 || i - 2 < 0 || i + 1 > rows || i + 2 > rows) {
                if (j - 1 < 0 || j - 2 < 0 || j + 1 > coloms || j + 2 > coloms) {
                    System.out.println(i + " " + j);
                } else {
                    System.out.println(rows + " " + coloms);
                }
            } else {
                System.out.println(rows + " " + coloms);
            }
        }
    }
}
