int isPrime(int a)
{

    if (( a % 2 != 0 ||a % 3 != 0 ||a % 5 != 0 || a % 7 != 0) && (a != 2 && a != 3 && a != 5 && a != 7))
        {
            return 0;
        }
       
else{
    return 1;
} 
    