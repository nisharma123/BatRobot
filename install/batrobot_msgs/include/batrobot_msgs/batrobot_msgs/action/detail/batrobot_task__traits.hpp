// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from batrobot_msgs:action/BatrobotTask.idl
// generated code does not contain a copyright notice

#ifndef BATROBOT_MSGS__ACTION__DETAIL__BATROBOT_TASK__TRAITS_HPP_
#define BATROBOT_MSGS__ACTION__DETAIL__BATROBOT_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace batrobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BatrobotTask_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_number
  {
    out << "task_number: ";
    rosidl_generator_traits::value_to_yaml(msg.task_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatrobotTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_number: ";
    rosidl_generator_traits::value_to_yaml(msg.task_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatrobotTask_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use batrobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const batrobot_msgs::action::BatrobotTask_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  batrobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use batrobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const batrobot_msgs::action::BatrobotTask_Goal & msg)
{
  return batrobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<batrobot_msgs::action::BatrobotTask_Goal>()
{
  return "batrobot_msgs::action::BatrobotTask_Goal";
}

template<>
inline const char * name<batrobot_msgs::action::BatrobotTask_Goal>()
{
  return "batrobot_msgs/action/BatrobotTask_Goal";
}

template<>
struct has_fixed_size<batrobot_msgs::action::BatrobotTask_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<batrobot_msgs::action::BatrobotTask_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<batrobot_msgs::action::BatrobotTask_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace batrobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BatrobotTask_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatrobotTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatrobotTask_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use batrobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const batrobot_msgs::action::BatrobotTask_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  batrobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use batrobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const batrobot_msgs::action::BatrobotTask_Result & msg)
{
  return batrobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<batrobot_msgs::action::BatrobotTask_Result>()
{
  return "batrobot_msgs::action::BatrobotTask_Result";
}

template<>
inline const char * name<batrobot_msgs::action::BatrobotTask_Result>()
{
  return "batrobot_msgs/action/BatrobotTask_Result";
}

template<>
struct has_fixed_size<batrobot_msgs::action::BatrobotTask_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<batrobot_msgs::action::BatrobotTask_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<batrobot_msgs::action::BatrobotTask_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace batrobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BatrobotTask_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: percentage
  {
    out << "percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatrobotTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.percentage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatrobotTask_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use batrobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const batrobot_msgs::action::BatrobotTask_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  batrobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use batrobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const batrobot_msgs::action::BatrobotTask_Feedback & msg)
{
  return batrobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<batrobot_msgs::action::BatrobotTask_Feedback>()
{
  return "batrobot_msgs::action::BatrobotTask_Feedback";
}

template<>
inline const char * name<batrobot_msgs::action::BatrobotTask_Feedback>()
{
  return "batrobot_msgs/action/BatrobotTask_Feedback";
}

template<>
struct has_fixed_size<batrobot_msgs::action::BatrobotTask_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<batrobot_msgs::action::BatrobotTask_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<batrobot_msgs::action::BatrobotTask_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "batrobot_msgs/action/detail/batrobot_task__traits.hpp"

namespace batrobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BatrobotTask_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatrobotTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatrobotTask_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use batrobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const batrobot_msgs::action::BatrobotTask_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  batrobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use batrobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const batrobot_msgs::action::BatrobotTask_SendGoal_Request & msg)
{
  return batrobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<batrobot_msgs::action::BatrobotTask_SendGoal_Request>()
{
  return "batrobot_msgs::action::BatrobotTask_SendGoal_Request";
}

template<>
inline const char * name<batrobot_msgs::action::BatrobotTask_SendGoal_Request>()
{
  return "batrobot_msgs/action/BatrobotTask_SendGoal_Request";
}

template<>
struct has_fixed_size<batrobot_msgs::action::BatrobotTask_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<batrobot_msgs::action::BatrobotTask_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<batrobot_msgs::action::BatrobotTask_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<batrobot_msgs::action::BatrobotTask_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<batrobot_msgs::action::BatrobotTask_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace batrobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BatrobotTask_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatrobotTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatrobotTask_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use batrobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const batrobot_msgs::action::BatrobotTask_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  batrobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use batrobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const batrobot_msgs::action::BatrobotTask_SendGoal_Response & msg)
{
  return batrobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<batrobot_msgs::action::BatrobotTask_SendGoal_Response>()
{
  return "batrobot_msgs::action::BatrobotTask_SendGoal_Response";
}

template<>
inline const char * name<batrobot_msgs::action::BatrobotTask_SendGoal_Response>()
{
  return "batrobot_msgs/action/BatrobotTask_SendGoal_Response";
}

template<>
struct has_fixed_size<batrobot_msgs::action::BatrobotTask_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<batrobot_msgs::action::BatrobotTask_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<batrobot_msgs::action::BatrobotTask_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<batrobot_msgs::action::BatrobotTask_SendGoal>()
{
  return "batrobot_msgs::action::BatrobotTask_SendGoal";
}

template<>
inline const char * name<batrobot_msgs::action::BatrobotTask_SendGoal>()
{
  return "batrobot_msgs/action/BatrobotTask_SendGoal";
}

template<>
struct has_fixed_size<batrobot_msgs::action::BatrobotTask_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<batrobot_msgs::action::BatrobotTask_SendGoal_Request>::value &&
    has_fixed_size<batrobot_msgs::action::BatrobotTask_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<batrobot_msgs::action::BatrobotTask_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<batrobot_msgs::action::BatrobotTask_SendGoal_Request>::value &&
    has_bounded_size<batrobot_msgs::action::BatrobotTask_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<batrobot_msgs::action::BatrobotTask_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<batrobot_msgs::action::BatrobotTask_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<batrobot_msgs::action::BatrobotTask_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace batrobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BatrobotTask_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatrobotTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatrobotTask_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use batrobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const batrobot_msgs::action::BatrobotTask_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  batrobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use batrobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const batrobot_msgs::action::BatrobotTask_GetResult_Request & msg)
{
  return batrobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<batrobot_msgs::action::BatrobotTask_GetResult_Request>()
{
  return "batrobot_msgs::action::BatrobotTask_GetResult_Request";
}

template<>
inline const char * name<batrobot_msgs::action::BatrobotTask_GetResult_Request>()
{
  return "batrobot_msgs/action/BatrobotTask_GetResult_Request";
}

template<>
struct has_fixed_size<batrobot_msgs::action::BatrobotTask_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<batrobot_msgs::action::BatrobotTask_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<batrobot_msgs::action::BatrobotTask_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__traits.hpp"

namespace batrobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BatrobotTask_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatrobotTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatrobotTask_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use batrobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const batrobot_msgs::action::BatrobotTask_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  batrobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use batrobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const batrobot_msgs::action::BatrobotTask_GetResult_Response & msg)
{
  return batrobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<batrobot_msgs::action::BatrobotTask_GetResult_Response>()
{
  return "batrobot_msgs::action::BatrobotTask_GetResult_Response";
}

template<>
inline const char * name<batrobot_msgs::action::BatrobotTask_GetResult_Response>()
{
  return "batrobot_msgs/action/BatrobotTask_GetResult_Response";
}

template<>
struct has_fixed_size<batrobot_msgs::action::BatrobotTask_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<batrobot_msgs::action::BatrobotTask_Result>::value> {};

template<>
struct has_bounded_size<batrobot_msgs::action::BatrobotTask_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<batrobot_msgs::action::BatrobotTask_Result>::value> {};

template<>
struct is_message<batrobot_msgs::action::BatrobotTask_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<batrobot_msgs::action::BatrobotTask_GetResult>()
{
  return "batrobot_msgs::action::BatrobotTask_GetResult";
}

template<>
inline const char * name<batrobot_msgs::action::BatrobotTask_GetResult>()
{
  return "batrobot_msgs/action/BatrobotTask_GetResult";
}

template<>
struct has_fixed_size<batrobot_msgs::action::BatrobotTask_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<batrobot_msgs::action::BatrobotTask_GetResult_Request>::value &&
    has_fixed_size<batrobot_msgs::action::BatrobotTask_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<batrobot_msgs::action::BatrobotTask_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<batrobot_msgs::action::BatrobotTask_GetResult_Request>::value &&
    has_bounded_size<batrobot_msgs::action::BatrobotTask_GetResult_Response>::value
  >
{
};

template<>
struct is_service<batrobot_msgs::action::BatrobotTask_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<batrobot_msgs::action::BatrobotTask_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<batrobot_msgs::action::BatrobotTask_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__traits.hpp"

namespace batrobot_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const BatrobotTask_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatrobotTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatrobotTask_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use batrobot_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const batrobot_msgs::action::BatrobotTask_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  batrobot_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use batrobot_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const batrobot_msgs::action::BatrobotTask_FeedbackMessage & msg)
{
  return batrobot_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<batrobot_msgs::action::BatrobotTask_FeedbackMessage>()
{
  return "batrobot_msgs::action::BatrobotTask_FeedbackMessage";
}

template<>
inline const char * name<batrobot_msgs::action::BatrobotTask_FeedbackMessage>()
{
  return "batrobot_msgs/action/BatrobotTask_FeedbackMessage";
}

template<>
struct has_fixed_size<batrobot_msgs::action::BatrobotTask_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<batrobot_msgs::action::BatrobotTask_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<batrobot_msgs::action::BatrobotTask_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<batrobot_msgs::action::BatrobotTask_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<batrobot_msgs::action::BatrobotTask_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<batrobot_msgs::action::BatrobotTask>
  : std::true_type
{
};

template<>
struct is_action_goal<batrobot_msgs::action::BatrobotTask_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<batrobot_msgs::action::BatrobotTask_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<batrobot_msgs::action::BatrobotTask_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BATROBOT_MSGS__ACTION__DETAIL__BATROBOT_TASK__TRAITS_HPP_
