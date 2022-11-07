import java.util.*;

class GreedyPuppy {
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);

        int TestCase = sc.nextInt();
        for(int i=0; i<TestCase; i++){
            int Coins = sc.nextInt();
            int People = sc.nextInt();
            int Max=0;
            for(int j=1; j<=People; j++){
                int q = Coins%j;
                Max = Math.max(q,Max);
            }
            System.out.println(Max);
        }
    }
}