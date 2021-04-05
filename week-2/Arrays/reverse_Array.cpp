//https://www.hackerrank.com/challenges/arrays-ds/problem
vector<int> reverseArray(vector<int> a) {

    //reverse(a.begin(),a.end());
    int i=0;
    while(i<a.size()/2){
        swap(a[i],a[a.size()-i-1]);
        i++;
    }

    return a;
}
