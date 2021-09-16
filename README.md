## Template for nav_core::BaseGlobalPlanner path planner.

To quickstart,

1. Go to `template_planner_pkg/src/template_planner.cpp` and uncomment contents of `findPath()` function.

2. Go to your workspace and do `catkin_make`.

3. Planner should be available as a plugin to `nav_core::BaseGlobalPlanner` now. Try launching `roslaunch nav_stack move_base.launch` with turtlebot3_house/turtlebot3_world.

To customize, put in your own algorithm inside the `findPath` function in `template_planner_pkg/src/template_planner.cpp`.

### Branches:

1. `master`: Template code that can be customized.

2. `Straight-line`: Straight line planner.
