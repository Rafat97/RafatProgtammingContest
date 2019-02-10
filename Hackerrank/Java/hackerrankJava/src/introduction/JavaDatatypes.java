
package introduction;

import java.util.Scanner;
import java.io.*;

public class JavaDatatypes {
    public static void main(String []argh)
    {
        
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();

        for(int i=0;i<t;i++)
        {

            try
            {
                long number = sc.nextLong();
                System.out.println(number+" can be fitted in:");
                if(number >= -128 && number <= 127)
                        System.out.println("* byte");
                if(number >=  -Math.pow(2, 15) && number <= (Math.pow(2, 15) - 1))
                        System.out.println("* short");
                if(number >=  Math.pow(-2, 31) && number <= (Math.pow(2,31) - 1) )
                        System.out.println("* int");
                if(number >= Math.pow(-2, 63) && number <= (Math.pow(2, 63)-1))
                        System.out.println("* long");
            }
            catch(Exception e)
            {
                System.out.println(sc.next()+" can't be fitted anywhere.");
            }

        }
    }
}
