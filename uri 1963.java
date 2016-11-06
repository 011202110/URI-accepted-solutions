import java.io.IOException;
import java.util.*;
import java.lang.*;
import java.io.*;
public class Main {

    public static void main(String[] args) throws IOException {
 	    Scanner in = new Scanner(System.in);
        float a, b;
        a = in.nextFloat();
        b = in.nextFloat();
        System.out.println(String.format("%.02f",(b-a)/a*100 )+ "%");

    }
}
