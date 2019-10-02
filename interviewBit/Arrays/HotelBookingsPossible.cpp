/*Problem link 
https://www.interviewbit.com/problems/hotel-bookings-possible/
*/

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int, char> > ans; 

    // create a common vector both arrivals 
    // and departures. 
    for (int i = 0; i < arrive.size(); i++) { 
        ans.push_back(make_pair(arrive[i], 1)); 
        ans.push_back(make_pair(depart[i], 0)); 
    } 

    // sort the vector 
    sort(ans.begin(), ans.end()); 

    int curr_active = 0, max_active = 0; 

    for (int i = 0; i < ans.size(); i++) { 

        // if new arrival, increment current 
        // guests count and update max active 
        // guests so far 
        if (ans[i].second == 1) { 
            curr_active++; 
            max_active = max(max_active, 
                            curr_active); 
        } 

        // if a guest departs, decrement 
        // current guests count. 
        else
            curr_active--; 
    } 

    // if max active guests at any instant 
    // were more than the available rooms, 
    // return false. Else return true. 
    return (K >= max_active);
}
