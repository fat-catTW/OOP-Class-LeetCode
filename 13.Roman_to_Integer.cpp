int romanToInt(char * s)
{
  int sum = 0, len = strlen(s);
  int arr[len];
  //printf("%d\n",len);
  
  for(int i = 0 ; i < len ; i++)
  {
    if(s[i] == 'I')
    {
      arr[i] = 1;
    }
    
    if(s[i] == 'V')
    {
      arr[i] = 5;
    }
    
    if(s[i] == 'X')
    {
      arr[i] = 10;
    }

    if(s[i] == 'L')
    {
      arr[i] = 50;
    }

    if(s[i] == 'C')
    {
      arr[i] = 100;
    }

    if(s[i] == 'D')
    {
      arr[i] = 500;
    }

    if(s[i] == 'M')
    {
      arr[i] = 1000;
    }
  }


  for(int i = 0 ; i < len ; i++)
  {
    //printf("%d\n",arr[i]);
    if(i == 0)
    {
      sum += arr[i];
    }
    else
    {
      if(arr[i - 1] < arr[i])
      {
        sum -= arr[i-1] * 2;
        sum += arr[i];
      } 
      else
      {
        sum += arr[i];
      }
    }

    
  }
  
  return sum;
}


  
      