# Koko Eating Bananas
Problem: Koko loves to eat bananas. There are _n_ piles of bananas, and the _i_<sup>th</sup> pile contains piles[i] bananas.
The guards have left, but will come back after _h_ hours. Koko can decide her eating speed, _k_. Every hour she chooses a pile and eats _k_ bananas from it.
If the pile has less than _k_ bananas, she finishes the pile and does not eat anymore bananas that hour.
Koko likes to eat slowly but wants to finish all of the bananas before the guards return. <br>
Find the minimum eating speed, _k_, with which Koko can finish all of the bananas in _h_ hours.

## Approach
This is a binary search approach. We first establish that Koko must eat at least 1 banana per hour, and a max of `max(piles)` bananas per hour.
From there, the median is used as _k_ to calculate whether Koko could finish all of the bananas within _h_ hours using an eating speed of _k_. With every iteration the list of remaining elements is halved, depending on if eating speed _k_ was too fast or too slow.<br>
* _Time Complexity_: _O(n*log(m))_ where _n_ = the number of piles and _m_ = `max(piles)`.
* _Space Complexity_: _O(1)_
