/**------------------------------------------
    Layered Pine Tree

    System: MacOS and VS Code
    Author: Nuha Abougoash
 ---------------------------------------------**/

#include <iostream>   // for cin and cout
#include <iomanip>    // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main()
{
    // Display the menu and get the user choice
    int menu_option = 0;
    cout << "Program 1: The Pine Tree            \n"
         << "Choose from the following options:  \n"
         << "   1. Display the HELLO graphic  \n"
         << "   2. Display The Pine Tree        \n"
         << "   3. Exit the program          \n"
         << "Your choice -> ";
    cin >> menu_option;
    
    if (menu_option == 3) { // Handle menu option of 3 to exit
        exit(0); // The call to exit the code successfully (0 means the runs didn't encounter any problem).  
    }

    else if (menu_option == 1) { // Handle menu option of 1 to display custom ASCII graphics
        // Display ASCII graphics for "HELLO".  
	// The main purpose of this part is to give you hints about usnig setw and setfill and their behaviors.
	
	//the character for the frame of our display.
	char frame = '-';
	cout << "Enter your frame character: ";
        cin >> frame;	
	cout << endl;
	// The goal of next three lines is to print a line with 77 dashes differently. 
	cout << setfill(frame); //change the default character for filling the fields defined using setw. You can change it fill to different character to see the difference.
        cout << setw(78) << "\n"; // \n counts in 78 so you will get 77 dashes plus one \n  
        cout << setw(78) << endl; ///after setfill you need to pass a string or character to push setfil to fill the field, otherwise you will see an empty line for this instruction. See the differnce in output from this line and the above line. 
        cout << setw(77) << frame << endl; //I use 77 with setfill and one extra at the end to get the same result
        
	cout << setw(8) << " " << "   **    **    ********    **         **         ********    " << setw(9) << "\n";
        cout << setw(8) << " " << "   **    **    ********    **         **         ********    " << setw(9) << "\n";
        cout << setw(8) << " " << "   **    **    **          **         **         **    **    " << setw(9) << "\n";
        cout << setw(8) << " " << "   ********    ********    **         **         **    **    " << setw(9) << "\n";
        cout << setw(8) << " " << "   ********    ********    **         **         **    **    " << setw(9) << "\n";
        cout << setw(8) << " " << "   **    **    **          **         **         **    **    " << setw(9) << "\n";
        cout << setw(8) << " " << "   **    **    ********    ********   ********   ********    " << setw(9) << "\n";
        cout << setw(8) << " " << "   **    **    ********    ********   ********   ********    " << setw(9) << "\n";
        cout << setw(77) << frame << endl; //the extra character is - so in total we will have 77 dashes.
        cout << setw(78) << "\n"; //again, the extra character is \n so you have set the width to 78	
	
	//you can do it this way using a for-loop too 
	 for (int i = 0; i < 77; i++) {
            cout << frame;
        }
        cout << endl;

    } else if (menu_option == 2) {
        //PRINTING PINE TREE
        // Prompt for and get the number of layers for the tree.
        int number_of_tree_layers = 0;
	cout << "Number of tree layers -> ";
        cin >> number_of_tree_layers;
        
	cout << endl; //do not remove this line. It is essential for the autograder! 
	
        // declare varibles
        int spaces = 1;
        int stars = 1;
        int rows = 3;
        int i, j, k; 

        if (number_of_tree_layers >= 1 ) {
                spaces = number_of_tree_layers; // set the number of spaces is equal to number of layers

                for (int x=0; x < number_of_tree_layers; x++) {

                for (i = 0; i < rows; i++) // loop to print each row of the stars for each layer
                {
                        for (j = 0; j <= spaces; j++) // loop to print the spaces before each star for each layer
                        {
                        cout << " ";
                        }
                        spaces--;

                        for(k = 0; k < stars; k++) // loop to print the correct number of starts for each layer
                        {
                        cout << "*";
                        }
                        stars += 2;
                        cout << endl;
                }
                stars -= 4;
                spaces += 2;
                }
        }

        // PRINTING TRUNK
        int trunk = 2 * number_of_tree_layers;                  // trunk length is double of the number of layers of the pine tree

        for (int x = 0; x < trunk; x++)              // this for loop will  print each trunk layer
        {
                for (int y = 1; y <= number_of_tree_layers; y++)  // this for loop is to print total number of initial spaces that exist before the trunk is printed 
                cout << " ";

                
                for (int z = 0; z < 3; z++)             // this for loop will print the '|' characters for each layer
                cout << "|";

                cout << endl;                           // changing row  after printing each row of root
        }

    } //end if( menu_option == 2)

    cout << endl; //DO NOT CHANGE THIS LINE
    
    return 0;
}
