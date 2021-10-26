int a[] = {7, 5, -13, 5, 10, -2, 5};
		int prev_sum = 0 , cur_sum = INT_MIN;

		for (int i = 0; i < 7; i++)
		{
			cur_sum += a[i];
			if (cur_sum > prev_sum)
			{
				prev_sum = cur_sum;
			}
			if (cur_sum < 0)
			{
				cur_sum = 0;
			}
		}

		cout << prev_sum << endl; //18
