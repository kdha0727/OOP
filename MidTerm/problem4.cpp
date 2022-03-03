#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;


class Robot{
    private:
        int m_posX;
        int m_posY;
        int m_dir; // north=0, south=1, east=2, west=3

    public:
        /*
            Your Code for constructors
            1. default constructor (0, 0, north)
            2. other constructor with three parameters (m_posX, m_posY, m_dir)
        */
        Robot():m_posX(0), m_posY(0), m_dir(0) {}
        Robot(int x, int y, int dir):m_posX(x), m_posY(y), m_dir(dir) {}

        void move(int distance);
        void left_face();
        void right_face();
        int get_x_position();
        int get_y_position();
        int get_orientation();
};

void Robot::move(int distance){
    switch(m_dir) {  // north=0, south=1, east=2, west=3
        case 0:  // north
            m_posY += distance;
            break;
        case 1:  // south
            m_posY -= distance;
            break;
        case 2:  // east
            m_posX += distance;
            break;
        case 3:  // west
            m_posX -= distance;
            break;
        default:;
    }
}

void Robot::left_face(){
    // Turn the robot to the left by 90 degrees.
    switch(m_dir) {  // north=0, south=1, east=2, west=3
        case 0:  // north
            m_dir=3;  // to west
            break;
        case 1:  // south
            m_dir=2;  // to east
            break;
        case 2:  // east
            m_dir=0;  // to north
            break;
        case 3:  // west
            m_dir=1;  // to south
            break;
        default:;
    }
}

void Robot::right_face(){
    // Turn the robot to the right by 90 degrees.
    switch(m_dir) {  // north=0, south=1, east=2, west=3
        case 0:  // north
            m_dir=2;  // to east
            break;
        case 1:  // south
            m_dir=3;  // to west
            break;
        case 2:  // east
            m_dir=1;  // to south
            break;
        case 3:  // west
            m_dir=0;  // to north
            break;
        default:;
    }
}

int Robot::get_x_position() {
    // Return appropriate values: m_posX (int)
    return m_posX;
}

int Robot::get_y_position() {
    // Return appropriate values: m_posY (int)
    return m_posY;
}

int Robot::get_orientation() {
    // Return appropriate values: m_dir (int)
    return m_dir;
}

void show_Robot(Robot robot){
    // Print current position of robot
    // input (Robot)
    // output format: m_posX m_posY m_dir
    // example: current position (0, 0, north) --> 0 0 0
    cout << robot.get_x_position() << ' '
         << robot.get_y_position() << ' '
         << robot.get_orientation() << endl;
}


int main(){
    // Problem 4-1
    /*
    (1) Create a robot1 at default position (0, 0, north)
        with default constructor
	(2) Then, print current status
    */
    cout << "##### Problem 4-1 #####" << endl;
    Robot robot1;
    show_Robot(robot1);


    // Problem 4-2
    /*
    (1) Create a robot2 at position (20, 20, north)
	(2) Then, print current status
    */
    cout << "##### Problem 4-2 #####" << endl;
    Robot robot2(20, 20, 0);
    show_Robot(robot2);


    // Problem 4-3
    /*
    (1) Move robot1 to position (10, 10, east)
        only using these 3 functions
        1) void move()
        2) void left_face()
        3) void right_face()
    (2) Whenever the direction or position is changed,
        print changed status each time
    */
    cout << "##### Problem 4-3 #####" << endl;
    // move
    robot1.move(10);
    show_Robot(robot1);
    // right
    robot1.right_face();
    show_Robot(robot1);
    // move
    robot1.move(10);
    show_Robot(robot1);


    // Problem 4-4
    /*
    (1) Move robot2 to position (10, 10, east)
        using these functions
        1) void move()
        2) void left_face()
        3) void right_face()
    (2) Whenever the direction or position is changed,
        print changed status each time
    */
    cout << "##### Problem 4-4 #####" << endl;
    // right
    robot2.right_face();
    show_Robot(robot2);
    // right
    robot2.right_face();
    show_Robot(robot2);
    // move
    robot2.move(10);
    show_Robot(robot2);
    // right
    robot2.right_face();
    show_Robot(robot2);
    // move
    robot2.move(10);
    show_Robot(robot2);
    // left
    robot2.left_face();
    show_Robot(robot2);
    // left
    robot2.left_face();
    show_Robot(robot2);

	return 0;
}
