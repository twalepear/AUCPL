N = int(input())
C = list(map(int,input().split()))
V = list(map(float,input().split()))

max_value = 0
for i in range(N):
	if max_value < C[i] * V[i]:
		max_value = C[i] * V[i]
	
print(f"{max_value:.3f}")