class Student :  public Person{
    private:
        vector<int> testScores;  
    public:
        Student(string firstName, string lastName, int identification, vector<int> scores) : Person(firstName, lastName, identification) {
            this->testScores = scores;
        }   

        char calculate() {
            int average = 0;
            for(int i = 0; i < testScores.size(); i++) {
                average += testScores[i];
            }
            average = average / testScores.size();

            if(average >= 90) {
                return 'O';
            }
            else if(average >= 80) {
                return 'E';
            }
            else if(average >= 70) {
                return 'A';
            }
            else if(average >= 55) {
                return 'P';
            }
            else if(average >= 40) {
                return 'D';
            }
            else {
                return 'T';
            }
        }
};