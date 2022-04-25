//
// Created by tionu on 4/24/2022.
//
#include "../Domain/Product.h"

#ifndef PROJECT1_ELECTRONICS_H
#define PROJECT1_ELECTRONICS_H


class Electronics : public Product {
private:
    unsigned int guarantee;
protected:
    std::string print() const override;
public:
    Electronics();
    Electronics(const std::string&, const std::string&, const std::string&, double, unsigned int, unsigned int);
    unsigned int getGuarantee() const;
    void setGuarantee(unsigned int);
    friend std::ostream& operator<<(std::ostream&, const Electronics&);
};


#endif //PROJECT1_ELECTRONICS_H
