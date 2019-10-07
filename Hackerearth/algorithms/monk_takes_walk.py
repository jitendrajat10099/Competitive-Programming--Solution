x = int(input())
for _ in range(x):
    dict = {'a':0,'e':0,'i':0,'o':0,'u':0,'A':0,'E':0,'I':0,'O':0,'U':0}
    s = input()
    for i in s:
        if i in dict:
            dict[i]+=1
        else:
            dict[i]=1
            
    answer = dict['a']+dict['e']+dict['i']+dict['o']+dict['u']+dict['A']+dict['E']+dict['I']+dict['O']+dict['U']
    print(answer)
