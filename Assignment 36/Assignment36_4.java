import java.util.Scanner;

class Numbers
{
    public int Arr[];
    public int Start;
    public int End;

    public Numbers(int iSize, int iStart, int iEnd)
    {
        Arr = new int[iSize];
        Start = iStart;
        End = iEnd;
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
    public Array(int iSize, int iStart, int iEnd)
    {
        super(iSize, iStart, iEnd);
    }

    public void Display()
    {
        System.out.println("Numbers in the given range are : ");
        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] > Start && Arr[iCnt] < End)
            {
                System.out.print(Arr[iCnt] + "\t");
            }   
        }
        System.out.println();
    }
}
public class Assignment36_4 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements");
        int iSize = sobj.nextInt();

        System.out.println("Enter the starting range number");
        int iStart = sobj.nextInt();

        System.out.println("Enter the ending range number");
        int iEnd = sobj.nextInt();

        Array aobj = new Array(iSize, iStart, iEnd);
        aobj.Accept();
        aobj.DisplayAll();
        aobj.Display();
        sobj.close();   
    }
}
