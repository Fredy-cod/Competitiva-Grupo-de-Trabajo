import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
      Scanner input = new Scanner(System.in);
      String str = input.nextLine();
      double num = Double.parseDouble(str);
      str = String.format("%.3f", num);
      for (int i = str.length(); i < 7; i++)
        str = " " + str;
      System.out.println(str);
    }
}
