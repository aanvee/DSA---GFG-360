// Problem :You are given two integers n and m. You need to find an integer x such that:
// 1. x is not divisible by m.
// 2. The absolute difference |x - n| is minimized.
// If there are multiple such integers, return any one of them.
// Time Complexity: O(1)
// Space Complexity: O(1)
// approach: We can find the quotient of n divided by m to get the closest multiples of m around n.
// Then we check which multiple is closer to n and return the one that is not divisible by m.
class Solution {
  public:
    int closestNumber(int n, int m) {
      int q=n/m;
      int n1=m*q;
      int n2=(n*m) > 0 ? m*(q+1):m*(q-1);
      if(abs(n-n1)<abs(n-n2))return n1;
      return n2;
    }
};