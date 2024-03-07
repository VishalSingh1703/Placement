# A naive recursive implementation 
# of 0-1 Knapsack Problem 

# Returns the maximum value that 
# can be put in a knapsack of 
# capacity W 


def knapSack(W, wt, val, n): 
  if(W == 0 or n == 0): return 0

  if(wt[n-1] > W): knapSack(W, wt, val, n-1)
  else: return max(val[n-1] + knapSack(W - wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1))
	
if __name__ == '__main__': 
	profit = [60, 100, 120] 
	weight = [10, 20, 30] 
	W = 50
	n = len(profit) 
	print(knapSack(W, weight, profit, n))

# This code is contributed by Nikhil Kumar Singh 
