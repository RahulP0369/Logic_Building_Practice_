//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PatternLogiC5()
//
// Description   :  program which accept number of rows and number of 
//                  columns from user and display below pattern
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment37X1R 
{
    public static void main(String[] args) 
    {
        Pattern005 pobj = new Pattern005();
        pobj.Accept();
        pobj.PatternLogiC5();
    }    
}

class GetSet0X6
{
    public int iNo1 = 0, iNo2 = 0;
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First No: ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number: ");
        iNo2 = sobj.nextInt();
    }
}
class Pattern005 extends GetSet0X6
{
    public void PatternLogiC5()
    {
        int i = 0, j = 0;
        for(i = 1; i <= iNo1; i++ )
        {
            for(j = 1; j <= iNo2; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}