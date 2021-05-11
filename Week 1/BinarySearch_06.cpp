int Solution::findCount(const vector &A, int B) {
return upper_bound(A.begin(),A.end(),B)-lower_bound(A.begin(),A.end(),B);
}
