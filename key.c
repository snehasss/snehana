#include <iostream>
using namespace std;

int main() {

	int size;
	int row;
	int col;
	int quit;

	cout <<"Please enter a number between 1 and 10: ";
	cin >> size;
	if (size < 0, size > 10)
        {
		cout <<"That is not a positive number, please try again!! " <<endl;
		cin >> size;
	    }


	while(true)
	{
		for (int row = 0; row < size; row++){

			for (int col = 0; col < size; col++){
				if (row==0 || row == (size-1) )
				{
					if (col == 0 || col == size - 1)
						cout <<  "-";
					else {

						cout << "-";
					} 

				}
				else if (col==0 || col == (size-1) )
					cout <<"|";
				else
					cout <<" ";
			}

			cout << endl;
		}
		cout << "Try again or press q to quit" << endl;


		break;


	}
	return 0;
}
