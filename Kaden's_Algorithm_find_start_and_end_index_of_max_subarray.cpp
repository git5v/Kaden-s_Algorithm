int a[] = {7, 5, -13, 5, 10, -2, 5};
		int prev_sum = 0 , cur_sum = INT_MIN;
		int start = 0, end = 0;

		for0(i, 7)
		{
			cur_sum += a[i];
			if (cur_sum > prev_sum)
			{
				prev_sum = cur_sum;
				end = i;        
			}
			if (cur_sum < 0)
			{
				cur_sum = 0;
				start = i + 1;
			}
		}
