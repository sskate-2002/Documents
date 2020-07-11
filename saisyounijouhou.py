#最小値、最大値を求める関数
def minimum_x(num):
    if min_x > num:
        return num
    else :
        return min_x

def maximum_x(num):
    if max_x < num:
       return num
    else :
        return max_x

#データの入力
x_list = []
y_list = []
n = int(input("データの数 :"))
print("xとyの値を入力してください")
for i in range(1, n+1):
    x_list.append(float(input("x_" + str(i) + " = ")))
for i in range(1, n+1):
    y_list.append(float(input("y_" + str(i) + " = ")))

#x,y,xy,x^2の合計
total_x = 0
total_y = 0
total_xy = 0
total_xx = 0
for value1 in x_list:
    total_x += value1
for value2 in y_list:
    total_y += value2
for j in range(n):
    total_xy += x_list[j] * y_list[j]
for value1 in x_list:
    total_xx += value1 ** 2

#傾きと切片を求める
a = float((total_x * total_y - n * total_xy) / (total_x ** 2 - n * total_xx))
b = float((total_x * total_xy - total_xx * total_y) / (total_x ** 2 - n * total_xx))

#出力
print(" ")
for i in range(n):
    print("データ" + str(i + 1) + "   x = " + str(x_list[i]) + "    y = " + str(y_list[i]))
print("xの合計値 = " + str(total_x))
print("yの合計値 = " + str(total_y))
print("xyの合計値 = " + str(total_xy))
print("x^2の合計値 = " + str(total_xx))
print(" ")
print("    " + str(total_x) + " × " + str(total_y) + " - " + str(n) + " × " + str(total_xy))
print("a =  ----------------------------------------")
print("    " + str(total_x) + "^2" + " - " + str(n) + " × " + str(total_xx))
print(" ")
print("    " + str(total_x * total_y) + "-" + str(n * total_xy))
print("  = ----------------------------------------")
print("    " + str(total_x ** 2) + " - " + str(n * total_xx))
print(" ")
print("    " + str(total_x * total_y - n * total_xy))
print("  = ----------------------------------------")
print("    " + str(total_x ** 2 - n * total_xx))
print(" ")
print("  = " + str(a))
print(" ")

print("    " + str(total_x) + " × " + str(total_xy) + " - " + str(total_xx) + " × " + str(total_y))
print("b =  ----------------------------------------")
print("    " + str(total_x) + "^2" + " - " + str(n) + " × " + str(total_xx))
print(" ")
print("    " + str(total_x * total_xy) + "-" + str(total_xx * total_y))
print("  = ----------------------------------------")
print("    " + str(total_x ** 2) + " - " + str(n * total_xx))
print(" ")
print("    " + str(total_x * total_xy - total_xx * total_y))
print("  = ----------------------------------------")
print("    " + str(total_x ** 2 - n * total_xx))
print(" ")
print("  = " + str(b))
print(" ")

print("a = " + str(a) + "    b = " + str(b))

#xの最大値と最小値を求める
max_x = x_list[0]
min_x = x_list[0]
for l in x_list:
    max_x = maximum_x(l)
    min_x = minimum_x(l)

#グラフの描画
import numpy as np
import matplotlib.pyplot as plt

interval = float(input("x軸の間隔 :"))

#グラフの範囲
if a >= 0:
    if min_x < 0:
        x = np.arange(min_x - interval, max_x + interval, interval)
        if (min_x - interval) * a + b > 0:
            plt.ylim([0, (max_x + interval) * a + b])
        else :
            if (max_x + interval) * a + b > 0 :
                plt.ylim([(min_x - interval) * a + b, (max_x + interval) * a + b])
            else :
                plt.ylim([(min_x - interval) * a + b, 0])

    else :
        x = np.arange(0, max_x + interval, interval)
        if b > 0 :
            plt.ylim([0, (max_x + interval) * a + b])
        else :
            if (max_x + interval) * a + b > 0 :
                plt.ylim([b, (max_x + interval) * a + b])
            else :
                plt.ylim([b, 0])
else :
    if min_x < 0:
        x = np.arange(min_x - interval, max_x + interval, interval)
        if (max_x + interval) * a + b > 0:
            plt.ylim([0, (min_x - interval) * a + b])
        else :
            if (min_x - interval) * a + b > 0:
                plt.ylim([(max_x + interval) * a + b, (min_x - interval) * a + b])
            plt.ylim([(max_x + interval) * a + b, 0])
    else :
        x = np.arange(0, max_x + interval, interval)
        if (max_x + interval) * a + b > 0:
            plt.ylim([0, b])
        else :
            if b > 0:
                plt.ylim([(max_x + interval) * a + b, b])
            else :
                plt.ylim([(max_x + interval) * a + b, 0])

y = a * x + b
for i in range(n):
    plt.plot(x_list[i], y_list[i], marker = '.')
plt.plot(x, y)
plt.show()
