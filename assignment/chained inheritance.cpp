#include <iostream>
using namespace std;

// Base class
class Payment {
public:
    virtual void pay() {
            cout << "Making a payment." << endl;
                }

                    virtual ~Payment() = default;
                    };

                    // Derived class 1
                    class CashPayment : public Payment {
                    public:
                        void pay() override {
                                cout << "Payment made using cash." << endl;
                                    }
                                    };

                                    // Derived class 2
                                    class MobileMoneyPayment : public Payment {
                                    public:
                                        void pay() override {
                                                cout << "Payment made using mobile money." << endl;
                                                    }
                                                    };

                                                    int main() {
                                                        CashPayment cash;
                                                            MobileMoneyPayment mobile;

                                                                Payment* payment;

                                                                    payment = &cash;
                                                                        payment->pay();

                                                                            payment = &mobile;
                                                                                payment->pay();

                                                                                    return 0;
                                                                                    }