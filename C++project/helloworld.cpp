#include <iostream>
using namespace std;
class password{
  private:
  int a;
  public:
  void set(int x){
    a = x;
  }
  void pass(int b){
   if ( a == b) {
            cout << "Your password is correct" << endl;
        } else {
            cout << "Password is wrong" << endl;
        }
  }
};
int main(){
  password obj;
  int user,per;
  cout <<"set a password: ";
  cin>>user;
  obj.set(user);
  cout <<"enter your password: ";
  cin>>per;
  obj.pass(per);
  return 0;
}
