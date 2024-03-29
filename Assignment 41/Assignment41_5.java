import java.util.Scanner;

public class Assignment41_5 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Please input a string");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Display(str);

        sobj.close();
    }
}

class Pattern
{
    public void Display(String str)
    {
        char Arr[] = str.toCharArray();
        int iRow = Arr.length;
        int iCol = Arr.length;

        for(int i=0; i<iRow; i++)
        {
            for(int j=0; j<iCol; j++)
            {
                if(i>=j)
                {
                    System.out.print(Arr[j] + "\t");
                }
                else
                {
                    System.out.print("#"+"\t");
                }
            }
            System.out.println();
        }

        for(int i=iRow-2; i>=0; i--)
        {
            for(int j=0; j<iCol; j++)
            {
                if(i>=j)
                {
                    System.out.print(Arr[j] + "\t");
                }
                else
                {
                    System.out.print("#"+"\t");
                }
            }
            System.out.println();
        }
    }
}

