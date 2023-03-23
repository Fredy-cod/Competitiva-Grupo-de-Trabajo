words = input().split()
for w in words:
	if len(w) == 3 and w[0].islower() and w[1].isnumeric() and w[2].isnumeric():
		print('***', end=' ')
	else:
		print(w, end=' ')
print()
