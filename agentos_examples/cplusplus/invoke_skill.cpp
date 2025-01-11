#include <ros/ros.h>
#include <actionlib/client/simple_action_client.h>
#include <agent_msgs/ExecuteAction.h>
#include <json/json.h> // Include jsoncpp library

// Feedback callback function
void feedbackCallback(const agent_msgs::ExecuteFeedbackConstPtr &feedback)
{
  ROS_INFO("Feedback progress: %f, state: %s", feedback->progress, feedback->state.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "invoke_skill");
  ros::NodeHandle nh;

  std::string arg_skill_name = "do_action";

  // Creating JSON args string
  Json::Value args_json;
  args_json["action_id"] = 4; // stand-up and ready-to-move
  Json::StreamWriterBuilder writer;
  std::string args = Json::writeString(writer, args_json);

  // Create the action client
  actionlib::SimpleActionClient<agent_msgs::ExecuteAction> ac("/agent_skill/" + arg_skill_name + "/execute", true);

  ROS_INFO("Waiting for action server to start...");
  if (!ac.waitForServer(ros::Duration(3.0)))
  {
    ROS_ERROR("Action server not available after waiting.");
    return 1;
  }

  // Creating a goal
  agent_msgs::ExecuteGoal goal;
  goal.invoker = "test";
  goal.invoke_priority = 25;
  goal.hold_time = 3.0;
  goal.args = args;

  // Send goal to the server with feedback callback
  try
  {
    ac.sendGoal(goal, actionlib::SimpleActionClient<agent_msgs::ExecuteAction>::SimpleDoneCallback(),
                actionlib::SimpleActionClient<agent_msgs::ExecuteAction>::SimpleActiveCallback(),
                &feedbackCallback);
  }
  catch (const ros::Exception &e)
  {
    ROS_ERROR("Failed to send goal: %s", e.what());
    return 1;
  }

  ROS_INFO("Waiting for result...");
  if (!ac.waitForResult(ros::Duration(10.0)))
  {
    ROS_ERROR("Action did not finish before the timeout.");
    return 1;
  }

  // Get and print the result
  agent_msgs::ExecuteResultConstPtr result = ac.getResult();
  ROS_INFO("Result: %d, Response: %s", result->result, result->response.c_str());

  return 0;
}
