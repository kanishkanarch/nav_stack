/** include the libraries you need in your planner here */
/** for global path planner interface */
#include <ros/ros.h>
#include <costmap_2d/costmap_2d_ros.h>
#include <costmap_2d/costmap_2d.h>
#include <nav_core/base_global_planner.h>
#include <geometry_msgs/PoseStamped.h>
#include <base_local_planner/world_model.h>
#include <base_local_planner/costmap_model.h>
#include <pluginlib/class_list_macros.h>
using std::string;

namespace minimal_planner{

	class MinimalPlanner: public nav_core::BaseGlobalPlanner {
		public:

			MinimalPlanner();
			MinimalPlanner(std::string name, costmap_2d::Costmap2DROS* costmap_ros)
			{
				initialize(name, costmap_ros);
			}

			/** overridden classes from interface nav_core::BaseGlobalPlanner **/
			void initialize(std::string name, costmap_2d::Costmap2DROS* costmap_ros)
			{
			}
			bool makePlan(const geometry_msgs::PoseStamped& start,
					const geometry_msgs::PoseStamped& goal,
					std::vector<geometry_msgs::PoseStamped>& plan
				     )
			{
				return true;
			}
	};
};

//register this planner as a BaseGlobalPlanner plugin
PLUGINLIB_EXPORT_CLASS(minimal_planner::MinimalPlanner, nav_core::BaseGlobalPlanner)
