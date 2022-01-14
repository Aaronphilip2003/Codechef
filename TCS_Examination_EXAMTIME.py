t = int(input())
for i in range(t):
    d = list(map(int,input().split()))
    s = list(map(int,input().split()))
    sd = sum(d)
    ss = sum(s)
    if sd>ss:
      print('Dragon')
    elif sd<ss:
      print('Sloth')
    elif sd == ss:
      if d[0]>s[0]:
        print('Dragon')
      elif d[0]<s[0]:
        print('Sloth')
      elif d[0] == s[0]:
        if d[1]>s[1]:
          print('Dragon')
        elif d[1]<s[1]:
          print('Sloth')
        else:
          print('Tie')
  
