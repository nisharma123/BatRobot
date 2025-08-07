// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from batrobot_msgs:action/BatrobotTask.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatrobotTask_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatrobotTask_Goal_type_support_ids_t;

static const _BatrobotTask_Goal_type_support_ids_t _BatrobotTask_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatrobotTask_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatrobotTask_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatrobotTask_Goal_type_support_symbol_names_t _BatrobotTask_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, batrobot_msgs, action, BatrobotTask_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, batrobot_msgs, action, BatrobotTask_Goal)),
  }
};

typedef struct _BatrobotTask_Goal_type_support_data_t
{
  void * data[2];
} _BatrobotTask_Goal_type_support_data_t;

static _BatrobotTask_Goal_type_support_data_t _BatrobotTask_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatrobotTask_Goal_message_typesupport_map = {
  2,
  "batrobot_msgs",
  &_BatrobotTask_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_BatrobotTask_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_BatrobotTask_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatrobotTask_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatrobotTask_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_Goal>()
{
  return &::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask_Goal)() {
  return get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatrobotTask_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatrobotTask_Result_type_support_ids_t;

static const _BatrobotTask_Result_type_support_ids_t _BatrobotTask_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatrobotTask_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatrobotTask_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatrobotTask_Result_type_support_symbol_names_t _BatrobotTask_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, batrobot_msgs, action, BatrobotTask_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, batrobot_msgs, action, BatrobotTask_Result)),
  }
};

typedef struct _BatrobotTask_Result_type_support_data_t
{
  void * data[2];
} _BatrobotTask_Result_type_support_data_t;

static _BatrobotTask_Result_type_support_data_t _BatrobotTask_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatrobotTask_Result_message_typesupport_map = {
  2,
  "batrobot_msgs",
  &_BatrobotTask_Result_message_typesupport_ids.typesupport_identifier[0],
  &_BatrobotTask_Result_message_typesupport_symbol_names.symbol_name[0],
  &_BatrobotTask_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatrobotTask_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatrobotTask_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_Result>()
{
  return &::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask_Result)() {
  return get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatrobotTask_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatrobotTask_Feedback_type_support_ids_t;

static const _BatrobotTask_Feedback_type_support_ids_t _BatrobotTask_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatrobotTask_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatrobotTask_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatrobotTask_Feedback_type_support_symbol_names_t _BatrobotTask_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, batrobot_msgs, action, BatrobotTask_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, batrobot_msgs, action, BatrobotTask_Feedback)),
  }
};

typedef struct _BatrobotTask_Feedback_type_support_data_t
{
  void * data[2];
} _BatrobotTask_Feedback_type_support_data_t;

static _BatrobotTask_Feedback_type_support_data_t _BatrobotTask_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatrobotTask_Feedback_message_typesupport_map = {
  2,
  "batrobot_msgs",
  &_BatrobotTask_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_BatrobotTask_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_BatrobotTask_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatrobotTask_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatrobotTask_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_Feedback>()
{
  return &::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask_Feedback)() {
  return get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatrobotTask_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatrobotTask_SendGoal_Request_type_support_ids_t;

static const _BatrobotTask_SendGoal_Request_type_support_ids_t _BatrobotTask_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatrobotTask_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatrobotTask_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatrobotTask_SendGoal_Request_type_support_symbol_names_t _BatrobotTask_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, batrobot_msgs, action, BatrobotTask_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, batrobot_msgs, action, BatrobotTask_SendGoal_Request)),
  }
};

typedef struct _BatrobotTask_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _BatrobotTask_SendGoal_Request_type_support_data_t;

static _BatrobotTask_SendGoal_Request_type_support_data_t _BatrobotTask_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatrobotTask_SendGoal_Request_message_typesupport_map = {
  2,
  "batrobot_msgs",
  &_BatrobotTask_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BatrobotTask_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BatrobotTask_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatrobotTask_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatrobotTask_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_SendGoal_Request>()
{
  return &::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask_SendGoal_Request)() {
  return get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatrobotTask_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatrobotTask_SendGoal_Response_type_support_ids_t;

static const _BatrobotTask_SendGoal_Response_type_support_ids_t _BatrobotTask_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatrobotTask_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatrobotTask_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatrobotTask_SendGoal_Response_type_support_symbol_names_t _BatrobotTask_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, batrobot_msgs, action, BatrobotTask_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, batrobot_msgs, action, BatrobotTask_SendGoal_Response)),
  }
};

typedef struct _BatrobotTask_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _BatrobotTask_SendGoal_Response_type_support_data_t;

static _BatrobotTask_SendGoal_Response_type_support_data_t _BatrobotTask_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatrobotTask_SendGoal_Response_message_typesupport_map = {
  2,
  "batrobot_msgs",
  &_BatrobotTask_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BatrobotTask_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BatrobotTask_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatrobotTask_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatrobotTask_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_SendGoal_Response>()
{
  return &::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask_SendGoal_Response)() {
  return get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatrobotTask_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatrobotTask_SendGoal_type_support_ids_t;

static const _BatrobotTask_SendGoal_type_support_ids_t _BatrobotTask_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatrobotTask_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatrobotTask_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatrobotTask_SendGoal_type_support_symbol_names_t _BatrobotTask_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, batrobot_msgs, action, BatrobotTask_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, batrobot_msgs, action, BatrobotTask_SendGoal)),
  }
};

typedef struct _BatrobotTask_SendGoal_type_support_data_t
{
  void * data[2];
} _BatrobotTask_SendGoal_type_support_data_t;

static _BatrobotTask_SendGoal_type_support_data_t _BatrobotTask_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatrobotTask_SendGoal_service_typesupport_map = {
  2,
  "batrobot_msgs",
  &_BatrobotTask_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_BatrobotTask_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_BatrobotTask_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BatrobotTask_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatrobotTask_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<batrobot_msgs::action::BatrobotTask_SendGoal>()
{
  return &::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<batrobot_msgs::action::BatrobotTask_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatrobotTask_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatrobotTask_GetResult_Request_type_support_ids_t;

static const _BatrobotTask_GetResult_Request_type_support_ids_t _BatrobotTask_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatrobotTask_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatrobotTask_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatrobotTask_GetResult_Request_type_support_symbol_names_t _BatrobotTask_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, batrobot_msgs, action, BatrobotTask_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, batrobot_msgs, action, BatrobotTask_GetResult_Request)),
  }
};

typedef struct _BatrobotTask_GetResult_Request_type_support_data_t
{
  void * data[2];
} _BatrobotTask_GetResult_Request_type_support_data_t;

static _BatrobotTask_GetResult_Request_type_support_data_t _BatrobotTask_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatrobotTask_GetResult_Request_message_typesupport_map = {
  2,
  "batrobot_msgs",
  &_BatrobotTask_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BatrobotTask_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BatrobotTask_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatrobotTask_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatrobotTask_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_GetResult_Request>()
{
  return &::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask_GetResult_Request)() {
  return get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatrobotTask_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatrobotTask_GetResult_Response_type_support_ids_t;

static const _BatrobotTask_GetResult_Response_type_support_ids_t _BatrobotTask_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatrobotTask_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatrobotTask_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatrobotTask_GetResult_Response_type_support_symbol_names_t _BatrobotTask_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, batrobot_msgs, action, BatrobotTask_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, batrobot_msgs, action, BatrobotTask_GetResult_Response)),
  }
};

typedef struct _BatrobotTask_GetResult_Response_type_support_data_t
{
  void * data[2];
} _BatrobotTask_GetResult_Response_type_support_data_t;

static _BatrobotTask_GetResult_Response_type_support_data_t _BatrobotTask_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatrobotTask_GetResult_Response_message_typesupport_map = {
  2,
  "batrobot_msgs",
  &_BatrobotTask_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BatrobotTask_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BatrobotTask_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatrobotTask_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatrobotTask_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_GetResult_Response>()
{
  return &::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask_GetResult_Response)() {
  return get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatrobotTask_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatrobotTask_GetResult_type_support_ids_t;

static const _BatrobotTask_GetResult_type_support_ids_t _BatrobotTask_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatrobotTask_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatrobotTask_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatrobotTask_GetResult_type_support_symbol_names_t _BatrobotTask_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, batrobot_msgs, action, BatrobotTask_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, batrobot_msgs, action, BatrobotTask_GetResult)),
  }
};

typedef struct _BatrobotTask_GetResult_type_support_data_t
{
  void * data[2];
} _BatrobotTask_GetResult_type_support_data_t;

static _BatrobotTask_GetResult_type_support_data_t _BatrobotTask_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatrobotTask_GetResult_service_typesupport_map = {
  2,
  "batrobot_msgs",
  &_BatrobotTask_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_BatrobotTask_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_BatrobotTask_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BatrobotTask_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatrobotTask_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<batrobot_msgs::action::BatrobotTask_GetResult>()
{
  return &::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<batrobot_msgs::action::BatrobotTask_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatrobotTask_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatrobotTask_FeedbackMessage_type_support_ids_t;

static const _BatrobotTask_FeedbackMessage_type_support_ids_t _BatrobotTask_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatrobotTask_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatrobotTask_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatrobotTask_FeedbackMessage_type_support_symbol_names_t _BatrobotTask_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, batrobot_msgs, action, BatrobotTask_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, batrobot_msgs, action, BatrobotTask_FeedbackMessage)),
  }
};

typedef struct _BatrobotTask_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _BatrobotTask_FeedbackMessage_type_support_data_t;

static _BatrobotTask_FeedbackMessage_type_support_data_t _BatrobotTask_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatrobotTask_FeedbackMessage_message_typesupport_map = {
  2,
  "batrobot_msgs",
  &_BatrobotTask_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_BatrobotTask_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_BatrobotTask_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatrobotTask_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatrobotTask_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_FeedbackMessage>()
{
  return &::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask_FeedbackMessage)() {
  return get_message_type_support_handle<batrobot_msgs::action::BatrobotTask_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace batrobot_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t BatrobotTask_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace batrobot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<batrobot_msgs::action::BatrobotTask>()
{
  using ::batrobot_msgs::action::rosidl_typesupport_cpp::BatrobotTask_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  BatrobotTask_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::batrobot_msgs::action::BatrobotTask::Impl::SendGoalService>();
  BatrobotTask_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::batrobot_msgs::action::BatrobotTask::Impl::GetResultService>();
  BatrobotTask_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::batrobot_msgs::action::BatrobotTask::Impl::CancelGoalService>();
  BatrobotTask_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::batrobot_msgs::action::BatrobotTask::Impl::FeedbackMessage>();
  BatrobotTask_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::batrobot_msgs::action::BatrobotTask::Impl::GoalStatusMessage>();
  return &BatrobotTask_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, batrobot_msgs, action, BatrobotTask)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<batrobot_msgs::action::BatrobotTask>();
}

#ifdef __cplusplus
}
#endif
