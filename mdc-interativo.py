x = int(input())
y = int(input())

while y!=0:
  x, y = y, x%y

print(x)
