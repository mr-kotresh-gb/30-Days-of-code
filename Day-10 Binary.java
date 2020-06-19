//source - https://www.hackerrank.com/challenges/30-binary-numbers/problem

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int consec1=0;
        String strBinary = Integer.toString(n, 2);
        // above is binary of given in in string
        String[] strparts = strBinary.split("0");
        //above we get all strings of ones, below find max from them
        for(int i=0;i<strparts.length;i++ )
        {
        if (consec1 < strparts[i].length())
            {consec1 = strparts[i].length();}
        }
    System.out.println(consec1);  //result
    }
}
