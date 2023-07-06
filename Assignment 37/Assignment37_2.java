import java.util.Scanner;

class StringDemo
{
    public boolean  strCmp(String src, String dest)
    {
        boolean bFlag = false;

        char Arr[] = src.toCharArray();
        char Brr[] = dest.toCharArray();

        for(int iCnt=0; iCnt <Arr.length; iCnt++)
        {
            if((Arr[iCnt] == Brr[iCnt]) && (Arr.length == Brr.length))
            {
                bFlag = true;
            }
        }
        return bFlag;
    }
}
public class Assignment37_2 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the First string");
        String str1 = sobj.nextLine();

        System.out.println("Enter the Second string");
        String str2 = sobj.nextLine();

        StringDemo obj = new StringDemo();
        boolean bRet = obj.strCmp(str1, str2);

        if(bRet == true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
        sobj.close();
    }
}
