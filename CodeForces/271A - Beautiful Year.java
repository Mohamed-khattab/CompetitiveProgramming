import javax.swing.*;
import java.util.*;

public class Main {

    public static void  check(int year) {
        boolean flag = false ;
        while (!flag) {
            String val = Integer.toString(year);
            int i;
            for (i = 0; i < val.length(); i++) {
                char f = val.charAt(i);
                String copy = val.replaceFirst(String.valueOf(f),"");
                int x = copy.indexOf(f) ;
                if (x >= 0)
                    break;
            }
            if (i == val.length()){
                flag= true ;
                System.out.println(year);
            }

            else
                year = Integer.parseInt(val)+1 ;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        year+=1 ;
        check(year);

    }
}
