import java.io.IOException;
import java.util.*;
import java.lang.*;
import java.io.*;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) throws IOException {


        Scanner in = new Scanner(System.in);
        int casos = in.nextInt();
        Date d1, d2;
         Calendar cal = Calendar.getInstance();
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
        sdf.setTimeZone(TimeZone.getTimeZone("UTC"));
        for (int i = 0; i < casos; i++) {
            try {
                d2 = sdf.parse(in.next());
                d1 = sdf.parse(in.next());
                long diferencaDias = (d2.getTime() - d1.getTime()) / (1000 * 60 * 60 * 24);
                System.out.println(Math.abs(diferencaDias));
            } catch (Exception e) {
            }
        }
    }
}
