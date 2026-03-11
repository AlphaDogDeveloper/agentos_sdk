<p align="center">
<img align="center" src="docs/imgs/weilan_babyalpha.jpg", width=1600>
<p>

--------------------------------------------------------------------------------

简体中文 | [English](./README_en.md)

AgentOS™是蔚蓝研发的一款智能体操作系统，将智能感知、情感表现和仿生行为融为一体，为具身智能体提供高效的开发和运行环境。AgentOS SDK 为开发者提供了一套完备的工具和接口，开发者可以轻松地集成语音识别、视觉感知、情感表现和仿生行为等功能，构建具有高互动性和智能化的应用场景。


智能体架构分为多层，各层通过标准化接口互相协作，下图为智能体架构图。

<p align="center">
<img align="center" src="docs/imgs/agentos_arch.png", width=1600>
<p>

Agent Skills 层负责定义和实现智能体的各种高层行为和任务，开发者可以通过这一层实现智能体的个性化和差异化功能。


## AgentOS SDK

Agent Skills 基于 ROS 开发，旨在为开发者提供便捷的工具和接口，通过 AgentOS SDK，可以轻松地调用和控制智能体技能，如语音技能、视觉技能、表情技能、运动技能等。

AgentOS SDK 目录结构：

- [agent_msgs](https://github.com/AlphaDogDeveloper/agentos_sdk/tree/master/agent_msgs) Agent Skills 相关技能接口，包括技能消息定义、调用技能及控制技能等。
- [ros_alphadog](https://github.com/AlphaDogDeveloper/agentos_sdk/tree/master/ros_alphadog) 运动控制相关接口，例如获取机器狗的运动状态。
- [alphago_slam](https://github.com/AlphaDogDeveloper/agentos_sdk/tree/master/alphago_slam) SLAM 相关接口，包括建图和定位状态消息定义。
- [docs](https://github.com/AlphaDogDeveloper/agentos_sdk/tree/master/docs) 文档相关。
- [agentos_examples](https://github.com/AlphaDogDeveloper/agentos_sdk/tree/master/agentos_examples) 示例项目。

## 编译

前置条件

- Ubuntu 20.04
- [ROS Noetic](http://wiki.ros.org/noetic/Installation/Ubuntu)

编译 sdk

```powershell
source /opt/ros/noetic/setup.bash
mkdir -p ~/agent_ws/src
cd ~/agent_ws
git clone https://github.com/AlphaDogDeveloper/agentos_sdk.git src/
catkin build
source devel/setup.bash
```

## 使用指南

请至 [wiki](https://github.com/AlphaDogDeveloper/agentos_sdk/wikis/home) 查看。
