#include<bits/stdc++.h>
// Add any extra import statements you may need here

using namespace std; 

// Add any helper functions you may need here
int checkEqual(vector<int>& array_a, vector<int>& array_b) {
 for (int index = 0; index < array_a.size(); index++) {
    if (array_a[index] != array_b[index]) {
      return index;
    }
  }
  return -1; 
}

bool areTheyEqual(vector<int>& array_a, vector<int>& array_b) {
  if (array_a.size() != array_b.size()) {
    return false;
  } 
  int reverseIndex = checkEqual(array_a, array_b);
  /*if (reverseIndex == -1) {
    return true;
  }*/
  while (reverseIndex != -1) {
    for (int auxIndex = array_a.size() - 1; auxIndex > reverseIndex; auxIndex--) {
      if (array_a[reverseIndex] == array_b[auxIndex]) {

      }
    }
    reverseIndex = 
  }
}

// These are the tests we use to determine if the solution is correct.
// You can add your own at the bottom.

int test_case_number = 1;

void check(bool expected, bool output) {
  bool result = (expected == output);
  const char* rightTick = u8"\u2713";
  const char* wrongTick = u8"\u2717";
  if (result) {
    cout << rightTick << "Test #" << test_case_number << "\n";
  }
  else {
    cout << wrongTick << "Test #" << test_case_number << ": Expected ";
    printf("%s", expected ? "true" : "false");
    cout << " Your output: ";
    printf("%s", output ? "true" : "false");
    cout << endl; 
  }
  test_case_number++;
}

int main(){
  vector <int> array_a_1{1, 2, 3, 4};
  vector <int> array_b_1{1, 4, 3, 2};
  bool expected_1 = true;
  bool output_1 = areTheyEqual(array_a_1, array_b_1); 
  check(expected_1, output_1); 

  vector <int> array_a_2{1, 2, 3, 4};
  vector <int> array_b_2{1, 4, 3, 3};
  bool expected_2 = false;
  bool output_2 = areTheyEqual(array_a_2, array_b_2); 
  check(expected_2, output_2); 


  // Add your own test cases here
  
  return 0; 
}