#include <stdio.h>                  //automatic vending machine
int main()
{
  float amount, price;
  int code;
  //it is a menu for the user
  printf("\tWelcome to Vending machine service ");
  printf("\n\nPress 1. for soda -Price: $1.50 \npress 2. for chips -Price: $1.00 \npress 3. for candy -Price: $0.75 \npress 4. for water -Price: $1.25 \npress 5. for gum -Price: $0.50");

  printf("\n\nPlease Enter the item code:");
  scanf("\n%d", &code);
  printf("\nPlease inset money:");
  scanf("\n%f", &amount);
  // only if code(means variable) matches the cetain value it will choose an product 
  switch (code)
  {  //'.2f'is used for 2 digits after '.'     eg:-2.00
  case 1:
    price = 1.50;//price of product
    if (amount == price) //if the amt is equal the payment can be directly done
    {
      printf("\nYou successfully purchaesd soda, Thank you!");
    }
    else if (amount < price)
    {
      float value;
      value = price - amount;
      printf("\nInsufficient funds,You need $%.2f funds!", value);
    }
    else
    {
      float change;//if it is greater then it will return the extra amount by substracting
      change = amount - price;
      printf("You successfully purchased soda, here is your change = %.2f", change);
    }
    break;
  case 2:
    price = 1.00;//price of product
    if (amount == price) //if the amt is equal the payment can be directly done
    {
      printf("\nYou successfully purchaesd chips, Thank you!");
    }
    else if (amount < price)
    {
      float value;//if it is less then it will calculate how much amount is needed
      value = price - amount;
      printf("\nInsufficient funds,You need $%.2f funds!", value);
    }
    else
    {
      float change;
      change = amount - price;//if it is greater then it will return the extra amount by substracting
      printf("You successfully purchased chips, here is your change = %.2f", change);
    }
    break;
  case 3:
    price = 0.75;//price of product
    if (amount == price) //if the amt is equal the payment can be directly done
    {
      printf("\nYou successfully purchaesd candy, Thank you!");
    }
    else if (amount < price)
    {
      float value;//if it is less then it will calculate how much amount is needed
      value = price - amount;
      printf("\nInsufficient funds,You need $%.2f funds!", value);
    }                        
    else
    {
      float change;//if it is greater then it will return the extra amount by substracting
      change = amount - price;
      printf("You successfully purchased candy, here is your change = %.2f", change);
    }
    break;
  case 4:
    price = 1.25;//price of product
    if (amount == price) //if the amt is equal the payment can be directly done
    {
      printf("\nYou successfully purchaesd water, Thank you!");
    }
    else if (amount < price)
    {
      float value;//if it is less then it will calculate how much amount is needed
      value = price - amount;
      printf("\nInsufficient funds,You need $%.2f funds!", value);
    }
    else
    {
      float change;//if it is greater then it will return the extra amount by substracting
      change = amount - price;
      printf("You successfully purchased water, here is your change = %.2f", change);
    }
    break;
  case 5:
    price = 0.50;//price of product
    if (amount == price) //if the amt is equal the payment can be directly done
    {
      printf("\nYou successfully purchaesd gum, Thank you!");
    }
    else if (amount < price)
    {
      float value;//if it is less then it will calculate how much amount is needed
      value = price - amount;
      printf("\nInsufficient funds,You need $%.2f funds!", value);
    }
    else
    {
      float change;
      change = amount - price;//if it is greater then it will return the extra amount by substracting
      printf("You successfully purchased gum, here is your change = %.2f", change);
    }
    break;
  default:
    printf("\nYou entered invalid item code!!!!!");
  }
  return 0;
}