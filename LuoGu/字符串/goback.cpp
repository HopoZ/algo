/*** 
 * @Author: entelechy 2021110871@stu.hit.edu.cn
 * @Date: 2023-09-29 03:50:04
 * @LastEditors: entelechy 2021110871@stu.hit.edu.cn
 * @LastEditTime: 2023-09-30 00:00:30
 * @FilePath: \LuoGu\goback.cpp
 * @Description: God said, Let there be light: and there was light.
 * @
 * @Copyright (c) 2023 by future, All Rights Reserved. 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
  int bmax = 0, gmax = 0;
  string str;
  cin >> str;
//   for (auto e : str) {
//     if (e == 'b') {
//       boy[0]++;
//     } else if (e == 'o') {
//       boy[1]++;
//     } else if (e == 'y') {
//       boy[2]++;
//     } else if (e == 'g') {
//       girl[0]++;
//     } else if (e == 'i') {
//       girl[1]++;
//     } else if (e == 'r') {
//       girl[2]++;
//     } else if (e == 'l') {
//       girl[3]++;
//     }
//   }
    for(int i =0;i<str.size();i++){
        if(str[i]=='b'){
            bmax++;
            if(str[i+1]=='o'){
                i++;
                if(str[i+1]=='y') i++;
            }
            
        }
        else if(str[i]=='o'){
            bmax++;
            if(str[i+1]=='y') i++;
        }
        else if(str[i]=='y'){
            bmax++;
        }
        else if(str[i]=='g'){
            gmax++;
            if(str[i+1]=='i'){
                i++;
                if(str[i+1]=='r'){
                    i++;
                    if(str[i+1]=='l'){
                        i++;
                    }
                }
            }
        }
        else if(str[i]=='i'){
            gmax++;
            if(str[i+1]=='r'){
                    i++;
                    if(str[i+1]=='l'){
                        i++;
                    }
                }
        }
        else if (str[i]=='r')
        {
            gmax++;
             if(str[i+1]=='l'){
                        i++;
                    }
        }
        else if (str[i]=='l')
        {
            gmax++;
        }
        
        
    }
  cout << bmax << '\n' << gmax;

  return 0;
}