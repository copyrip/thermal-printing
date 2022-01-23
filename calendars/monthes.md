## various designs
Simple `cal -y -m` output:
```
                               2022                               

       January               February                 March       
Mo Tu We Th Fr Sa Su   Mo Tu We Th Fr Sa Su   Mo Tu We Th Fr Sa Su
                1  2       1  2  3  4  5  6       1  2  3  4  5  6
 3  4  5  6  7  8  9    7  8  9 10 11 12 13    7  8  9 10 11 12 13
10 11 12 13 14 15 16   14 15 16 17 18 19 20   14 15 16 17 18 19 20
17 18 19 20 21 22 23   21 22 23 24 25 26 27   21 22 23 24 25 26 27
24 25 26 27 28 29 30   28                     28 29 30 31         
31                                                                
        April                   May                   June        
Mo Tu We Th Fr Sa Su   Mo Tu We Th Fr Sa Su   Mo Tu We Th Fr Sa Su
             1  2  3                      1          1  2  3  4  5
 4  5  6  7  8  9 10    2  3  4  5  6  7  8    6  7  8  9 10 11 12
11 12 13 14 15 16 17    9 10 11 12 13 14 15   13 14 15 16 17 18 19
18 19 20 21 22 23 24   16 17 18 19 20 21 22   20 21 22 23 24 25 26
25 26 27 28 29 30      23 24 25 26 27 28 29   27 28 29 30         
                       30 31                                      
        July                  August                September     
Mo Tu We Th Fr Sa Su   Mo Tu We Th Fr Sa Su   Mo Tu We Th Fr Sa Su
             1  2  3    1  2  3  4  5  6  7             1  2  3  4
 4  5  6  7  8  9 10    8  9 10 11 12 13 14    5  6  7  8  9 10 11
11 12 13 14 15 16 17   15 16 17 18 19 20 21   12 13 14 15 16 17 18
18 19 20 21 22 23 24   22 23 24 25 26 27 28   19 20 21 22 23 24 25
25 26 27 28 29 30 31   29 30 31               26 27 28 29 30      
                                                                  
       October               November               December      
Mo Tu We Th Fr Sa Su   Mo Tu We Th Fr Sa Su   Mo Tu We Th Fr Sa Su
                1  2       1  2  3  4  5  6             1  2  3  4
 3  4  5  6  7  8  9    7  8  9 10 11 12 13    5  6  7  8  9 10 11
10 11 12 13 14 15 16   14 15 16 17 18 19 20   12 13 14 15 16 17 18
17 18 19 20 21 22 23   21 22 23 24 25 26 27   19 20 21 22 23 24 25
24 25 26 27 28 29 30   28 29 30               26 27 28 29 30 31   
31                                                                
```
Single month liner version:
```
       January         
Mo Tu We Th Fr Sa Su   
                1  2   
 3  4  5  6  7  8  9   
10 11 12 13 14 15 16   
17 18 19 20 21 22 23   
24 25 26 27 28 29 30   
31                                                                

      February         
Mo Tu We Th Fr Sa Su   
    1  2  3  4  5  6   
 7  8  9 10 11 12 13   
14 15 16 17 18 19 20   
21 22 23 24 25 26 27   
28                     

        March       
Mo Tu We Th Fr Sa Su
    1  2  3  4  5  6
 7  8  9 10 11 12 13
14 15 16 17 18 19 20
21 22 23 24 25 26 27
28 29 30 31         

        April          
Mo Tu We Th Fr Sa Su   
             1  2  3   
 4  5  6  7  8  9 10   
11 12 13 14 15 16 17   
18 19 20 21 22 23 24   
25 26 27 28 29 30      
                       
         May           
Mo Tu We Th Fr Sa Su   
                   1   
 2  3  4  5  6  7  8   
 9 10 11 12 13 14 15   
16 17 18 19 20 21 22   
23 24 25 26 27 28 29   
30 31                  

        June        
Mo Tu We Th Fr Sa Su
       1  2  3  4  5
 6  7  8  9 10 11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30         

         July                              
Mo Tu We Th Fr Sa Su   
             1  2  3   
 4  5  6  7  8  9 10   
11 12 13 14 15 16 17   
18 19 20 21 22 23 24   
25 26 27 28 29 30 31   

       August          
Mo Tu We Th Fr Sa Su   
 1  2  3  4  5  6  7   
 8  9 10 11 12 13 14   
15 16 17 18 19 20 21   
22 23 24 25 26 27 28   
29 30 31               

      September     
Mo Tu We Th Fr Sa Su
          1  2  3  4
 5  6  7  8  9 10 11
12 13 14 15 16 17 18
19 20 21 22 23 24 25
26 27 28 29 30      

       October      
Mo Tu We Th Fr Sa Su
                1  2
 3  4  5  6  7  8  9
10 11 12 13 14 15 16
17 18 19 20 21 22 23
24 25 26 27 28 29 30
31                  

      November      
Mo Tu We Th Fr Sa Su
    1  2  3  4  5  6
 7  8  9 10 11 12 13
14 15 16 17 18 19 20
21 22 23 24 25 26 27
28 29 30            

      December      
Mo Tu We Th Fr Sa Su
          1  2  3  4
 5  6  7  8  9 10 11
12 13 14 15 16 17 18
19 20 21 22 23 24 25
26 27 28 29 30 31   
```
A more minimalistic version
```
january         
mon tue wen thu fri sat sun
                     1   2   
 3   4   5   6   7   8   9   
10  11  12  13  14  15  16   
17  18  19  20  21  22  23   
24  25  26  27  28  29  30   
31                                                                

february
mon tue wen thu fri sat sun
     1   2   3   4   5   6   
 7   8   9  10  11  12  13   
14  15  16  17  18  19  20   
21  22  23  24  25  26  27   
28                     

march       
mon tue wen thu fri sat sun
     1   2   3   4   5   6
 7   8   9  10  11  12  13
14  15  16  17  18  19  20
21  22  23  24  25  26  27
28  29  30  31            

april          
mon tue wen thu fri sat sun
                 1   2   3   
 4   5   6   7   8   9  10   
11  12  13  14  15  16  17   
18  19  20  21  22  23  24   
25  26  27  28  29  30       
                       
may           
mon tue wen thu fri sat sun
                         1   
 2   3   4   5   6   7   8   
 9  10  11  12  13  14  15   
16  17  18  19  20  21  22   
23  24  25  26  27  28  29   
30  31                       

june        
mon tue wen thu fri sat sun
         1   2   3   4   5
 6   7   8   9  10  11  12
13  14  15  16  17  18  19
20  21  22  23  24  25  26
27  28  29  30            

july                              
mon tue wen thu fri sat sun
                 1   2   3   
 4   5   6   7   8   9  10   
11  12  13  14  15  16  17   
18  19  20  21  22  23  24   
25  26  27  28  29  30  31   

august          
mon tue wen thu fri sat sun
 1   2   3   4   5   6   7   
 8   9  10  11  12  13  14   
15  16  17  18  19  20  21   
22  23  24  25  26  27  28   
29  30  31                   

september     
mon tue wen thu fri sat sun
             1   2   3   4
 5   6   7   8   9  10  11
12  13  14  15  16  17  18
19  20  21  22  23  24  25
26  27  28  29  30        

october      
mon tue wen thu fri sat sun
                     1   2
 3   4   5   6   7   8   9
10  11  12  13  14  15  16
17  18  19  20  21  22  23
24  25  26  27  28  29  30
31                        

november      
mon tue wen thu fri sat sun
     1   2   3   4   5   6
 7   8   9  10  11  12  13
14  15  16  17  18  19  20
21  22  23  24  25  26  27
28  29  30                

december      
mon tue wen thu fri sat sun
             1   2   3   4
 5   6   7   8   9  10  11
12  13  14  15  16  17  18
19  20  21  22  23  24  25
26  27  28  29  30  31   
```

A 16 chars one ? is it faisible ?
```
 m t w t f s s 
 . . . . . 1 2
 3 4 5 6 7 8 9
10111213141516
17181920212223
24252627282930
31
```
