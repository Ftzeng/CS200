#include <iostream >
#include <string>
using namespace std;

int main()
{

	float ratio;
	cout << "How many batches do you want to make? " << endl;
	cin >> ratio;



	float tspBakingSoda = 1 * ratio;                     //Q: why we are using float but not DOUBLE??        A: It takes less memory 
	float tspBakingPowder = 0.5 * ratio; 
	float cupsOfButter = 1 * ratio;
	float cupsOfSugar = 1.5 * ratio;
	float eggs = 1 * ratio; 


	

	cout << tspBakingSoda << " tsp baking soda " << endl << endl;
	cout << tspBakingPowder << " tsp baking powder " << endl << endl;
	cout << cupsOfButter << " c butter " << endl << endl;
	cout << cupsOfSugar << " 1/2 c white sugar " << endl << endl;
	cout << eggs << " egg" << endl;


	while (true);  //kludgey fix                     //what while(true)
	return 0; 
}


/*

How many batches do you want to make?
100
100 tsp baking soda

50 tsp baking powder

100 c butter

150 1/2 c white sugar

100 egg

*/