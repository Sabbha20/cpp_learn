#include <iostream>
#include <string>

enum class Day {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

void dayToString(Day d){
    switch (d)
    {
    case Day::Mon:
        std::cout <<  "Monday";
        break;
    case Day::Tue:
        std::cout <<  "Tuesday";
        break;
    case Day::Wed:
        std::cout <<  "Wednesday";
        break;
    case Day::Thu:
        std::cout <<  "Thursday";
        break;
    case Day::Fri:
        std::cout <<  "Friday";
        break;
    case Day::Sat:
        std::cout <<  "Saturday";
        break;
    case Day::Sun:
        std::cout <<  "Sunday";
        break;
    default:
        std::cout <<  "Invalid";
        break;
    }

}

std::string returnStringDays(Day d){
    switch(d){
            case Day::Mon:
                return "Monday";
            case Day::Tue:
                return "Tuesday";
            case Day::Wed:
                return "Wednesday";
            case Day::Thu:
                return "Thursday";
            case Day::Fri:
                return "Friday";
            case Day::Sat:
                return "Saturday";
            case Day::Sun:
                return "Sunday";
            default:
                return "Invalid";
    }
}


int main(){

    Day today = Day::Wed;
    Day weekend = Day::Sat;
    if (today == Day::Wed){
        std::cout << "Midweek!" << std::endl;
    } else {
        std::cout << "Not Wednesday!" << std::endl;
    }

    std::cout << "Weekend is: " << returnStringDays(weekend) << std::endl;
    std::cout << "Today is:";
    dayToString(today);
    std::cout << std::endl;


    return 0;
}