import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String args[]) {
      Scanner input = new Scanner(System.in);
      BigInteger x = input.nextBigInteger();
      if (x.isProbablePrime(100)) {
		  System.out.println("Primo");
	  } else {
		  System.out.println("Compuesto");
	  }
    }
}
