import java.awt.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());  // number of wires

        String [] input = sc.nextLine().trim().split(" ") ;
        int []birdsOnWire = new int[n] ;
        for (int i = 0; i <n ; i++) {
            birdsOnWire[i] = Integer.parseInt(input[i]) ;
        }

        int m = Integer.parseInt(sc.nextLine());   // number if shots
        List<Point> shots = new ArrayList<>();  // for thr place of shot
        for (int i = 0; i < m; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt() ;
            shots.add(new Point(x,y));
        }

        for (int i = 0; i <m ; i++) {   // I here mean the i th shot
            int birds = birdsOnWire[shots.get(i).x-1];
            birdsOnWire[shots.get(i).x -1] =0;
            if(shots.get(i).x > 1 ){
                birdsOnWire[shots.get(i).x -2 ]+= shots.get(i).y-1 ;
            }
            if(shots.get(i).x < n){
                birdsOnWire[shots.get(i).x]+= (birds - shots.get(i).y);
            }
        }
        for (int i = 0; i <n ; i++) {
            System.out.println(birdsOnWire[i]);
        }

    }
}
