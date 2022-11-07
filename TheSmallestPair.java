import java.util.*;

class TheSmallestPair{
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);    
        int a = sc.nextInt();                   
        
        for(int i=0;i<a;i++){                   

            int b = sc.nextInt();               
            int array[] = new int[b];

            for(int j=0;j<b;j++){           
                array[j] = sc.nextInt();
            }
            int temp = 0;
            for(int k=0;k<b;k++){
                for(int l=1;l<= (b-1);l++){
                    if(array[l-1] > array[l]){
                        temp = array[l-1];
                        array[l-1] = array[l];
                        array[l] = temp;
                    }
                }
            }
            System.out.println(array[0] + array[1]);
        }      
    }
}