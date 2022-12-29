import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        char[] alphabet = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        int var = 0;
        String pass = "";
        while (var != n) {
            while (var < k) {
            char newChar = alphabet[var];
            pass += newChar;
            var++;
            }
            for (int i = 0; i <n-k ; i++) {
                pass += pass.charAt(i);
                var++;
            }
        }

        System.out.println(pass);

    }
}
