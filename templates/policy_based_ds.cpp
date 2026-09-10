// Policy-Based Data Structure (Ordered Set)
// Source: Used across CF 1300-1600 range problems

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

// Ordered Set: supports order_of_key and find_by_order
// Note: uses less_equal to allow duplicates
template <class T>
using oset = tree<T, null_type, less_equal<T>, rb_tree_tag,
                   tree_order_statistics_node_update>;

/*
    order_of_key(val)  -> 0-based count of elements strictly less than val
    find_by_order(k)   -> iterator to k-th element (0-indexed)

Usage:
    oset<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(7);

    // Find k-th smallest element (0-indexed)
    auto it = s.find_by_order(2);  // points to 3rd element

    // Count elements less than val
    int cnt = s.order_of_key(5);  // number of elements < 5

    // To remove elements (since less_equal allows duplicates):
    s.erase(s.lower_bound(val));
*/
