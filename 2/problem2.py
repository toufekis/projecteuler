numbers = []
fibo = [1, 2]
i = 2

while max(fibo) < 4000000:
    k = fibo[i-2] + fibo[i-1]
    fibo.append(k)
    i += 1

del fibo[-1]

for e in fibo:
    if e % 2 == 0:
        numbers.append(e)

print fibo
print numbers
print sum(numbers)
