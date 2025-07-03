main()
{
  msg();
  msg();
  msg();
}
msg()
{
  static int x;  //local variable of msg
  printf("\n X=%d",x);
  x++;   //2
} // when control goes outside the msg then x will be destroyed
// 1  2

// static   - life untill end of program
// static variable retain itself last value within multiple function calls
