/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package introduction;

import java.util.*;

public class JavaLoopsII {
    public static void main(String[] args) {
        
        Scanner UserInput = new Scanner(System.in);
        
        int T = 0, a = 0, b = 0, n = 0,val = 0;
        
        T = UserInput.nextInt();
        
        for(int i = 0;i<T;i++){
            a = UserInput.nextInt();
            b = UserInput.nextInt();
            n = UserInput.nextInt();
            val = a;
            for(int j = 0;j<n;j++){
                val += (int) ( (Math.pow(2, j) * b)) ;
                System.out.print(val + " ");
            }
            System.out.print("\n");
        }      
    }

   
}
