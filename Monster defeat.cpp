/*
Problem Statement:

While playing an RPG game, you were assigned to complete one of the hardest quests in this game. There are n monsters you’ll need to defeat in this quest. Each monster i is described with two integer numbers – poweri and bonusi. To defeat this monster, you’ll need at least poweri experience points. If you try fighting this monster without having enough experience points, you lose immediately. You will also gain bonusi experience points if you defeat this monster. You can defeat monsters in any order.

The quest turned out to be very hard – you try to defeat the monsters but keep losing repeatedly. Your friend told you that this quest is impossible to complete. Knowing that, you’re interested, what is the maximum possible number of monsters you can defeat?

(Question difficulty level: Hardest)

Input:

The first line contains an integer, n, denoting the number of monsters. The next line contains an integer, e, denoting your initial experience.
Each line i of the n subsequent lines (where 0 ≤ i < n) contains an integer, poweri, which represents power of the corresponding monster.
Each line i of the n subsequent lines (where 0 ≤ i < n) contains an integer, bonusi, which represents bonus for defeating the corresponding monster.
Input	Output	Output Description
2
123
78
130
10
0	2	
Initial experience level is 123 points.
Defeat the first monster having power of 78 and bonus of 10. Experience level is now 123+10=133.
Defeat the second monster.
3
100
101
100
304
100
1
524
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int e;
   cin>>e;
   int po[n];
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
       cin>>po[i];
   }
   int bo;
   for(int i=0;i<n;i++)
   {
       cin>>bo;
       mp[po[i]]=bo;
   }
   for(auto i:mp)
   {
       cout<<i.first<<" "<<i.second<<endl;
   }
  
    int val,cnt=0,bon;
    for(auto i:mp)
    {
       val=i.first;
       bon=i.second;
       
    
    if(e>=val)
    {
        e=e+bon;
        cnt++;
        
        
    }
    else
    {
        break;
    }
    }
    cout<<cnt;

    return 0;
}
