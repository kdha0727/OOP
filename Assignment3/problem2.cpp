// Yonsei University 2020-2
// CSI2102-01: Object-Oriented Programming
// Dongha Kim, 2020191089, premed.
/**
    "Mcdonalds Delivery System"
    C++ console implementation of Mcdonalds Delivery System.
**/

/* Include */

#include <iostream>
#include <string>


/* Global constant */

const int MAX_USER = 100;


/* Internal operation function declarations */

int getMenuPrice(int code);
std::string getMenuName(int code);


/* Class declarations */

class IntList {
    /**
        C++ partial list implementation (member function name from python)
    **/

private:
    // Data attribute
    int* array{new int[0]};  // Internal data array
    int totalNum{0};  // Length of array
    int _append(int newElement, int length);  // Internal
    int _pop(int index);  // Internal

public:
    // Constructor
    IntList() = default;  // L.__init__()

    // Member function
    int append(int newElement, int length = 1) {return _append(newElement, length);}  // L.append(int)
    int pop(int index = -1) {return _pop(index==-1? len()-1: index);}  // L.pop(object)
    int len() const {return totalNum;}  // L.__len__()

    // Operator
    int operator[](int index) const {return array[index];}  // L.__getitem__(int)
};

class User {
    /**
        User class
    **/

private:
    // Data attribute
    std::string id, password;  // Default information
    int money{0};  // Total money user has
    IntList* menu{new IntList};  // Menu List

public:
    // Constructor
    User();
    User(const std::string& newID, const std::string& newPassword, int newMoney);

    // Handler member function
    bool refund(int opt);
    void order(int code, int length);
    void showOrderCondition(bool newline) const;

    // Getter
    std::string getID() const {return id;}
    int getTotalPrice() const;
    int getMoney() const {return money;}
    int getCharge() const {return getMoney() - getTotalPrice();}
    // Intentionally no getter for password

    // Member function for auth
    bool is_authenticated() const {return !id.empty();}
    bool is_anonymous() const {return id.empty();}
    bool check_password(const std::string& other_password) const {return password==other_password;}

    // Operator
    friend std::ostream& operator <<(std::ostream& os, const User& user) {os<<user.id; return os;}
};


/* Handler function declarations */

char getOption              ();  // option getter
void handleSignUp           (User userList[], const User& currentUser);  // opt 1
void handleLogin            (User userList[], User& currentUser);  // opt 2
void handleShowMenu         ();  // opt 3
void handleOrder            (User& currentUser);  // opt 4
void handleOrderCondition   (const User& currentUser);  // opt 5
void handleRefund           (User& currentUser);  // opt 6
void handleLogout           (User& currentUser);  // opt 7
void handleExit             ();  // opt 0 (partial)
void handleAlreadyLoggedIn  (const User& currentUser);  // internal
void handleNotUser          ();  // internal


/* Main program */

int main() {

    // Initialize
    User currentUser;
    User userList[MAX_USER];

    // Mainloop
    while(true) {

        // Handle with input
        switch(getOption()) {
            case '0':
                handleExit();
                return 0;  // Exit the program
            case '1':
                handleSignUp(userList, currentUser);
                break;
            case '2':
                handleLogin(userList, currentUser);
                break;
            case '3':
                handleShowMenu();
                break;
            case '4':
                handleOrder(currentUser);
                break;
            case '5':
                handleOrderCondition(currentUser);
                break;
            case '6':
                handleRefund(currentUser);
                break;
            case '7':
                handleLogout(currentUser);
                break;
            default:
                continue;  // Wrong input
        }
    }
}


/* Handler function definitions */

char getOption() {
    /** Display main program menu and get option **/

    // Declare character variable
    char opt;

    // Display main program menu
    std::cout <<
    "-----------------------------------\n"
    "-----Mcdonalds Delivery System-----\n"
    "-----------------------------------\n"
    "\n"
    "1. Sign up\n"
    "2. login\n"
    "3. Show Menu\n"
    "4. Order\n"
    "5. Order condition\n"
    "6. Refund\n"
    "7. Logout\n"
    "0. Exit\n"
    "Select -> ";

    // Return option character
    std::cin >> opt;
    return opt;
}

void handleNotUser() {
    /** Display no-user warning **/
    std::cout << "You have to login first\n"
                 "Return to main menu\n" << std::endl;
}

void handleAlreadyLoggedIn(const User& currentUser) {
    /** Display already-logged=in warning with displaying username **/
    std::cout << "You are already logged in to " << currentUser << " account\n"
              << "Return to main menu\n"
              << std::endl;
}

void handleSignUp(User userList[], const User& currentUser) {
    /** Register new user if not logged in **/

    // First, change line in main handler function
    std::cout << std::endl;

    // Check current user
    if(currentUser.is_authenticated()) {
        return handleAlreadyLoggedIn(currentUser);
    }

    // Declare and initialize values
    int i;
    std::string id;
    bool badInput(true);

    // Get id and index
    do {

        // Receive id input
        std::cout << "Input your ID(0-to main menu) : ";
        std::cin >> id;

        // Handle with exit signal
        if(id=="0") {
            std::cout << std::endl;
            return;
        }

        // Search for all user
        for(i=0;i<MAX_USER; i++) {
            if (userList[i].getID()==id) {  // user already exists
                std::cout << "Duplicated user id\n" << std::endl;  // show warning
                break;  // ask again
            }
            if (userList[i].is_anonymous()) {  // user does not exist
                badInput = false;
                break;  // get new index and break loop
            }
        }
    } while(badInput);

    // Receive password string
    std::string password;
    std::cout << "Input your password : ";
    std::cin >> password;

    // Receive money integer
    int money;
    std::cout << "Input your total money : ";
    std::cin >> money;

    // Make new user and register it to user list
    User user(id, password, money);
    userList[i] = user;

    // Greet new user
    std::cout << "\nWelcome, " << user << "\n" << std::endl;
}

void handleLogin(User userList[], User& currentUser) {
    /** Log user in if not logged in **/

    // First, change line in main handler function
    std::cout << std::endl;

    // Check current user
    if(currentUser.is_authenticated()) {
        return handleAlreadyLoggedIn(currentUser);
    }

    // Receive id string
    std::string id;
    std::cout << "Input your ID(0-to main menu) : ";
    std::cin >> id;

    // Handle with exit signal
    if(id=="0") {
        std::cout << std::endl;
        return;
    }

    // Search for all user
    for(int i=0; i<MAX_USER; i++) {

        if (userList[i].getID()==id) {  // Match

            // Initialize variables
            User& user = userList[i];
            std::string password;

            // Loop
            while(true) {

                // Continuously receive password string
                std::cout << "Input your password : ";
                std::cin >> password;

                if(user.check_password(password)) {
                    // If password matches, break loop.
                    break;
                }

                else {
                    std::cout << "Wrong password!\n";
                }
            }

            // Log user in session.
            currentUser = user;

            // Greet new user and terminate function
            std::cout << "\nWelcome, " << user << "\n" << std::endl;
            return;
        }
    }

    // No-match
    std::cout << "ID is not existing\n" << std::endl;
}

void handleShowMenu() {
    /** Show food menu **/
    std::cout << std::endl <<
    "----------Mcdonalds Menu----------\n"
    "1.  Hamburger               - 1000\n"
    "2.  Cheeseburger            - 1500\n"
    "3.  Big Mac                 - 3000\n"
    "4.  Quarter Pounder Burger  - 4000\n"
    "5.  Double Quarter Pounder  - 5000\n"
    "6.  Fries                   - 1500\n"
    "7.  Chicken McNuggets       - 2000\n"
    "8.  Coke                    - 1500\n"
    << std::endl;
}

void handleOrder(User& currentUser) {
    /** Add order **/

    // First, change line in main handler function
    std::cout << std::endl;

    // Check current user
    if(currentUser.is_anonymous()) {
        return handleNotUser();
    }

    // Declare and initialize variables
    int opt(0), menuPrice, menuNumber;
    std::string menuName;

    // Loop
    while (true) {

        // Receive option
        std::cout << "Select menu number(0-to main menu) : ";
        std::cin >> opt;

        // Handle with error signal
        if (opt == 0) {
            std::cout << "Your total purchase amount is " << currentUser.getTotalPrice() << '\n'
                      << "Your balance is " << currentUser.getCharge() << '\n'
                      << "Thanks\n" << std::endl;
            break;
        }

        // Get menu information from option
        menuName = getMenuName(opt);
        menuPrice = getMenuPrice(opt);

        // Handle with wrong user input  //TODO
        if(menuName.empty()) {
            std::cout << "Wrong input!\n" << std::endl;
            continue;
        }

        // Receive the number of menu
        std::cout << "How many '" << menuName << "' do you want : ";
        std::cin >> menuNumber;

        // Handle with charge shortage
        if(currentUser.getCharge()<menuPrice*menuNumber) {
            std::cout << "\nYou don't have enough money!\n" << std::endl;
            continue;
        }

        // Order each menu
        currentUser.order(opt, menuNumber);
        std::cout << std::endl;
    }
}

void handleOrderCondition(const User& currentUser) {
    /** Show order conditions **/

    // First, change line in main handler function
    std::cout << std::endl;

    // Check current user
    if(currentUser.is_anonymous()) {
        return handleNotUser();
    }

    // Show order conditions
    currentUser.showOrderCondition(true);
}

void handleRefund(User& currentUser) {
    /** Refund ordered menu **/

    // First, change line in main handler function
    std::cout << std::endl;

    // Check current user
    if(currentUser.is_anonymous()) {
        return handleNotUser();
    }

    // Declare and initialize variables
    bool gotoMain(false), wrongInput;
    int opt(0);

    // Loop
    while(!gotoMain) {

        // Show order conditions
        currentUser.showOrderCondition(false);

        // Loop
        wrongInput = true;
        while(wrongInput) {

            // Receive user input
            std::cout << "Choose number(0 - to main menu) : ";
            std::cin >> opt;

            // Handle with exit signal
            if(opt==0) {
                gotoMain = true;
                std::cout << std::endl;
                break;
            }

            // Refund menu
            wrongInput = !(currentUser.refund(opt));
            std::cout << std::endl;
        }
    }
}

void handleLogout(User& currentUser) {
    /** Log user out if logged in **/

    // First, change line in main handler function
    std::cout << std::endl;

    // Check current user
    if(currentUser.is_anonymous()) {
        return handleNotUser();
    }

    // Loop
    char opt;
    while(true){

        // Ask user if user will log self out
        std::cout << "If you want to logout, Please enter 1 (0-to main menu) : ";
        std::cin >> opt;

        // Handle with input
        switch(opt){

            // No
            case '0':
                std::cout << "Logout is canceled\n" << std::endl;
                return;  // Break

            // Yes
            case '1':
                currentUser = User();  // Log user out session
                std::cout << std::endl;
                return;  // Break

            // Wrong input
            default:
                std::cout << "Wrong input!" << std::endl;
        }
    }
}

void handleExit() {
    /** Display end message of program **/
    std::cout << "End the program" << std::endl;
}


/* Internal operation function definitions */

int getMenuPrice(int code) {
    /** Converter from menu code to price **/
    switch(code) {
        case 1:  // Hamburger
            return 1000;
        case 2:  // Cheeseburger
            return 1500;
        case 3:  // Big Mac
            return 3000;
        case 4:  // Quarter Pounder Burger
            return 4000;
        case 5:  // Double Quarter Pounder
            return 5000;
        case 6:  // Fries
            return 1500;
        case 7:  // Chicken McNuggets
            return 2000;
        case 8:  // Coke
            return 1500;
        default:
            return 0;
    }
}

std::string getMenuName(int code) {
    /** Converter from menu code to name **/
    switch(code) {
        case 1:  // Hamburger
            return "Hamburger";
        case 2:  // Cheeseburger
            return "Cheeseburger";
        case 3:  // Big Mac
            return "Big Mac";
        case 4:  // Quarter Pounder Burger
            return "Quarter Pounder Burger";
        case 5:  // Double Quarter Pounder
            return "Double Quarter Pounder";
        case 6:  // Fries
            return "Fries";
        case 7:  // Chicken McNuggets
            return "Chicken McNuggets";
        case 8:  // Coke
            return "Coke";
        default:
            return "";
    }
}


/* User class member function definitions */

User::User() /** Default and anonymous user constructor **/ = default;

User::User(const std::string& newID, const std::string& newPassword, int newMoney) {
    /** Sign-inned user constructor **/
    id = newID;
    password = newPassword;
    money = newMoney;
}

int User::getTotalPrice() const{
    // Total price getter function - complex getter
    int price(0);
    for (int i=0; i<menu->len(); i++) {
        price += getMenuPrice((*menu)[i]);
    }
    return price;
}

void User::order(int code, int length) {
    /** Function for handling order **/
    // Append menu to list
    menu->append(code, length);
}

void User::showOrderCondition(bool newline) const {
    /** Function for handling order condition **/

    int price(0);

    // Show each menu and calculate price
    for (int i=0; i<menu->len(); i++) {
        std::cout << i+1 << ". '" << getMenuName((*menu)[i]) << "'\n";
        price += getMenuPrice((*menu)[i]);
    }

    // Show total price and charge
    std::cout << (newline? "\n": "") << "Your total price is " << price
              << "\nYour total money is " << money-price << '\n' << std::endl;
}

bool User::refund(int opt) {
    /**
     * Function for handling refund
     * Return boolean of operation result
     **/

    // Index value
    int index = opt - 1;

    // Check input
    if(index>=menu->len()) {
        std::cout << "Wrong input!\n";
        return false;
    }

    // Remove menu from list
    menu->pop(index);

    // Display message
    std::cout << "Successfully returned\n";
    return true;
}


/* IntList class member function definitions */

int IntList::_append(int newElement, int length) {  // Internal

    // Assertion
    if(length<0) {
        return 0;
    }

    // Make new dynamic array pointer
    int* newArray = new int[totalNum+length];

    // Make temp pointer`
    int* oldArray;

    // Copy values from old array
    for(int i=0; i<totalNum; i++) {
        newArray[i] = array[i];
    }
    for(int i=0; i<length; i++) {
        newArray[totalNum+i] = newElement;
    }

    // Change array pointer
    totalNum += length;
    oldArray = array;
    array = newArray;
    free(oldArray);

    // Return element
    return newElement;
}

int IntList::_pop(int index) {  // Internal

    // Index value assertion
    if(index>=totalNum) {
        return 0;
    }

    // Make new dynamic array pointer
    int* newArray = new int[totalNum-1];

    // Make temp pointer
    int* oldArray;

    // Copy values from old array
    int element = array[index];
    for(int i=0; i<index; i++) {
        newArray[i] = array[i];
    }
    for(int i=index+1; i<totalNum; i++) {
        newArray[i-1] = array[i];
    }

    // Change array pointer
    totalNum--;
    oldArray = array;
    array = newArray;
    free(oldArray);

    // Return popped element
    return element;
}


/* End */
