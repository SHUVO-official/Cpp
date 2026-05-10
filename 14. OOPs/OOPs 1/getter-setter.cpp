    #include <bits/stdc++.h>
    using namespace std;
    class player
            {
                private:
                int score;      //data members
                int health;


                public:
                            //setter
                void sethealth(int h)
                    {
                        cout<<"Health Change Kortese: "<<endl;
                        health=h;
                    }
                void setscore(int s)
                    {
                        cout<<"Score change kortese. "<<endl;
                        score=s;
                    }  
                            //getter
                int getscore()
                        {
                            return score;
                        }              
                int gethealth()
                        {
                            return health;
                        }        
            };

 
    int main()
        {
            // player amit;
            // amit.score=90;
            // amit.health=86;
            // amit.showhealth();
            // amit.showscore();

            player shuvo;
            shuvo.setscore(100);
            cout<<shuvo.getscore()<<endl;
            shuvo.sethealth(500);
            cout<<shuvo.gethealth();

        } 