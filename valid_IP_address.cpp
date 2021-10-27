// Java Program to generate all possible
// valid IP addresses from given string
import java.util.*;

class GFG
{
	public static ArrayList<String> list;
	
	// Function to restore Ip Addresses
	public static ArrayList<String>
	restoreIpAddresses(String s)
	{
		int n = s.length();
		list = new ArrayList<>();
		if (n < 4 || n > 12)
			return list;
		
		// initialize the dp array
		int dp[][] = new int[4][n];
		for (int i = 0; i < 4; i++)
		{
			for (int j = n - 1; j >= 0; j--)
			{
				if (i == 0)
				{
					// take the substring
					String sub = s.substring(j);
					if (isValid(sub))
					{
						dp[i][j] = 1;
					}
					else if (j < n - 3)
					{
						break;
					}
				}
				else
				{
					if (j <= n - i)
					{
						for (int k = 1;
							k <= 3 && j + k <= n;
							k++)
						{
							String temp
								= s.substring(j, j + k);
							if (isValid(temp))
							{
								if (j + k < n
									&& dp[i - 1][j + k]
										== 1)
								{
									dp[i][j] = 1;
									break;
								}
							}
						}
					}
				}
			}
		}
		
		if (dp[3][0] == 0)
			return list;
		
		
		// Call function createfromDp
		createIpFromDp(dp, 3, 0, s, "");
		return list;
	}
	
	public static void createIpFromDp(int dp[][],
									int r,
									int c, String s,
									String ans)
	{
		if (r == 0)
		{
			ans += s.substring(c);
			list.add(ans);
			return;
		}
		for (int i = 1;
			i <= 3 && c + i < s.length();
			i++)
		{
			if (isValid(s.substring(c, c + i))
				&& dp[r - 1] == 1)
			{
				createIpFromDp(dp, r - 1, c + i, s,
							ans +
							s.substring(c, c + i)
							+ ".");
			}
		}
	}
	
	
	private static boolean isValid(String ip)
	{
		String a[] = ip.split("[.]");
		for (String s : a)
		{
			int i = Integer.parseInt(s);
			if (s.length() > 3 || i < 0 || i > 255)
			{
				return false;
			}
			if (s.length() > 1 && i == 0)
				return false;
			if (s.length() > 1 && i != 0
				&& s.charAt(0) == '0')
				return false;
		}

		return true;
	}

	// Driver Code
	public static void main(String[] args)
	{
		// Function call
		System.out.println(
			restoreIpAddresses("25525511135").toString());
	}
}
