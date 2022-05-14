//
// Created by tionu on 4/24/2022.
//

#include "Uitlity.h"

///date validation funciton
///@param day of month
///@param month of year
///@param year of date
bool Uitlity::validDate(unsigned int day, unsigned int month, unsigned int year) {
    if (day <= 0)
        return false;
    if (month <= 0 || month > 12)
        return false;
    if (year < 2022)
        return false;
    switch (month) {
        case 1:
            if (day > 31)
                return false;
            break;
        case 2:
            if ((day > 28 && year % 4 != 0) || (day > 29))
                return false;
            break;
        case 3:
            if (day > 31)
                return false;
            break;
        case 4:
            if (day > 30)
                return false;
            break;
        case 5:
            if (day > 31)
                return false;
            break;
        case 6:
            if (day > 30)
                return false;
            break;
        case 7:
        case 8:
            if (day > 31)
                return false;
            break;
        case 9:
            if (day > 30)
                return false;
            break;
        case 10:
            if (day > 31)
                return false;
            break;
        case 11:
            if (day > 30)
                return false;
            break;
        case 12:
            if (day > 31)
                return false;
            break;
    }
    return true;
}

///validates a barcode
///@param barcode given barcode
bool Uitlity::validBarcode(const std::string& barcode) {
    for (const char& c : barcode)
        if(!std::isdigit(c))
            return false;
    if(barcode.length() != 7)
        return false;
    return true;
}
