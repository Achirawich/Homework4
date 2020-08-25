#include <iostream>
using namespace std;
int main()
{
	char grade ;
	float GPA = 0 ;
	int   total=0,t = 0 ;

	do {
	cout << "Enter the letter grade(Enter 'X' to exit)" << endl;
	cin  >> grade ;
	if (grade == 'a' || grade == 'A')total +=4;
	else if (grade == 'b' || grade == 'B') total +=3;
	else if (grade == 'c' || grade == 'C') total +=2;
	else if (grade == 'd' || grade == 'D') total +=1;
	else if (grade == 'f' || grade == 'F') total +=0;
	else if (grade == 'X' || grade == 'X') break;

	t++;

}
	while (grade != 'X' && grade !='x');

	cout << "Total grade Point" << total << endl;
	cout << "GPA : " <<(float) total/t<<endl;
	
	system("pause");
	return 0;

	//Achirawich Sanjaikla 6306021621065 IT sec B
}