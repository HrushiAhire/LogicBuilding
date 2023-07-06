import java.util.*;

class StringDemo
{
    public int CountSmall(String str)
    {
        int iCount = 0;

        char Arr[] = str.toCharArray();
        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}
public class Assignment33_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the string");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        int iRet = obj.CountSmall(str);
        System.out.println("Number of small letters in string : " + iRet);

        sobj.close();

    }
}