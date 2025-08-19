#include <iostream>
enum class Days
{
 Monday,
 Tuesday,
 Wednesday,
 Thursday,
 Friday,
 Saturday,
 Sunday
};
int main()
{
 	 Days myday = Monday;
 std::cout << "The enum value is now Monday." << '\n';
 if (myday == Monday)
 {
 myday = Friday;
 }
 std::cout << "Nobody likes Mondays. The value is now Friday.";
}
