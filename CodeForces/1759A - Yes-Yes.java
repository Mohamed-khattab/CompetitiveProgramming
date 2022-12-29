import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Stream;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        List<String> streams = new ArrayList<>();
        for (int i = 0; i <n ; i++) {
            streams.add(sc.nextLine());
        }
        String message = "Yes";
        int i, j ;
        for ( i = 0; i <n ; i++) {
            int index = message.indexOf(streams.get(i).charAt(0));
            for ( j = 0; j <streams.get(i).length() ; j++) {    // j maps for the char of the word
                if( message.indexOf(streams.get(i).charAt(j)) >=0){
                    char currentChar = message.charAt((index+j)%3) ;
                    if (!(streams.get(i).charAt(j)== currentChar))
                        break;
                }else {
                    break;
                }
            }

            if(j ==streams.get(i).length())
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
}
