# Assignment3_cs260_S24  
CS260 assignment 3 (linked queue)  


# Reflection  
My original design for my linked list was overly simple, and I forgot about the structure of linked lists. 
I also thought the point of the assignment would be to force a stack overflow, which would have been good for the 
extra credit portion(which I did not get to).  
My main flaw in the design was to assume I needed to shift the values in the array, because I had forgotten the nature 
of linked lists and nodes.  
I ended up using a C code I had written in the Fall of 2023 as the basis for my code design, but after cross referencing with 
examples on the internet, including geeksforgeeks, stackoverflow, chatGPT, and at least one other site (https://www.codesdope.com/blog/article/c-linked-lists-in-c-singly-linked-list/), I realized my original code in C was incredibly complex, and sometimes convoluted. Luckily the bare bones of the logic was sound and it also reminded me of exactly how the node/pointer interaction works.  
I used the basic pointer logic that we had practiced in CS133C to build my linked list. This was originally learned using all of the same tools, but different pages, because that was all in C.
One thing I saw in my research of linked lists and classes in C++ is the use of the public and private keywords (access specifiers). I am reading their purpose on w3schools and I see that they work almost like the "external" command in C. They allow access to the inner attributes from an outside classe. So they are exactly what they sound like!  

P.S. Apologies for the same menu design! My brain needs a user interface! I think my favorite method of testing is manual testing.  
P.P.S If I have any all caps comments, those are meant for me lol. I meant to delete that!  

*references  
https://www.codesdope.com/blog/article/c-linked-lists-in-c-singly-linked-list/  
https://www.geeksforgeeks.org/program-to-implement-singly-linked-list-in-c-using-class/#  
https://stackoverflow.com/questions/14544539/linked-lists-in-c  
chatGPT  