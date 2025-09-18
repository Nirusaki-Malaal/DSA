import java.util.*;

public class program
  {
    public static void main(String [] args)
    {
      int arr[] = {23 ,11 , -23 , 45};
      for (int i = 0  i < arr.length ; i++)
        {
          for (int j = (i+1) ; j < arr.length ; j++)
            {
              if (arr[j]> arr[i])
              {
                arr[j] = arr[j] + arr[i];
                arr[i] = arr[j] - arr[i];
                arr[j] = arr[j] - arr[i];
              }
            }
        }
    }
  }
