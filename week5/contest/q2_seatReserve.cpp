//https://leetcode.com/contest/biweekly-contest-51/problems/seat-reservation-manager/

//using priorityqueue
//O(nlogn) time and O(n) space
class SeatManager {
    priority_queue<int, vector<int>, greater<int>> pq;
    //vector<bool> arr;
public:
    SeatManager(int n) {
        //arr.resize(n, false);
        for(int i=0;i<n;i++){
            pq.push(i);
        }
    }
    
    int reserve() {
       int tmp = pq.top();
        pq.pop();
        return tmp+1;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber-1);
    }
};

//std::set can also be used
//O(n) time and space
