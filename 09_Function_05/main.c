#include <stdio.h>



// 아래의 코드는 2부터 1000사이에 소수가 몇개 있는지 찾아내는 코드입니다. (소수: 1과 자기 자신으로 만 나눠지는 수)
// 아래 코드에서 소수판별 코드를 분리해서 함수로 만드시고 
// 만든 함수를 호출해서 작동하도록 수정해보세요...

int IsPrime(int self)
{
    for (int i = 2; i < self; i++)
    {
        if (self % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
   int isPrime = 0;   // 소수인지 아닌지 체크하는 변수

   for (int i = 2; i <= 1000; i++)
   {
      isPrime = IsPrime(i);

      if (isPrime)
      {
         printf("%d는 소수입니다.\n", i);
      }
   }



   return 0;
}