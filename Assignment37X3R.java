//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PatternLogiC7()
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

public class Assignment37X3R 
{
    public static void main(String[] args) 
    {
        Pattern007 pobj = new Pattern007();
        pobj.Accept();
        pobj.PatternLogiC7();
    }    
}

class GetSet0X8
{
    public int iNo1 = 0, iNo2 = 0;

    public  void Accept() 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number: ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number: ");
        iNo2 = sobj.nextInt();
    }
}

class Pattern007 extends GetSet0X8
{
    public void PatternLogiC7()
    {   
        int i = 0, j = 0;

        for(i = 1; i <= iNo1; i++)
        {
            for(j = iNo2; j > 0; j--)
            {
                System.out.print(j+"\t");
            }   
            System.out.println();
        }
    }
}