print("4. 字符串字符统计：")
s = "Learn soMEThing New Every day223344."
lower_count = 0  
upper_count = 0  
digit_count = 0  

for char in s:
    if char.islower():
        lower_count += 1
    elif char.isupper():
        upper_count += 1
    elif char.isdigit():
        digit_count += 1

print(f"小写字母个数：{lower_count}")
print(f"大写字母个数：{upper_count}")
print(f"数字个数：{digit_count}")
print()