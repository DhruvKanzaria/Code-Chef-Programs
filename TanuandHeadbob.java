import java.util.*;

class TanuandHeadbob {
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);
        int TestCase = sc.nextInt();

        for(int i=0; i<TestCase; i++){
            
            int N = sc.nextInt();
            String s = sc.next(); 
            int flag=0;
            for(int j=0; j<N; j++){

                if(s.charAt(j)=='I'){
                    System.out.println("INDIAN");
                    break;
                }
                else if(s.charAt(j)=='Y'){
                    System.out.println("NOT INDIAN");
                    break;
                }
                flag++;
            }
            if(flag == N){
                System.out.println("NOT SURE");
            }
        }
    }    
}
