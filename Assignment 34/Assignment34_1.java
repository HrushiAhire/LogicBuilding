import java.util.Scanner;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the numbers");
        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    public void Display()
    {
        System.out.println("Entered numbers are : ");
        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt] +"\t");
        }
        System.out.println();
    }
}

class ArrayDemo extends ArrayX
{
    public ArrayDemo(int iSize)
    {
        super(iSize);
    }

    public int Difference()
    {
        int iSumEven = 0;
        int iSumOdd = 0;

        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iSumEven = iSumEven + Arr[iCnt];
            }
            else if((Arr[iCnt] % 2) != 0)
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }
        }
        return iSumEven-iSumOdd;
    }
}
public class Assignment34_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter the number of elements");
        int iSize = sobj.nextInt();

        ArrayDemo aobj = new ArrayDemo(iSize);
        aobj.Accept();
        aobj.Display();

        int iRet = aobj.Difference();
        System.out.println("Difference between summation of odd and even numbers : "+ iRet);

        sobj.close();
    }
}
