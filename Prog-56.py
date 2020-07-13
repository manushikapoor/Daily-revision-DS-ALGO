'''
Chef is multi-talented. He has developed a cure for coronavirus called COVAC-19. Now that everyone in the world is infected, it is time to distribute it throughout the world efficiently to wipe out coronavirus from the Earth. Chef just cooks the cure, you are his distribution manager.

In the world, there are N
countries (numbered 1 through N) with populations a1,a2,…,aN. Each cure can be used to cure one infected person once. Due to lockdown rules, you may only deliver cures to one country per day, but you may choose that country arbitrarily and independently on each day. Days are numbered by positive integers. On day 1, Chef has x

cures ready. On each subsequent day, Chef can supply twice the number of cures that were delivered (i.e. people that were cured) on the previous day. Chef cannot supply leftovers from the previous or any earlier day, as the cures expire in a day. The number of cures delivered to some country on some day cannot exceed the number of infected people it currently has, either.

However, coronavirus is not giving up so easily. It can infect a cured person that comes in contact with an infected person again ― formally, it means that the number of infected people in a country doubles at the end of each day, i.e. after the cures for this day are used (obviously up to the population of that country).

Find the minimum number of days needed to make the world corona-free.
                           

'''

def func(a,p,q):
    #p is smaller q is larger
    ans=0
    v1=0
    v2=0
    a1=a 
    while a1>0:
        a1=a1/2
        #print(a1)
        if p >= a1:
            v1=a1
            break
    a2=a 
    while a2>0:
        a2=a2/2 
        #print(a2)
        if q >= a2:
            v2=a2 
            break
    if v1 >=v2:
        ans=1
    return ans
#print(func(110,1,20))



t=int(input())
while t>0:
    lc=list(map(int,input().split(' ')))
    l=lc[0]
    med=lc[1]
    p=list(map(int,input().split(' ')))
    d=0
    while p!=[]:
        kk=0
        arr=[]
        brr=[]
        h=0
        
        for x in p:
            #print('med=',med)
            #print(x,'pl')
            
            if x==med:
                
                kk=1
                break
            elif x< med:
                arr.append(x)
                #print(arr,'yay')
            else:
                brr.append(x)
                #print(brr)
        if kk==1:
            med*=2
            
            d+=1
            p.remove(x)
            #print(p,d)
            h=1
        if h==0:
            if len(arr)==0:
                d+=1
                
                med*=2 
                continue
            else:
                if brr==[]:
                    d+=len(p)
                    break
                maxi=max(arr)
                #p.remove(maxi) no sice error in line 84. calling function
                
                
                co=0
                maxxi2=0
                mini=min(brr)
                #print(mini,maxi,med,'lllllllllllllllllllllllllllllllllllllllllllllllllllllll')
                # mini is q and maxi is p 
                if func(mini,maxi,med) == 1:
                    #print('ooookkkk')
                    p.remove(maxi)
                    med=maxi*2
                    d+=1 
                else:
                    med*=2 
                    d+=1 
                    #print(med,d,'kugdegeggdgdgdkudghue')
                    continue
        else:
            continue
    print(d)
    t-=1     
            
