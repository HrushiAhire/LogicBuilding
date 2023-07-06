import java.util.*;

class StringDemo
{
    public String Reverse(String str)
    { 
        char Arr[] = str.toCharArray();

        int iStart = 0;
        int iEnd = Arr.length-1;
        char cTemp = ' ';

        while(iStart < iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;
            iEnd--;
        }
        return new String(Arr);
    }
}
public class Assignment33_5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the string");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        String sRet = obj.Reverse(str);
        System.out.println("Reversed string is : " + sRet);

        sobj.close();

    }
}