#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <cmath>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/joystick.h>

#define JOY_DEV "/dev/input/js0"

using namespace std;

/*vector<double> getJoystickRadians() {
    int joy_fd(-1), num_of_axis(0), num_of_buttons(0);
    char name_of_joystick[80];
    vector<char> joy_button;
    vector<int> joy_axis;

    vector<double> radians(5, 0.0);

    if((joy_fd=open(JOY_DEV,O_RDONLY)) < 0)
    {
        cerr<<"Failed to open "<<JOY_DEV<<endl;
        return radians;
    }
    ioctl(joy_fd, JSIOCGAXES, &num_of_axis);
    ioctl(joy_fd, JSIOCGBUTTONS, &num_of_buttons);
    ioctl(joy_fd, JSIOCGNAME(80), &name_of_joystick);
    joy_button.resize(num_of_buttons,0);
    joy_axis.resize(num_of_axis,0);
    fcntl(joy_fd, F_SETFL, O_NONBLOCK);

    js_event js;

    read(joy_fd, &js, sizeof(js_event));

    switch (js.type & ~JS_EVENT_INIT)
    {
        case JS_EVENT_AXIS:
            if((int)js.number>=joy_axis.size())  {cerr<<"err:"<<(int)js.number<<endl; continue;}
        joy_axis[(int)js.number]= js.value;
        break;
        case JS_EVENT_BUTTON:
            if((int)js.number>=joy_button.size())  {cerr<<"err:"<<(int)js.number<<endl; continue;}
        joy_button[(int)js.number]= js.value;
        break;
    }

    double roll = 0;
    double pitch = 0;
    double x=0;
    double y=0;
    double z=0;

    if(joy_axis[0]/10000 != 0 && joy_axis[0] > 0) {
        roll += 0.0002;
        cout << "roll: " << roll <<endl;
        if(roll > M_PI/2) {
            roll = M_PI/2;
        }
    }
    else if(joy_axis[0]/10000 != 0 && joy_axis[0] < 0) {
        roll -= 0.0002;
        cout << "roll: " << roll <<endl;
        if(roll < -M_PI/2) {
            roll = -M_PI/2;
        }
    }
    //Y Axis
    if(joy_axis[1]/10000 != 0 && joy_axis[1] < 0) {
        pitch += 0.0002;
        cout << "pitch: " << pitch <<endl;
        if(pitch > M_PI/2) {
            pitch = M_PI/2;
        }
    }
    else if(joy_axis[1]/10000 != 0 && joy_axis[1] > 0) {
        pitch -= 0.0002;
        cout << "pitch: " << pitch <<endl;
        if(pitch < -M_PI/2) {
            pitch = -M_PI/2;
        }
    }

    //A Button
    if((int)joy_button[0] != 0) {
        z -= 0.0002;
        cout << "z: " << z <<endl;
        if(z < -M_PI/3) {
            z = -M_PI/3;
        }
    }
    //B Button
    if((int)joy_button[1] != 0) {
        y += 0.0002;
        cout << "y: " << y <<endl;
    }
    //X Button
    if((int)joy_button[2] != 0) {
        y -= 0.0002;
        cout << "y: " << y <<endl;
    }
    //Y Button
    if((int)joy_button[3] != 0) {
        z += 0.0002;
        cout << "z: " << z <<endl;
        if(z < M_PI/2) {
            z = M_PI/2;
        }
    }
    radians[0] = roll;
    radians[1] = pitch;
    radians[2] = x;
    radians[3] = y;
    radians[4] = z;

    return radians;
}*/
double roll = 0;
double pitch = 0;
double x=0;
double y=0;
double z=0;


void update_values() {
    cout << "Current values -> Roll: " << roll << ", Pitch: " << pitch << ", X: " << x << ", Y: " << y << ", Z: " << z << endl;
}


int main()
{
    int joy_fd(-1), num_of_axis(0), num_of_buttons(0);
    char name_of_joystick[80];
    vector<char> joy_button;
    vector<int> joy_axis;

    if((joy_fd=open(JOY_DEV,O_RDONLY)) < 0)
    {
        cerr<<"Failed to open "<<JOY_DEV<<endl;
        return -1;
    }

    ioctl(joy_fd, JSIOCGAXES, &num_of_axis);
    ioctl(joy_fd, JSIOCGBUTTONS, &num_of_buttons);
    ioctl(joy_fd, JSIOCGNAME(80), &name_of_joystick);

    joy_button.resize(num_of_buttons,0);
    joy_axis.resize(num_of_axis,0);

    cout<<"Joystick: "<<name_of_joystick<<endl
      <<"  axis: "<<num_of_axis<<endl
      <<"  buttons: "<<num_of_buttons<<endl;

    fcntl(joy_fd, F_SETFL, O_NONBLOCK);   // using non-blocking mode



    while(true)
    {
        js_event js;

        read(joy_fd, &js, sizeof(js_event));

        switch (js.type & ~JS_EVENT_INIT)
        {
            case JS_EVENT_AXIS:
                if((int)js.number>=joy_axis.size())  {cerr<<"err:"<<(int)js.number<<endl; continue;}
            joy_axis[(int)js.number]= js.value;
            break;
            case JS_EVENT_BUTTON:
                if((int)js.number>=joy_button.size())  {cerr<<"err:"<<(int)js.number<<endl; continue;}
            joy_button[(int)js.number]= js.value;
            break;
        }
        //X Axis

        if(joy_axis[0]/10000 != 0 && joy_axis[0] > 0) {
            roll += 0.0002;
            cout << "roll: " << roll <<endl;
            if(roll > M_PI/2) {
                roll = M_PI/2;
            }
        }
        else if(joy_axis[0]/10000 != 0 && joy_axis[0] < 0) {
            roll -= 0.0002;
            cout << "roll: " << roll <<endl;
            if(roll < -M_PI/2) {
                roll = -M_PI/2;
            }
        }
        //Y Axis
        if(joy_axis[1]/10000 != 0 && joy_axis[1] < 0) {
            pitch += 0.0002;
            cout << "pitch: " << pitch <<endl;
            if(pitch > M_PI/2) {
                pitch = M_PI/2;
            }
        }
        else if(joy_axis[1]/10000 != 0 && joy_axis[1] > 0) {
            pitch -= 0.0002;
            cout << "pitch: " << pitch <<endl;
            if(pitch < -M_PI/2) {
                pitch = -M_PI/2;
            }
        }

        //A Button
        if((int)joy_button[0] != 0) {
            z -= 0.0002;
            cout << "z: " << z <<endl;
            if(z < -M_PI/3) {
                z = -M_PI/3;
            }
        }
        //B Button
        if((int)joy_button[1] != 0) {
            y += 0.0002;
            cout << "y: " << y <<endl;
            if(y > M_PI/2) {
                y = M_PI/2;
            }
        }
        //X Button
        if((int)joy_button[2] != 0) {
            y -= 0.0002;
            cout << "y: " << y <<endl;
            if(y < -M_PI/2) {
                y = -M_PI/2;
            }
        }
        //Y Button
        if((int)joy_button[3] != 0) {
            z += 0.0002;
            cout << "z: " << z <<endl;
            if(z > M_PI/2) {
                z = M_PI/2;
            }
        }

        update_values();
        usleep(100);
    }

    close(joy_fd);
    return 0;
}