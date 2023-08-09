class Solution {
public:
    vector<int> leaders(int a[], int n) {
        vector<int> ans;
      //making array named ans show that we can store value in it
        int maxRight = a[n - 1];  // The last element is always a leader so we r inserting the value in ans vector via using push_back
        ans.push_back(maxRight);

        for (int i = n - 2; i >= 0; i--) {
          //here we have made a for loop in which starting index is (last-1) and i comiing from back to 0
            if (a[i] > maxRight) {
              //checking the conditon if a[i] is grerater than store the value inside the maxright
                maxRight = a[i];
              //then pushing the max right into the ans 
                ans.push_back(maxRight);
            }
        }

        reverse(ans.begin(), ans.end());  // Reversing to get the correct order of leaders
        return ans;
      //this step is necesarry to get the ans in decenading order
    }
};
