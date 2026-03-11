<p align="center">
<img align="center" src="docs/imgs/weilan_babyalpha.jpg", width=1600>
<p>

--------------------------------------------------------------------------------

[简体中文](./README.md) | English

AgentOS™ is an agent operating system developed by WEILAN that integrates intelligent perception, emotional expression, and bionic behavior into a unified platform. It provides an efficient development and runtime environment for embodied agent. The AgentOS SDK provides developers with a complete set of tools and interfaces, allowing developers to easily integrate functionalities such as voice recognition, visual perception, emotional expression, and bionic behavior to build highly interactive and intelligent application scenarios.

The agent architecture is divided into multiple layers, with each layer collaborating through standardized interfaces. The figure below shows the architecture of the agent.

<p align="center">
<img align="center" src="docs/imgs/agentos_arch.png" width=1600>
<p>

The Agent Skills layer is responsible for defining and implementing various high-level behaviors and tasks of the agent. Through this layer, developers can achieve personalized and differentiated functionalities for the agent.

## AgentOS SDK

The Agent Skills are developed based on ROS, aimed at providing developers with convenient tools and interfaces. With the AgentOS SDK, developers can easily access and control agent skills such as voice, vision, expression, and motion skills, making it easy for developers to get started quickly and create personalized and differentiated functionalities.

AgentOS SDK directory structure:

- [agent_msgs](https://github.com/AlphaDogDeveloper/agentos_sdk/tree/master/agent_msgs) Interfaces related to Agent Skills, including skill message definitions, skill invocation, and control.
- [ros_alphadog](https://github.com/AlphaDogDeveloper/agentos_sdk/tree/master/ros_alphadog) Interfaces related to motion control, for obtaining the motion state of the robotic dog.
- [alphago_slam](https://github.com/AlphaDogDeveloper/agentos_sdk/tree/master/alphago_slam) Interfaces related to SLAM, including mapping and localization status message definitions.
- [docs](https://github.com/AlphaDogDeveloper/agentos_sdk/tree/master/docs) Documents.
- [agentos_examples](https://github.com/AlphaDogDeveloper/agentos_sdk/tree/master/agentos_examples) Code examples.

## Compilation

Prerequisites

- Ubuntu 20.04
- [ROS Noetic](http://wiki.ros.org/noetic/Installation/Ubuntu)

Compile the SDK

```powershell
source /opt/ros/noetic/setup.bash
mkdir -p agent_ws/src
cd agent_ws
git clone https://github.com/AlphaDogDeveloper/agentos_sdk.git src/
catkin build
source devel/setup.bash 
```

## User Guide

Please refer to the [wiki](https://github.com/AlphaDogDeveloper/agentos_sdk/wikis/Home_en) for more information.







