#include <stdio.h>



// �Ʒ��� �ڵ�� 2���� 1000���̿� �Ҽ��� � �ִ��� ã�Ƴ��� �ڵ��Դϴ�. (�Ҽ�: 1�� �ڱ� �ڽ����� �� �������� ��)
// �Ʒ� �ڵ忡�� �Ҽ��Ǻ� �ڵ带 �и��ؼ� �Լ��� ����ð� 
// ���� �Լ��� ȣ���ؼ� �۵��ϵ��� �����غ�����...

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
   int isPrime = 0;   // �Ҽ����� �ƴ��� üũ�ϴ� ����

   for (int i = 2; i <= 1000; i++)
   {
      isPrime = IsPrime(i);

      if (isPrime)
      {
         printf("%d�� �Ҽ��Դϴ�.\n", i);
      }
   }



   return 0;
}