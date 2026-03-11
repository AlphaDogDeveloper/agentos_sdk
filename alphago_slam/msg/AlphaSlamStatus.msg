# current mode
# 1. mapping
# 2. localizing
int16 mode
int16 warning
int16 error
# [0]: range device
# [1]: visual_device
int16[2] device_error
float32 confidence
# home info
bool is_default_home
# data covered by robot
int8[] covered_data
float32 unknown_scan_ratio
# costmap area
float32 costmap_area
# map id
int64 map_id
int64 reserve_id