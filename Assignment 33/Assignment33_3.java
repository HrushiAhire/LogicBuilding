import java.util.*;

class StringDemo
{
    public int CountDiff(String str)
    {
        int iCountCapital = 0;
        int iCountSmall = 0;

        char Arr[] = str.toCharArray();
        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                iCountCapital++;
            }
            else if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                iCountSmall++;
            }
        }
        return iCountSmall-iCountCapital;
    }
}
public class Assignment33_3
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the string");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        int iRet = obj.CountDiff(str);
        System.out.println("Difference between number of capital and small letters in string : " + iRet);

        sobj.close();

    }
}