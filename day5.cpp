


 int num;
   cout << " enter a number";
   cin >> num;
  
   
   int n = num;
   int sum= 0 ;
   
    if(n == 0){
       sum = 1;
   }
   
   while(n > 0){
       
    int  d = n % 10;
    
    int fact = 1;
    while(d>1){
        fact *= d;
        d--;
    }
    sum +=fact;
    n /= 10;
    
   }
   if( sum == num){
    cout << " strong";
   }
   else{
    cout << " weak";
   }
   return 0;
} 


