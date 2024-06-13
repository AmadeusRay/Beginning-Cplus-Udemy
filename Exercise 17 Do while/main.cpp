#include <vector>
#include <iostream>
using namespace std;

//vector<char> name = {'f','r', 'a','n','k'};
//vector<char> name = {'f','r'};
//vector<char> name = {};
//vector<char> name = {'h','e', 'l','l','o'};
vector<char> name = {'F','R','A','N','K'};

// Assignment is ignoring caps like they aren't vowels. So A is not a vowel.

/*******************************************************
 * Write your code in the provided area.
 *
 * This function should use a do while loop to iterate over
 * the automatically provided vector (vec) of characters looking
 * for the first occurrence of a lowercase English vowel ('a','e','i','o','u').
 *
 * If a vowel is found, you should display to cout:
 *
 * "Vowel found: " followed by the vowel that was found.
 *
 * If no vowel is found in the vector, then you should display to cout:
 *
 * "No vowel was found"
 *
 * For example, below are several examples of vectors and what your output should be:
 *
 * {'f','r','a','n','k'}    Vowel found: a
 * {'F','R','A','N','K'}    No vowel was found
 * {'h','e','l','l','o'}    Vowel found: e
 * {}                       No vowel was found
 * {'x','y','z','o'}        Vowel found: o
 *
 * Please do NOT add std::endl or '\n' to your output statement.
 * *****************************************************/
void find_first_vowel(const std::vector<char>& vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    bool vowelFound = false;
    int i = 0;

 do{
    if (vec.empty()) {
        std::cout << "No vowel was found";
        break;
    }
     if (vec[i] == 'a' || vec[i] == 'e' || vec[i] == 'i' || vec[i] == 'o' || vec[i] == 'u') // Is there an easier way to
         // do this without constantly typing vec[i]
     {
         std::cout << "Vowel found: " << vec[i];
         vowelFound = true;
         break;
     }
     else {
        ++i;
     }

 } while (i<vec.size());

    if (!vec.empty() && !vowelFound)
    {
        std::cout<<"No vowel was found";
    }
}

int main()
{
    find_first_vowel(name);
}