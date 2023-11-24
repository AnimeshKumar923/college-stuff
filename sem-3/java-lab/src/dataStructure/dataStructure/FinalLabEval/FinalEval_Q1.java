package dataStructure.FinalLabEval;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.*;

public class FinalEval_Q1 {
    public static void main(String[] args) throws IOException
	{
		BufferedReader input=new BufferedReader(new InputStreamReader(System.in));
		String[] s;
		int t;
		int i,n;
		BigInteger c=new BigInteger("0");
		ArrayList<BigInteger> arr;
		t=Integer.parseInt(input.readLine());
		while(t-->0)
		{
			c=BigInteger.ZERO;
			n=Integer.parseInt(input.readLine());
			arr=new ArrayList<BigInteger>(n);
			s=input.readLine().split(" ");
			for(i=0;i<s.length;i++)
			{
				arr.add(i, new BigInteger(s[i]));
			}
			Collections.sort(arr,Collections.reverseOrder());
			for(i=0;i<s.length;i++)
			{
				if(i%2==0)
				{
					c=c.add(arr.get(i));
				}
			}
			System.out.println(c.toString()); 
		}
			
	}
}
