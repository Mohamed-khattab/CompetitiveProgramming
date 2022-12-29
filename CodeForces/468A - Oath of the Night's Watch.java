import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine()) ;

        List< Integer> sweetwards = new ArrayList<>() ;

        for (int i = 0; i <n ; i++) {
            sweetwards.add(sc.nextInt()) ;
        }
        Collections.sort(sweetwards);
        sweetwards.removeAll(Collections.singleton(sweetwards.get(n - 1)));
        if(!sweetwards.isEmpty()) {
            sweetwards.removeAll(Collections.singleton(sweetwards.get(0)));
        }
        System.out.println(sweetwards.size());

    }
}
