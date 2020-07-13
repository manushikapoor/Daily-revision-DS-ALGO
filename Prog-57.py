'''
Chef Ada is training her calculation skills. She wants to place a king and some obstacles on a chessboard in such a way that the number of distinct cells the king can reach is exactly K

.

Recall that a chessboard has 8
rows (numbered 1 through 8) and 8 columns (numbered 1 through 8); let's denote a cell in row r and column c by (r,c)

.

In one move, a king can move to any adjacent cell which shares a side or corner with its current cell and does not contain an obstacle. More formally, a king in a cell (r,c)
can move to any cell (rn,cn) if (rn,cn) is a valid cell of the chessboard which does not contain an obstacle and (r−rn)2+(c−cn)2≤2

.

A cell (x,y)
can be reached by a king if, after an arbitrary number of moves (including zero), the king is in the cell (x,y)

.

Help Ada find any valid configuration of the board such that the king can reach exactly K
distinct cells. It is guaranteed that such a configuration always exists. If there are multiple solutions, you may find any one.
'''

t=int(input())
while t>0:
    
    a=[[['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']]]
    
    n=int(input())
    a[3][3] = 'O'
    ra=3
    ca=3
    n=n-1
    
    while n > 0:
        r=ra+1 
        c=ca
        
        while r < 8:
             
            a[r][c] = 'ooo'
            r+=1 
            n-=1
            if n == 0:
                break
       
        if n > 0:
            r= ra -1
            c=ca
            while r>=0:
                 
                a[r][c] = 'ooo'
                r-=1
                n-=1
                if n==0:
                    break
        
        if n > 0:
            r=ra 
            c= ca + 1 
            while c < 8 :
                a[r][c] = 'ooo'
                c+=1 
                n-=1 
                
                if n == 0 :
                    break
        
        if n > 0:
            r=ra 
            c=ca-1
            while c>=0:
                a[r][c]='ooo'
                c-=1 
                n-=1 
                if n==0:
                  break
       
        if n > 0 :
            r=ra-1
            c=ca-1
            while c>=0:
                a[r][c]='ooo'
                c-=1 
                r-=1 
                n-=1
                if n==0:
                    break
        
        if n>0:
            r=ra+1 
            c=ca+1 
            while c<8:
                a[r][c]='ooo'
                c+=1 
                r+=1 
                n-=1
                if n ==0:
                    break
        
        if n>0:
            r=ra+1 
            c=ca-1
            while c>=0:
                a[r][c]='ooo'
                r+=1 
                c-=1 
                n-=1
                
                if n==0:
                    break
        
        if n>0:
            r=ra-1
            c=ca+1 
            while r>=0:
                a[r][c]='ooo'
               
                r-=1 
                c+=1
                n-=1
                if n==0:
                    break
        
        if n>0:
            
        
            r=0
            while r<8:
                c=0
                while c<8:
                    if a[r][c]!='ooo' :
                        if a[r][c]!='O':
                            
                            if n==0:
                                break
                            a[r][c]='ooo'
                            n-=1 
                            if n==0:
                                break
                    c+=1 
                r+=1
    i=0
    j=0
    while i<8:
        j=0
        while j<8:
            if a[i][j]==['.']:
                a[i][j] = 'X'
            j+=1 
        i+=1 
       
    i=0
    j=0
    while i<8:
        j=0
        while  j<8:
            if a[i][j]=='ooo':
                a[i][j]='.'
            j+=1 
        i+=1 
        
    for x in a:
        print(str(x).replace("'" , "").replace('[','').replace(']','').replace(',', "").replace(' ',''), end = '\n')
    t-=1 
    

