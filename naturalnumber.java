public class Naturalnumber
{
    public static void main(String args[])
    {
        int num, i = 1 ;
        int sum = 0;
        System.out.println("Enter a number:");
        Scanner s = new Scanner(System.in);
        num = s.nextInt();
        while(i <= num)
        {
            sum = sum +i;
            ++i;
        }
        System.out.println("Sum of "+num+" numbers is :"+sum);
    } 
}
