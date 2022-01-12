//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PatternLogiC8()
//
// Description   :  program which accept number of rows and number of 
//                  columns from user and display below pattern.
//
// Input         :  Integer
//
// Output        :  Integer
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment37X4R 
{
    public static void main(String[] args) 
    {
        Pattern008 pobj = new Pattern008();
        pobj.Accept();
        pobj.PatternLogiC8();
    }    
}

class GetSet0X9
{   
    public int iNo1 = 0, iNo2 = 0;
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number: ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number: ");
        iNo2 = sobj.nextInt();
    }
}

class Pattern008 extends GetSet0X9
{
    public void PatternLogiC8()
    {    
        int i = 0, j = 0;

        for(i = 1; i <= iNo1; i++)
        {
            for(j = 1; j <= iNo2; j++)
            {
                if((j % 2) == 0)
                {
                    System.out.print("#"+"\t");
                }
                else
                {
                    System.out.print("*"+"\t");
                }
            }
            System.out.println();
        }
    }
}