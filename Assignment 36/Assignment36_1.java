import java.util.Scanner;

class Numbers
{
    public int Arr[];
    public int iNo;

    public Numbers(int iSize, int iSearch)
    {
        Arr = new int[iSize];
        iNo = iSearch;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the numbers");
        for(int iCnt=0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Entered Numbers are : ");
        for(int iCnt=0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt] + "\t");
        }
        System.out.println();
    }
}

class Array extends Numbers
{
    public Array(int iSize, int iSearch)
    {
        super(iSize, iSearch);
    }

    public boolean CheckNumber()
    {
        boolean bFlag = false;
        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
                bFlag = true;
            }
        }
        return bFlag;
    }
}
public class Assignment36_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements");
        int iSize = sobj.nextInt();

        System.out.println("Enter the number whose presence you want to check");
        int iSearch = sobj.nextInt();

        Array aobj = new Array(iSize, iSearch);
        aobj.Accept();
        aobj.Display();
        boolean bRet = aobj.CheckNumber();

        if(bRet == true)
        {
            System.out.println("Number is present in array");
        }
        else
        {
            System.out.println("Number is not present in array");
        }
        
        sobj.close();   
    }
}
