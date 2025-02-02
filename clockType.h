#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H




class clockType {
public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType&) const;
    //constructor here:
    clockType(int, int, int); //constructor with parameters
    clockType(); //default constructor

private:
    int hr;
    int min;
    int sec;
};

#endif