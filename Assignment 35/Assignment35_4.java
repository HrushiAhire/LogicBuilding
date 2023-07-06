import java.util.Scanner;

class Digit
{
    public int Count(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo%10;
            if(iDigit != 0)
            {
                iMult = iMult * iDigit;
            }
            iNo = iNo/10;
        }
        return iMult;
    }
}
public class Assignment35_4 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the number");
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.Count(iNo);
        System.out.println("Multiplication of all digits of number : "+ iRet);

        sobj.close();
    }
}
