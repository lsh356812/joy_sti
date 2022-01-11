#include "ros/ros.h"
#include "std_msgs/String.h"
//float l;
//float a;
//float data[6];

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("I heard: [%s]", msg->data.c_str());
  float data[6]
  msg -> data[6]
}

int main(int argc, char **argv)
{
  float l;
  float a;

  ros::init(argc, argv, "joy_test_node");
  ros::NodeHandle nh;

  ros::Publisher cmd_vel_pub = nh.advertise<std_msgs::String>("turtle1/cmd_vel", 1000);
  ros::Rate loop_rate(10);
  ros::Subscriber sub = nh.subscribe("joy", 1000, chatterCallback);

  while (ros::ok())
  {
    l = 1.5* data[1];
    a = 1.5* data[3];
    geometry_msgs::Twist msg;
    msg.lenear.x = l;
    msg.angurer.z = a;

    cmd_vel_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();

   }
  return 0;
}
