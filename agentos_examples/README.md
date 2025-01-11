#### Depends

```bash
sudo apt install libjsoncpp-dev #For Ubuntu/Debian systems
brew install jsoncpp #For macOS systems
```

#### Compile

```bash
cd ~/agent_ws
rm src/agentos_examples/CATKIN_IGNORE
catkin build
```

#### Run

```bash
source devel/setup.bash
rosrun agentos_examples hold_skill_node
```

#### Example Output

```powershell
[ INFO] [1725592835.145371271]: Calling /agent_skill/do_action/hold service...
[ INFO] [1725592835.193772381]: Service call was successful.
[ INFO] [1725592838.206316127]: Calling /agent_skill/do_action/release_hold service...
[ INFO] [1725592838.220302827]: Service call was successful.
```
