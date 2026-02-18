Understanding Radix sort 

Radix sort compares the binary represenations of the index numbers for each node

So if we have 4 nodes 

n1 = 0 = 00000000
n2 = 1 = 00000001
n3 = 3 = 00000011
n4 = 2 = 00000010

radix sort says look at the least significant bits 
if its 1 keep in stack a. if its 0 then move to stack b


so then we have 

Stack a = n2, n3
Stack b = n1, n4

We then put the b values back in stack a but at the top

We then look at the the next significatnt bit

and do it again 
So 

stack a 

n1 = 0 == 0000
n4 = 2 == 0010
n2 = 1 == 0001
n3 = 3 == 0011

Then 

Stack a = n4, n3
stack b = n1, n2

so 

stack a 
n2 = 1 == 0001
n1 = 0 == 0000
n3 = 3 == 0011
n4 = 2 == 0010

do it again but for this digit -0--

stack a =  
stack b =



