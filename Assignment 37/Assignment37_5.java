import java.util.Scanner;

class StringDemo
{
    public boolean Palindrome(String str)
    {
        char Arr[] = str.toCharArray();
        boolean bFlag = true;
        int iStart = 0;
        int iEnd = Arr.length-1;

        while(iStart < iEnd)
        {
            if(Arr[iStart] != Arr[iEnd])
            {
                if(Arr[iStart] >= 'a' && Arr[iStart] <= 'z')
                {
                    if(Arr[iStart] != (char)(Arr[iEnd]+32))
                    {
                        bFlag = false;
                    }
                }
                else if(Arr[iStart] >= 'A' && Arr[iStart] <= 'Z')
                {
                    if(Arr[iStart] != (char)(Arr[iEnd]-32))
                    {
                        bFlag = false;
                    }
                }
                else
                {
                    bFlag = false;
                }
            }

            iStart++;
            iEnd--;
        }
        return bFlag;
    }
}
public class Assignment37_5 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();
        boolean bRet = obj.Palindrome(str);

        if(bRet == true)
        {
            System.out.println("String is palindrome");
        }
        else
        {
            System.out.println("String is not palindrome");
        }

        sobj.close();
    }
}
