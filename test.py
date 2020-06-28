import random

def hints(a):
    if n - a > 0 and n - a <= 10:
        print("LITTLE HIGH")
    if n - a > 10 and n - a <= 20:
        print("HIGH")
    if n - a > 20 :
        print("VERY HIGH")
    if n - a < 0 and n - a >= -10:
        print("LITTLE LOW")
    if n - a < -10 and n - a >= -20:
        print("LOW")
    if n - a < -20 :
        print("VERY LOW")

print("Press Enter to Game Start")

a = input("(If you want to see the rule explanation, press 'r')")
if  a == 'r':
    print("1∼100 の整数のうちランダムに 1 つが決まる。(これを'n'とする。）")
    print("プレイヤーが 1∼100 の数を入力する。")
    print("入力した数が'n'と一致していたらプレイヤーの勝利。")
    print("一致していなかったら、入力した数と'n'の大小及び差の大きさによってヒントが与えられる。")
    print("数字を入力出来るのは５回まで。")
    print("ヒントの表示について")
    print("'n'との差の絶対値が１０以下のとき'LITTELE HIGH'または'LITTELE LOW'")
    print("'n'との差の絶対値が10以上20以下のとき'HIGH'または'LOW'")
    print("'n'との差の絶対値が30以上のとき'VERY HIGH'または'VERY LOW'")
    aa = input("Press Enter to Game Start")

conti = True
while conti:
    win = False
    n = random.randint(1, 100)
    for i in range(1, 6):
        g = int(input("Guess" + str(i) + ": "))

        if g == n:
            win = True
            break
        else :
            hints(g)
    if win :
        print("YOU WIN!")
    else :
        print("YOU LOSE")
        print("Answer is" + " " + str(n))
    again = input("if you want to play again, press Enter:")
    if(again != ''):
        conti = False
