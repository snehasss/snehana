import java.util.Scanner;

class Practice
{
 public static void main(String[] args)
  {
   Scanner in = new Scanner(System.in);
   System.out.println("Input a letter"); 
   String line = in.nextLine();
   char c = line.charAt(0);
   if( Character.isDigit(c))
   System.out.printf("%s Is a digit",c);
   else if (Character.isLetter(c))
   System.out.printf("\n%s Is a Letter",c);
  }

}
