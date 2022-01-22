#include <pluginlib/class_list_macros.h>
#include "header.h"

//register this planner as a BaseGlobalPlanner plugin
PLUGINLIB_EXPORT_CLASS(minimal_planner_ns::MinimalPlanner, nav_core::BaseGlobalPlanner)

using namespace std;

//Default Constructor
namespace minimal_planner_ns {

	MinimalPlanner::MinimalPlanner (){

	}

	MinimalPlanner::MinimalPlanner(std::string name, costmap_2d::Costmap2DROS* costmap_ros){
			initialize(name, costmap_ros);
	}


	void MinimalPlanner::initialize(std::string name, costmap_2d::Costmap2DROS* costmap_ros){
	}

	bool MinimalPlanner::makePlan(const geometry_msgs::PoseStamped& start, const geometry_msgs::PoseStamped& goal,  std::vector<geometry_msgs::PoseStamped>& plan ){

		return true;
	}
};
