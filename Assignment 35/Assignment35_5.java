import java.util.Scanner;

class Digit
{
    public int Count(int iNo)
    {
        int iSumEven = 0;
        int iSumOdd = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo%10;
            if(iDigit%2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }
            iNo = iNo/10;
        }
        return iSumEven-iSumOdd;
    }
}
public class Assignment35_5 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the number");
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.Count(iNo);
        System.out.println("Difference between summation of even and odd digits is : "+ iRet);

        sobj.close();
    }
}
