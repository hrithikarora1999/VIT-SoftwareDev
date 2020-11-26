#include <iostream>
using namespace std;

bool checkalldead(int arr[5][5])
{
int c=0;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      if(arr[i][j]==0)
      {
        c++;
      }
    }
  }
  if(c==24){
    return true;
  }
  else
  {
    return false;
  }
}
int main() {
  int arr[5][5];
  int p1[5]={3,2,5,4,1};
  int p2[5]={2,1,3,5,4};

  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      arr[i][j]=0;
    }
    
  }
  
  for(int i=0;i<5;i++)
  {
    arr[0][i]=p2[i];
    arr[4][i]=p1[i];
  }
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  int j=0;
  while(checkalldead(arr)==false)
  { bool wadak=true;
    bool sadak=true;
    string input;
    cin>>input;
    if(j%2==0)
    {
    switch(input[0])
    {
       case  '1': switch (input[1]) 
   { 
       case 'f': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==1)
           { 
             if(arr[i-1][j]==0)
             {
             arr[i-1][j]=1;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       case 'l': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==1)
           { 
             if(arr[i-1][j-1]==0)
             {
             arr[i-1][j-1]=1;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j-1]=arr[i][j-1];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }
                break; 
       case 'r': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==1)
           { 
             if(arr[i-1][j+1]==0)
             {
             arr[i-1][j+1]=1;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j+1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break;
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
   } 
               break; 
       case '2': switch (input[1]) 
   { 
       case 'f': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==2)
           { 
             if(arr[i-1][j]==0)
             {
             arr[i-1][j]=2;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       case 'l': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==2)
           { 
             if(arr[i-1][j-1]==0)
             {
             arr[i-1][j-1]=2;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j-1]=arr[i][j-1];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }
                break;
       case 'r': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==2)
           { 
             if(arr[i-1][j+1]==0)
             {
             arr[i-1][j+1]=2;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j+1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
   } 
                break; 
       case '3': switch (input[1]) 
   { 
       case 'f': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==3)
           { 
             if(arr[i-1][j]==0)
             {
             arr[i-1][j]=3;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       case 'l': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==3)
           { 
             if(arr[i-1][j-1]==0)
             {
             arr[i-1][j-1]=3;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j-1]=arr[i][j-1];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }
                break;
       case 'r': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==3)
           { 
             if(arr[i-1][j+1]==0)
             {
             arr[i-1][j+1]=3;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j+1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
   } 
               break; 
       case '4': switch (input[1]) 
   { 
       case 'f': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==4)
           { 
             if(arr[i-1][j]==0)
             {
             arr[i-1][j]=4;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }
               break; 
       case 'l': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==4)
           { 
             if(arr[i-1][j-1]==0)
             {
             arr[i-1][j-1]=4;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j-1]=arr[i][j-1];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }
                break;
       case 'r': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==4)
           { 
             if(arr[i-1][j+1]==0)
             {
             arr[i-1][j+1]=4;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j+1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break;
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
   } 
              break;
        case '5': switch (input[1]) 
   { 
       case 'f': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==5)
           { 
            if(arr[i-1][j]==0)
             {
             arr[i-1][j]=5;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       case 'l': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==5)
           { 
             if(arr[i-1][j-1]==0)
             {
             arr[i-1][j-1]=5;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j-1]=arr[i][j-1];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }
                break;
       case 'r': for(int i=4;i>=0;i--)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==5)
           { 
             if(arr[i-1][j+1]==0)
             {
             arr[i-1][j+1]=5;
             arr[i][j]=0;
             }
             else
             {
               arr[i-1][j+1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
   }  
               break;                 
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
    }
  }
  else{
    switch(input[0])
    {
       case  '1': switch (input[1]) 
   { 
       case 'f': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==1)
           { 
             if(arr[i+1][j]==0)
             {
             arr[i+1][j]=1;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       case 'l': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==1)
           { 
             if(arr[i+1][j+1]==0)
             {
             arr[i+1][j+1]=1;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j+1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       case 'r': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==1)
           { 
             if(arr[i+1][j-1]==0)
             {
             arr[i+1][j-1]=1;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j-1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
   } 
               break; 
       case '2': switch (input[1]) 
   { 
       case 'f': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==2)
           { 
             if(arr[i+1][j]==0)
             {
             arr[i+1][j]=2;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       case 'l': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==2)
           { 
             if(arr[i+1][j+1]==0)
             {
             arr[i+1][j+1]=2;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j+1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break;  
       case 'r':for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==2)
           { 
             if(arr[i+1][j-1]==0)
             {
             arr[i+1][j-1]=2;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j-1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
   } 
                break; 
       case '3': switch (input[1]) 
   { 
       case 'f': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==3)
           { 
             if(arr[i+1][j]==0)
             {
             arr[i+1][j]=3;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       case 'l': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==3)
           { 
             if(arr[i+1][j+1]==0)
             {
             arr[i+1][j+1]=3;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j+1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break;  
       case 'r': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==3)
           { 
             if(arr[i+1][j-1]==0)
             {
             arr[i+1][j-1]=3;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j-1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
   } 
               break; 
       case '4': switch (input[1]) 
   { 
       case 'f': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==4)
           { 
             if(arr[i+1][j]==0)
             {
             arr[i+1][j]=4;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }
               break; 
       case 'l': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==4)
           { 
             if(arr[i+1][j+1]==0)
             {
             arr[i+1][j+1]=4;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j+1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       case 'r':for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==4)
           { 
             if(arr[i+1][j-1]==0)
             {
             arr[i+1][j-1]=4;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j-1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
   } 
              break;
        case '5': switch (input[1]) 
   { 
       case 'f': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==5)
           { 
            if(arr[i+1][j]==0)
             {
             arr[i+1][j]=5;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       case 'l': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==5)
           { 
             if(arr[i+1][j+1]==0)
             {
             arr[i+1][j+1]=5;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j+1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break;  
       case 'r': for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           if(arr[i][j]==5)
           { 
             if(arr[i+1][j-1]==0)
             {
             arr[i+1][j-1]=5;
             arr[i][j]=0;
             }
             else
             {
               arr[i+1][j-1]=arr[i][j];
               arr[i][j]=0;
             }
             wadak=false;

             break;
           }
         }
         if(wadak==false)
         {
           break;
         }
         
       } 
       for(int i=0;i<5;i++)
       {
         for(int j=0;j<5;j++)
         {
           cout<<arr[i][j]<<" ";
         }
         cout<<endl;
       }

               break; 
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
   }  
               break;                 
       default: printf("Choice other than 1, 2 and 3"); 
                break;   
    }
  }

  j=j+1;
    
  }
}