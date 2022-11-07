import java.util.*;

class GradeTheSteel {

    public static void grade(int h, double cc, int ts)
    {
        boolean cond1=false,cond2=false,cond3=false;
        if(h>50){
            cond1=true;
        }
        if(cc<0.7){
            cond2=true;
        }
        if(ts>5600){
            cond3=true;
        }
        if(cond1 && cond2 && cond3){
            System.out.println(10);
        }
        else if(cond1 && cond2){
            System.out.println(9);
        }
        else if(cond1 && cond3){
            System.out.println(7);
        }
        else if(cond2 && cond3){
            System.out.println(8);
        }
        else if(cond1 || cond2 || cond3){
            System.out.println(6);
        }
        else{
            System.out.println(5);
        }
    }
    public static void main(String args[]){
        //Hardness must be greater than 50.
        //Carbon content must be less than 0.7.
        //Tensile strength must be greater than 5600.

        Scanner sc = new Scanner(System.in);
        int TestCase = sc.nextInt();
        for(int i=0;i<TestCase;i++){

            int Hardness = sc.nextInt();
            double Carbon = sc.nextDouble();
            int Tensile = sc.nextInt();
            grade(Hardness, Carbon, Tensile);
        }
    }    
}
