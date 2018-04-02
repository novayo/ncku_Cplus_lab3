Qa:
	Compile Command:
		make
		./lab3.out
Qb:
	Result:
		For size = 1000       sort(): 0.003641    insertion_sort(): 0.811492
		For size = 10000      sort(): 0.004164    insertion_sort(): 0.816185
		For size = 100000     sort(): 0.004428    insertion_sort(): 0.820034
		For size = 1000000    sort(): 0.010834    insertion_sort(): 0.843773
	Explanation:
		差異點是：sort()的時間複雜度O(nlogn)比insertion_sort()的O(n^2)來的小，所以sort()的時間成長幅度比insertion_sort()來的小，且差距隨著size而增加。
		
