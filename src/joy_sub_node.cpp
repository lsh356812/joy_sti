/*#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/Joy.h"

void chatterCallback(const sensor_msgs::Joy::ConstPtr& msg)
{
  ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "joy_sub_node");
  ros::NodeHandle nh;

  ros::Subscriber sub = nh.subscribe("joy", 1000, chatterCallback);

  ros::spin();

  return 0;
}*/


#include <ros/ros.h>
#include <sensor_msgs/Joy.h>

float left_stick = 0.0;


void myCallback (const sensor_msgs::Joy::ConstPtr& msg)
{
  /*for (unsigned i = 0; i < msg->axes.size(); ++i) {
    ROS_INFO("Axis %d is now at position %f", i, msg->axes[i]);
  }*/
  int i = 0;
  //float l->axes[i];
  ROS_INFO("Axis %d is now at position %f", i, msg->axes[i]);
  left_stick = msg->axes[i];

  int j = 3;
  //float a->axes[j];
  ROS_INFO("Axis %d is now at position %f", j, msg->axes[j]);


  ROS_INFO("lenear : %f, angurer : %f", l, a);
}

int main(int argc, char **argv)
{

  ros::init(argc, argv, "joy_sub_node");
  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("joy", 1000, myCallback);
  ros::spin();

  return 0;
}
