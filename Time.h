struct Time{
	int m,h,s;
};

// 1) Read a time in format: h m s
void getTime(Time &t) {
	cin >> t.h >> t.m >> t.s;
}

// 2) Subtract two times: result = t1 - t2, wrapped in 24 hours
Time subtract(Time t1, Time t2) {
	const int daySeconds = 24 * 60 * 60;
	int sec1 = t1.h * 3600 + t1.m * 60 + t1.s;
	int sec2 = t2.h * 3600 + t2.m * 60 + t2.s;

	int diff = sec1 - sec2;
	if (diff < 0) {
		diff += daySeconds;
	}

	Time t3;
	t3.h = diff / 3600;
	diff %= 3600;
	t3.m = diff / 60;
	t3.s = diff % 60;
	return t3;
}

// 3) Display in format 00:00:00
void display(Time t) {
	cout << setfill('0') << setw(2) << t.h << ":"
		 << setw(2) << t.m << ":"
		 << setw(2) << t.s;
}