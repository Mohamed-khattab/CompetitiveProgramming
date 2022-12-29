import java.util.*;
import java.util.List;



public class Main {

public static <E> void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    int n =Integer.parseInt(sc.nextLine()) ;
    List<Point> positiveTrees = new ArrayList<Point>() ;
    List<Point> negativeTrees = new ArrayList<Point>() ;
    int x ; int a ;
    for (int i = 0; i <n ; i++) {
        x = sc.nextInt();
        a = sc.nextInt();
        if(x < 0)
            negativeTrees.add(new Point(x,a)) ;
        else
            positiveTrees.add(new Point(x,a)) ;
    }

    Collections.sort(positiveTrees);
    Collections.sort(negativeTrees);

    int apples = 0 ;

    if (positiveTrees.size() == negativeTrees.size()) {
        int m =positiveTrees.size() ;
        for (int i = 0; i <m  ; i++) {
            apples += positiveTrees.get(i).y + negativeTrees.get(i).y ;
        }
    }
    else if(positiveTrees.size() > negativeTrees.size())
    {
        int m = negativeTrees.size();
        apples += positiveTrees.get(0).y ;
        for (int i = 0; i <negativeTrees.size(); i++) {
            apples += positiveTrees.get(i+1).y + negativeTrees.get(m-i-1).y ;
        }
    }
    else if ( negativeTrees.size() > positiveTrees.size())
    {
        int m = negativeTrees.size() ;
        apples += negativeTrees.get(m-1).y ;
        for (int i = 0; i < positiveTrees.size() ; i++) {
            apples += positiveTrees.get(i).y + negativeTrees.get(m-i-2).y ;
        }
    }
    System.out.println(apples);
    }
}


class Point implements Comparable<Point>{
public  int x ;
public  int y ;
public Point(int x, int y) {
    this.x = x;
    this.y = y;
}
public int compareTo( Point other){
    return (x != other.x) ? x - other.x : y - other.y;
}
}
