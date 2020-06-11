#課題1
i = 2
prime_list = []
prime_list.append(i)
i += 1
n = int(input("Enter an integer : "))

while i <= n:
  b = True
  #素数で割ってあまりがあるか調べる。
  for j in prime_list:
    if i % j == 0:
      b = False
      break
  if b == True:
    prime_list.append(i)
  i += 1

for k in prime_list:
  print(k)
