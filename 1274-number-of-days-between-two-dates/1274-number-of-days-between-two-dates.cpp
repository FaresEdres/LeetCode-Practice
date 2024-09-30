class Solution {
public:
    time_t stringToDate(string date){
        struct tm time={0};
        time.tm_year=stoi(date.substr(0,4))-1900;
        time.tm_mon=stoi(date.substr(5,2))-1;
        time.tm_mday=stoi(date.substr(8,2));
        return mktime(&time);
    }
    int daysBetweenDates(string date1, string date2) {
        time_t t1,t2;
        int result;
        t1=stringToDate(date1);
        t2=stringToDate(date2);
result=abs(difftime(t1,t2)/(60*60*24));
return result;
    }
};