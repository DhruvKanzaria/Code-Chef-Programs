import java.util.*;

class GrossSalary {
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);
        int TestCase = sc.nextInt();

        for(int i=0;i<TestCase;i++){
            int BaseSalary =sc.nextInt();

            if(BaseSalary < 1500){
                float HRA = BaseSalary*0.1f;
                float DA = BaseSalary*0.9f;
                float GrossSalary = (BaseSalary + HRA + DA);
                System.out.println(GrossSalary);
            }
            else{
                float HRA = 500;
                float DA = BaseSalary*0.98f;
                float GrossSalary = (BaseSalary + HRA + DA);
                System.out.println(GrossSalary);
            }
        }
    }
}
