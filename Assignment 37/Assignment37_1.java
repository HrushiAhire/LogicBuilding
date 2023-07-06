import java.util.Scanner;

class StringDemo
{
    public String strNCatX(String src, String dest, int iNo)
    {
        char Arr[] = src.toCharArray();
        char Brr[] = dest.toCharArray();

        if(iNo > Brr.length)
        {
            iNo = Brr.length;
        }
        int iLength = Arr.length + iNo;
        
        char Crr[] = new char[iLength];
        int i = 0;
        for(int iCnt=0; iCnt <iNo; iCnt++)
        {
            Crr[i] = Brr[iCnt];
            i++;
        }
        String str = new String(Crr);
        return(src + " " + str); 
    }
}
public class Assignment37_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the First string");
        String str1 = sobj.nextLine();

        System.out.println("Enter the Second string");
        String str2 = sobj.nextLine();

        System.out.println("Enter number of charaters you want to concat from second string");
        int iNo = sobj.nextInt();

        StringDemo obj = new StringDemo();
        String sRet = obj.strNCatX(str1, str2, iNo);
        System.out.println("Concatenated strings are : " + sRet);

        sobj.close();
    }
}
