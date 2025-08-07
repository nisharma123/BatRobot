// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from batrobot_msgs:action/BatrobotTask.idl
// generated code does not contain a copyright notice

#ifndef BATROBOT_MSGS__ACTION__DETAIL__BATROBOT_TASK__STRUCT_H_
#define BATROBOT_MSGS__ACTION__DETAIL__BATROBOT_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/BatrobotTask in the package batrobot_msgs.
typedef struct batrobot_msgs__action__BatrobotTask_Goal
{
  int32_t task_number;
} batrobot_msgs__action__BatrobotTask_Goal;

// Struct for a sequence of batrobot_msgs__action__BatrobotTask_Goal.
typedef struct batrobot_msgs__action__BatrobotTask_Goal__Sequence
{
  batrobot_msgs__action__BatrobotTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} batrobot_msgs__action__BatrobotTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/BatrobotTask in the package batrobot_msgs.
typedef struct batrobot_msgs__action__BatrobotTask_Result
{
  bool success;
} batrobot_msgs__action__BatrobotTask_Result;

// Struct for a sequence of batrobot_msgs__action__BatrobotTask_Result.
typedef struct batrobot_msgs__action__BatrobotTask_Result__Sequence
{
  batrobot_msgs__action__BatrobotTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} batrobot_msgs__action__BatrobotTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/BatrobotTask in the package batrobot_msgs.
typedef struct batrobot_msgs__action__BatrobotTask_Feedback
{
  int32_t percentage;
} batrobot_msgs__action__BatrobotTask_Feedback;

// Struct for a sequence of batrobot_msgs__action__BatrobotTask_Feedback.
typedef struct batrobot_msgs__action__BatrobotTask_Feedback__Sequence
{
  batrobot_msgs__action__BatrobotTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} batrobot_msgs__action__BatrobotTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "batrobot_msgs/action/detail/batrobot_task__struct.h"

/// Struct defined in action/BatrobotTask in the package batrobot_msgs.
typedef struct batrobot_msgs__action__BatrobotTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  batrobot_msgs__action__BatrobotTask_Goal goal;
} batrobot_msgs__action__BatrobotTask_SendGoal_Request;

// Struct for a sequence of batrobot_msgs__action__BatrobotTask_SendGoal_Request.
typedef struct batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence
{
  batrobot_msgs__action__BatrobotTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/BatrobotTask in the package batrobot_msgs.
typedef struct batrobot_msgs__action__BatrobotTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} batrobot_msgs__action__BatrobotTask_SendGoal_Response;

// Struct for a sequence of batrobot_msgs__action__BatrobotTask_SendGoal_Response.
typedef struct batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence
{
  batrobot_msgs__action__BatrobotTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/BatrobotTask in the package batrobot_msgs.
typedef struct batrobot_msgs__action__BatrobotTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} batrobot_msgs__action__BatrobotTask_GetResult_Request;

// Struct for a sequence of batrobot_msgs__action__BatrobotTask_GetResult_Request.
typedef struct batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence
{
  batrobot_msgs__action__BatrobotTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.h"

/// Struct defined in action/BatrobotTask in the package batrobot_msgs.
typedef struct batrobot_msgs__action__BatrobotTask_GetResult_Response
{
  int8_t status;
  batrobot_msgs__action__BatrobotTask_Result result;
} batrobot_msgs__action__BatrobotTask_GetResult_Response;

// Struct for a sequence of batrobot_msgs__action__BatrobotTask_GetResult_Response.
typedef struct batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence
{
  batrobot_msgs__action__BatrobotTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.h"

/// Struct defined in action/BatrobotTask in the package batrobot_msgs.
typedef struct batrobot_msgs__action__BatrobotTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  batrobot_msgs__action__BatrobotTask_Feedback feedback;
} batrobot_msgs__action__BatrobotTask_FeedbackMessage;

// Struct for a sequence of batrobot_msgs__action__BatrobotTask_FeedbackMessage.
typedef struct batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence
{
  batrobot_msgs__action__BatrobotTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATROBOT_MSGS__ACTION__DETAIL__BATROBOT_TASK__STRUCT_H_
