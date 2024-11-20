using System;

namespace BeakJoon
{
	class Program
	{
		static void Main(string[] args)
		{
			int N;
			N = int.Parse(Console.ReadLine());

			for (int i = 2; i <= N;)
			{
				if (N % i == 0)
				{
					Console.WriteLine(i);
					N /= i;
				}
				else i++;
			}
			return;
		}
	}
}