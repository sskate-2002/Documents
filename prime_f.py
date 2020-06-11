#課題3
i = 2
prime_list = []
prime_list.append(i)
i += 1
n = int(input("Enter an integer : "))
N = n
while i <= n:
  b = True
  for j in prime_list:
    if i % j == 0:
      b = False
      break
  if b == True:
    prime_list.append(i)
  i += 1

p_list = []
prime = [N]

for k in prime_list:
  #素数kで割ったときのあまりが0である間だけ実行
  while n % k == 0:
    n /= k
    p_list.append(str(k))
  if n == 1:
    break

#出力する文字列の作成
string = ""
string = " x ".join(p_list)

#Nが素数のときの出力
if prime == p_list:
  print(str(N) + " is prime")
#そうでないときの出力
else:
  print(str(N) + " = " + string)
