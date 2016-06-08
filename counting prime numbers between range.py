lower=int(input("enter lower\n"))
upper=int(input("enter upper\n"))
count=0
for num in range (lower,upper+1):
  if(num % 2==0):
    break
  else:
    count +=1
print("count=",count)
