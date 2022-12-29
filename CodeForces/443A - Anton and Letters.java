import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        List<String> letters = new ArrayList<>();
        letters = List.of(sc.nextLine().replaceAll("\\{|\\ |\\}", "").split(","));

        Set<String> copy = new LinkedHashSet<>();
        copy.addAll(letters) ;


        if (!(copy.toArray()[0].toString().length()==0)) {
            System.out.println(copy.size());
        } else
            System.out.println(0);
    }
}
