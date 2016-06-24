  public class Armstrongnumber{
  public static void main(String[] args) 
  {  
    int sum=0,temp,a;  
    int n=371;
    temp=n;  
    while(n>0)  
    {  
    a=n%10;  
    n=n/10;  
    sum=sum+(a*a*a);  
    }  
    if(temp==sum)  
    System.out.println("This is an armstrong number");   
    else  
    System.out.println("This is a Not armstrong number");   
   }  
}  
