import java.util.*;

class StringDemo
{
    public boolean CheckVowels(String str)
    {
        boolean bFlag = false;
        char Arr[] = str.toCharArray();
        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] == 'A' || Arr[iCnt] == 'E' || Arr[iCnt] == 'I' || Arr[iCnt] == 'O' || 
            Arr[iCnt] == 'U' || Arr[iCnt] == 'a' || Arr[iCnt] == 'e' || Arr[iCnt] == 'i' || 
            Arr[iCnt] == 'o' || Arr[iCnt] == 'u')
            {
                bFlag = true;
            }
        }
        return bFlag;
    }
}
public class Assignment33_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the string");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        boolean bRet = obj.CheckVowels(str);
        if(bRet == true)
        {
            System.out.println("String contains vowels in it");
        }
        else
        {
            System.out.println("String does not contain vowels in it");
        }
        sobj.close();

    }
}