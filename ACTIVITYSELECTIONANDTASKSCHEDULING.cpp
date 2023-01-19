ACTIVITY SELCTION
-----------------------
#include <bits/stdc++.h>
using namespace std;

struct node{
    int start;
    int ending;
    int index;
};
bool comp(node a,node b){
    return a.ending < b.ending;
}

int main()
{
    int n;
    cin >> n;
    vector<node> activity(n);
    for (int i = 0; i < n; i++){
        cin >> activity[i].start;
        activity[i].index = i + 1;
    }
    for (int i = 0; i < n; i++){
        cin >> activity[i].ending;
    }
    sort(activity.begin(), activity.end(), comp);
    int lastEnd=-1;
    vector<int> act;
   for (auto it : activity)
    {
        if(it.start >=lastEnd){
            lastEnd = it.ending;
            act.push_back(it.index);
        }
    }

    cout << "No. of non conflicting activities: " << act.size();
    cout << "\nList of selected activities: ";
    for (auto it : act){
        cout << it << ", ";
    }
        return 0;
}
------------------------------------------------------------------------------
  =================================================================================
------------------------------------------------------------------------------
 TASK SCHEDULING
 -----------------
 #include <bits/stdc++.h>

using namespace std;

struct node{
    int time;
    int deadline;
    int index;
};

bool comp(node a,node b){
    return a.deadline < b.deadline;
}

int main()
{
    int n;
    cin >> n;
    vector<node> activity(n);

    for (int i = 0; i < n; i++){
        cin >> activity[i].time;
         activity[i].index=i+1;
    }

    for (int i = 0; i < n; i++){
        cin >> activity[i].deadline;
    }

    sort(activity.begin(), activity.end(), comp);
    int lasttimer=0;
    vector<int> act;

    for (auto it : activity)
    {
        if(it.time+lasttimer <= it.deadline){
            lasttimer = it.time+lasttimer;
            act.push_back(it.index);
        }
    }

    cout << "Max no. of tasks=  " << act.size();
    cout << "\nselected task numbers: ";
    for (auto it : act){
        cout << it << ", ";
    }
    return 0;
}
------------------------------------------------------------------
