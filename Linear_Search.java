import java.util.*;

public class program
  {
    public static void main(String []args)
    {
      int arr[] = {1,2,3,4,5};
      int target = 2;
      for (int i =0 ; i<arr.length ; i++)
        {
          if(arr[i]==target)
          {
            System.out.println("Target Found at Index = " + i);
            return;
          }
        }
      System.out.println("Target NOT FOUND")
    }
  }
