a, b = 0, 1
count = 0  

print("斐波那契数列前10项：")
while count < 10:
    print(a, end=" ")
    a, b = b, a + b
    count += 1 