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

    public void DisplayAll()
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

    public void Display()
    {
        System.out.println("Numbers divisible by 5 :");
        for(int iCnt=0; iCnt<Arr.length; iCnt++)
        {
           if(Arr[iCnt] % 5 == 0)
           {
            System.out.print(Arr[iCnt] + "\t");
           } 
        }
        System.out.println();
    }
}
public class Assignment34_2 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please enter the number of elements");
        int iSize = sobj.nextInt();

        ArrayDemo aobj = new ArrayDemo(iSize);
        aobj.Accept();
        aobj.DisplayAll();
        aobj.Display();

        sobj.close();
    }
}
