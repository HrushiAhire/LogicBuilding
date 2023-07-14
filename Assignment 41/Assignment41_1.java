import java.util.Scanner;

class Pattern
{
    public int iRow;
    public int iCol;

    public Pattern(int X, int Y)
    {
        iRow = X;
        iCol = Y;
    }
    public void Display(String str)
    {
        char Arr[] = str.toCharArray();

        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                if(i <= j)
                {
                    System.out.print("*" + "\t");                  
                }
                else
                {
                    System.out.print(Arr[j] + "\t");
                }
            }
            System.out.println();
        }
    }
}

public class Assignment41_1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0;
        int iCol = 0;
        String str = "";

        System.out.println("Please input the string");
        str = sobj.nextLine();

        System.out.println("Enter number of rows");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns");
        iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow, iCol);
        pobj.Display(str);

        sobj.close();
    }
}