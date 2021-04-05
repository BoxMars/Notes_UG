# Assignment_02
### Zhang Huakang | D-B92760-6
---
#### 2.
|p|not p| not (not p)|
|-|-|-|
|T|F|T|
|F|T|F|
#### so p and not not p are logical equivalent.
---
#### 4.
###### a)
|p|q|r|p or q|q or r|(p or q )or r| p or (q or r)|
|-|-|-|-|-|-|-|
|T|T|T|T|T|T|T|
|T|T|F|T|T|T|T|
|T|F|T|T|T|T|T|
|T|F|F|T|F|T|T|
|F|T|T|T|T|T|T|
|F|T|F|T|T|T|T|
|F|F|T|F|T|T|T|
|F|F|F|F|F|F|F|
###### b)
|p|q|r|p and q|q and r|(p and q ) and r|p and (q and r)|
|-|-|-|-|-|-|-|
|T|T|T|T|T|T|T|
|T|T|F|T|F|F|F|
|T|F|T|F|F|F|F|
|T|F|F|F|F|F|F|
|F|T|T|F|T|F|F|
---
#### 6.
#### Solution: We construct the truth table for these compound propositions in the foloowing table . Because the truth value of not ( p and q ) and not p or not q agree , they are logically equivalent .

|p|q|p and q |not p| not q |not ( p and q )| not p or not q |
|-|-|-|-|-|-|-|
|T|T|T|F|F|F|F|
|T|F|F|F|T|T|T|
|F|T|F|T|F|T|T|
|F|F|F|T|T|T|T|
---
#### 8.
#### a) Lwame will not takea job in industry and go to graduate achool .
#### b) Yoshiko does not know Java or calculus .
#### c) James is not young or strong .
#### d) Rita will not move to Oregon and Washington .
---
#### 10.
#### a) 
|p|q| p or q | not p and ( p or q )|not p and ( p and q ) -> q|
|-|-|-|-|-|
|T|T|T|F|T|
|T|F|T|F|T|
|F|T|T|T|T|
|F|F|F|F|T|
#### Either way ,  not p and ( p and q ) -> q is always true .
---
#### 14.
#### Proof :
#### ( not p and ( p -> q )) -> not q
#### = [ not ( not p and ( not p or q )  ) ] or not q
#### = ( p or not ( not p or q ) ) or not q
#### = ( p or p and not q) or not q
#### = ( p and not q ) or not q
#### = ( p or not q ) and ( not q or not q )
#### = ( p or not q ) and not q
#### When q is true , not q is flase .  ( p or not q ) and not q must be flase .
---
#### 16.
|p|q|p and q| not p | not q | not p and not q |( p and q ) or ( not p and not q )| p <-> q |
|-|-|-|-|-|-|-|-|
|T|T|T|F|F|F|T|T|
|T|F|F|F|T|F|F|F|
|F|T|F|T|F|F|F|F|
|F|F|F|T|T|T|T|T|
---
#### 18.
#### Proof:
#### not q -> not p
#### = not ( not q ) or not p 
#### = q or not p 
#### = not p or q 
#### = p -> q
---
#### 26.
#### not p -> ( q -> r)
#### = not p -> ( not q or r )
#### = not ( not p ) or ( not q or r )
#### = p or ( not q or r )
#### = not q or ( p or  r )
#### = q -> ( p or r )
---
#### 32.
#### Suppose : p is true 
#### &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;q is flase
#### &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;r is flase
#### So , wo can get that : ( p and q ) -> r is flase
#### &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;( p -> r ) and ( q -> r ) is true
---
:)  Finish
