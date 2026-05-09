#include <bits/stdc++.h>
using namespace std;
    class player
        {
            private:
            int health;
            int age;
            int score;
            bool alive;

            public:
            int gethealth()
                {
                    return health;
                }
            int getage()
                {
                    return age;
                }
            int getscore()
                {
                    return score;
                }
            int isalive()
                {
                    return alive;
                } 
            void sethealth(int health)
                {
                    this->health= health;
                }
            void setage(int age)
                {
                    this->age=age;
                }
            void setscore(int score)
                {
                    this->score=score;
                }
            void isalive(bool alive)
                {
                    this->alive=alive;
                }               

        };
     
    int addscore(player a,player b)
        {
            return a.getscore()+b.getscore();
        }  
        
    player getmaxscore(player a,player b)
        {
            if(a.getscore() > b.getscore()) return a;
            else return b;
        }    
        

    int main()
        {
            player shuvo;
            player maruf;

            shuvo.setage(20);
            shuvo.sethealth(189);
            shuvo.setscore(500);

            maruf.setage(25);
            maruf.sethealth(150);
            maruf.setscore(600);

            cout<<addscore(shuvo,maruf)<<endl;
            player bigshow=getmaxscore(shuvo,maruf);
            cout<<bigshow.getscore()<<endl;
        }