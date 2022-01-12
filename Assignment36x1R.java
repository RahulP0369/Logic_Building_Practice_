//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  PatternLogic()
//
// Description   :  Java program which accept number of rows and number of columns 
//                  from user and display below pattern.
//
// Input         :  Integer
//
// Output        :  char
//
// Author        :  Rahul Patil
//
//////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

public class Assignment36x1R 
{
    public static void main(String[] args) 
    {
        Pattern pobj = new Pattern();
        pobj.Accept();
        pobj.PatternLogic();

    }    
}

class GetSet0X1
{   
    public int iNo1, iNo2;
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter First number: ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number: ");
        iNo2 = sobj.nextInt();
    }
}

class Pattern extends GetSet0X1
{
    public void PatternLogic()
    {
        int i = 0, j = 0;
        char c = 'A';

        for(i = 1; i <= iNo1; i++)
        {
            for(j = 1, c = 'A'; j <= iNo2; j++,c++)
            {
                System.out.print(c + " ");
            }
            System.out.println();
        }
    }
}