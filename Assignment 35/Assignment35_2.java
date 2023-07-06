import java.util.Scanner;

class Digit
{
    public int Count(int iNo)
    {
        int iCount = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo%10;
            if(iDigit%2 != 0)
            {
                iCount++;
            }
            iNo = iNo/10;
        }
        return iCount;
    }
}
public class Assignment35_2 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the number");
        int iNo = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.Count(iNo);
        System.out.println("Count of odd digits is : "+ iRet);

        sobj.close();
    }
}
