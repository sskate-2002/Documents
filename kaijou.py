def kaijou(a):
  b = 1
  while a > 0:
    b = b * a
    a = a - 1
  return b

answer = str(kaijou(int(input("Enter an integer :"))))
print(answer)
