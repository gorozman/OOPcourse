/*
დაწერეთ პროგრამა, სადაც ობიექტების ინიციალიზაცია უნდა განხორციელდეს კლასის
გამოყენებით , რომელშიც არის ერთი დახურული ცვლადი და ღია ორი მეთოდი , ერთი
მეთოდი ანიჭებს მთელი ტიპის დახურულ ცვლადს მნიშვნელობას , მეორე აბრუნებს ამ
დახურული ცვლადის მნიშვნელობას. შექმენით ობიექტების მასივი, რომელის ზომასაც
განვსაზღვრავთ კლავიატურიდან შეტანილი მნიშვნელობით და არა წინასწარ. ობიექტების
მასივის შეტანა უნდა მოხდეს ასევე კლავიატურიდან და არ უნდა გაჩერდეს მანამ,
სანამ არ შევიტანთ 0- ს;
*/

#include <iostream>
using namespace std;

class problem5
{
  private:
    int a;
  public:
    void set(int tmp)
    {
      a = tmp;
    }
    int get()
    {
      return a;
    }
};

int main()
{
  problem5 *a;
  int n, i=0, j; //მასივის სასურველი განზომილება და სხვა დამხმარე ცვლადები
  cout<<"შემოიტანეთ მასივის განზომილება n=";
  cin>>n; //ამოცანის პირობიდან გამომდინარე, აქ შეგიძლიათ შეიტანოთ რაც შეიძლება დიდი რიცხვი, ვინაიდან კლავიატურიდან შეგვაქვს რიცხვები
          //ლოგიკურია ვივარაუდოთ, რომ ელემენტების რაოდენობა არ იქნება მაგალითად 10000-ზე მეტი.
  a = new problem5 [n];
  cin>>j;
  while (j!=0 && i<n)
  {
    a[i].set(j);
    i++;
    cin>>j;
  }
  cout<<"შემოტანილი ელემენტების რაოდეონბაა "<<n<<endl;
  for (j=0;j<=i;j++)
    cout<<"a["<<j<<"].get() "<<a[j].get()<<endl;
  cout<<endl;
  return 0;
}