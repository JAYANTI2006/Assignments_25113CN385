#include <iostream>
using namespace std;

int main(){
    // user defined array
    int a[50];
    int num;
    cout << " enter the size of the array = ";
    cin >> num;
    
    for(int i = 0 ; i < num ; i++){
        cout << " enter " << i << " element =";
        cin >> a[i];
        
    }
     for(int i = 0 ; i < num ; i++){
         cout << a[i] << " ";
     }
    
    return 0;
}
    // sum and avg
   int a[50];
    int num;
    int sum=0;
    int avg;
    cout << " enter the size of the array = ";
    cin >> num;
    
    for(int i = 0 ; i < num ; i++){
        cout << " enter " << i << " element =";
        cin >> a[i];
        
    }
     for(int i = 0 ; i < num ; i++){
         sum += a[i];
      
     }
     cout << " sum = " << sum;
     avg = sum/num;
     cout << " average = " << avg;
    
    return 0;
}

// min and max element
   int a[50];
    int num;
   
    cout << " enter the size of the array = ";
    cin >> num;
    
    for(int i = 0 ; i < num ; i++){
        cout << " enter " << i << " element =";
        cin >> a[i];
        
    }
     int max = a[0];;
     int min = a[0];
     for(int i = 1 ; i < num ; i++){
       if(max < a[i]){
           max = a[i];
       }
       else if(min > a[i]){
           min = a[i];
       }
     }
    
     cout << " max = " << max << endl;
     cout << " min = " << min;
    
    return 0;
}
    
   // count of even and odd
    int a[50];
    int num;
   
    cout << " enter the size of the array = ";
    cin >> num;
    
    for(int i = 0 ; i < num ; i++){
        cout << " enter " << i << " element =";
        cin >> a[i];
        
    }
     int count_even =0;
     int count_odd = 0;
     for(int i = 0 ; i < num ; i++){
       if(a[i] % 2 == 0){
           count_even++;
       }
       else {
          count_odd++;
       }
     }
    
     cout << "even = " << count_even << endl;
     cout << " odd = " << count_odd;
    
    return 0;
}
    
   
    
   
