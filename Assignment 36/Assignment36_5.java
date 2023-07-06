import java.util.Scanner;

class Numbers
{
    public int Arr[];

    public Numbers(int iSize)
    {
        Arr = new int[iSize];
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

    public void DisplayAll()
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
    public Array(int iSize)
    {
        super(iSize);
    }

    public int oddProduct()
    {
        int iProduct = 1;
        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt]%2 != 0)
            {
                iProduct = iProduct * Arr[iCnt];
            }  
        }
        return iProduct;
    }
}
public class Assignment36_5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements");
        int iSize = sobj.nextInt();

        Array aobj = new Array(iSize);
        aobj.Accept();
        aobj.DisplayAll();

        int iRet = aobj.oddProduct();
        System.out.println("Product of all odd numbers in array is : " + iRet);
        
        sobj.close();   
    }
}
