//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PatternLogiC9()
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

public class Assignment37X5R 
{
    public static void main(String[] args) 
    {
        Pattern009 pobj = new Pattern009();
        pobj.Accept();
        pobj.PatternLogiC9();
    }    
}

class GetSet0X10
{   
    public int iNo1 = 0, iNo2 = 0;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number: ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Nuber: ");
        iNo2 = sobj.nextInt();
    }
}

class Pattern009 extends GetSet0X10
{
    public void PatternLogiC9()
    {
        int i = 0, j = 0;
        for(i = 1; i <= iNo1; i++)
        {
            for(j = 1; j <= iNo2; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
    }
}