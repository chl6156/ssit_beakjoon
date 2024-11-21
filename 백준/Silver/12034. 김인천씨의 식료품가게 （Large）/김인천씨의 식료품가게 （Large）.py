# 김인천씨 식료품가게 (할인문제)

T = int(input())
str_list = []
for i in range(T) :
    num = int(input())
    item_list = list(map(int, input().split()))
    for j in range(num*2) :
        #item_list.remove(item_list[j]/0.75)
        #if (j+1 >= num) or (not item_list[j+1]) : break
        #if (not item_list[j+1]) : break
        try :
            item_list.remove(item_list[j]/0.75)
        except :
            break
    str_list.append(f"Case #{i+1}: ") 
    for j in range(len(item_list)):
        str_list[i] += str(item_list[j]) + " "
    

for i in range(T):
    print(str_list[i])