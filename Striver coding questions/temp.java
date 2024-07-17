import java.util.*;
public class temp{
    public static void kadane(int arr[]){
        int consum=0;
        int maxsum=Integer.MIN_VALUE;

        for(int i=0;i<arr.length;i++){

            consum=consum+arr[i];

            if(consum<0){
                consum=0;
            }
            maxsum=Math.max(consum,maxsum);

        }
        System.out.println("Maxsum : "+maxsum);
    }
    public static void main(String args[]){

        int arr[]={-1,2,-3,4,7,5,-2};
        kadane(arr);
    }
}
