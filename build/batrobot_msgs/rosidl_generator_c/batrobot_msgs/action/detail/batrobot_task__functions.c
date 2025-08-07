// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from batrobot_msgs:action/BatrobotTask.idl
// generated code does not contain a copyright notice
#include "batrobot_msgs/action/detail/batrobot_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
batrobot_msgs__action__BatrobotTask_Goal__init(batrobot_msgs__action__BatrobotTask_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // task_number
  return true;
}

void
batrobot_msgs__action__BatrobotTask_Goal__fini(batrobot_msgs__action__BatrobotTask_Goal * msg)
{
  if (!msg) {
    return;
  }
  // task_number
}

bool
batrobot_msgs__action__BatrobotTask_Goal__are_equal(const batrobot_msgs__action__BatrobotTask_Goal * lhs, const batrobot_msgs__action__BatrobotTask_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_number
  if (lhs->task_number != rhs->task_number) {
    return false;
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_Goal__copy(
  const batrobot_msgs__action__BatrobotTask_Goal * input,
  batrobot_msgs__action__BatrobotTask_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // task_number
  output->task_number = input->task_number;
  return true;
}

batrobot_msgs__action__BatrobotTask_Goal *
batrobot_msgs__action__BatrobotTask_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_Goal * msg = (batrobot_msgs__action__BatrobotTask_Goal *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(batrobot_msgs__action__BatrobotTask_Goal));
  bool success = batrobot_msgs__action__BatrobotTask_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
batrobot_msgs__action__BatrobotTask_Goal__destroy(batrobot_msgs__action__BatrobotTask_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    batrobot_msgs__action__BatrobotTask_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
batrobot_msgs__action__BatrobotTask_Goal__Sequence__init(batrobot_msgs__action__BatrobotTask_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_Goal * data = NULL;

  if (size) {
    data = (batrobot_msgs__action__BatrobotTask_Goal *)allocator.zero_allocate(size, sizeof(batrobot_msgs__action__BatrobotTask_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = batrobot_msgs__action__BatrobotTask_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        batrobot_msgs__action__BatrobotTask_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
batrobot_msgs__action__BatrobotTask_Goal__Sequence__fini(batrobot_msgs__action__BatrobotTask_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      batrobot_msgs__action__BatrobotTask_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

batrobot_msgs__action__BatrobotTask_Goal__Sequence *
batrobot_msgs__action__BatrobotTask_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_Goal__Sequence * array = (batrobot_msgs__action__BatrobotTask_Goal__Sequence *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = batrobot_msgs__action__BatrobotTask_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
batrobot_msgs__action__BatrobotTask_Goal__Sequence__destroy(batrobot_msgs__action__BatrobotTask_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    batrobot_msgs__action__BatrobotTask_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
batrobot_msgs__action__BatrobotTask_Goal__Sequence__are_equal(const batrobot_msgs__action__BatrobotTask_Goal__Sequence * lhs, const batrobot_msgs__action__BatrobotTask_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_Goal__Sequence__copy(
  const batrobot_msgs__action__BatrobotTask_Goal__Sequence * input,
  batrobot_msgs__action__BatrobotTask_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(batrobot_msgs__action__BatrobotTask_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    batrobot_msgs__action__BatrobotTask_Goal * data =
      (batrobot_msgs__action__BatrobotTask_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!batrobot_msgs__action__BatrobotTask_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          batrobot_msgs__action__BatrobotTask_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
batrobot_msgs__action__BatrobotTask_Result__init(batrobot_msgs__action__BatrobotTask_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
batrobot_msgs__action__BatrobotTask_Result__fini(batrobot_msgs__action__BatrobotTask_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
batrobot_msgs__action__BatrobotTask_Result__are_equal(const batrobot_msgs__action__BatrobotTask_Result * lhs, const batrobot_msgs__action__BatrobotTask_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_Result__copy(
  const batrobot_msgs__action__BatrobotTask_Result * input,
  batrobot_msgs__action__BatrobotTask_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

batrobot_msgs__action__BatrobotTask_Result *
batrobot_msgs__action__BatrobotTask_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_Result * msg = (batrobot_msgs__action__BatrobotTask_Result *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(batrobot_msgs__action__BatrobotTask_Result));
  bool success = batrobot_msgs__action__BatrobotTask_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
batrobot_msgs__action__BatrobotTask_Result__destroy(batrobot_msgs__action__BatrobotTask_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    batrobot_msgs__action__BatrobotTask_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
batrobot_msgs__action__BatrobotTask_Result__Sequence__init(batrobot_msgs__action__BatrobotTask_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_Result * data = NULL;

  if (size) {
    data = (batrobot_msgs__action__BatrobotTask_Result *)allocator.zero_allocate(size, sizeof(batrobot_msgs__action__BatrobotTask_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = batrobot_msgs__action__BatrobotTask_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        batrobot_msgs__action__BatrobotTask_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
batrobot_msgs__action__BatrobotTask_Result__Sequence__fini(batrobot_msgs__action__BatrobotTask_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      batrobot_msgs__action__BatrobotTask_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

batrobot_msgs__action__BatrobotTask_Result__Sequence *
batrobot_msgs__action__BatrobotTask_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_Result__Sequence * array = (batrobot_msgs__action__BatrobotTask_Result__Sequence *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = batrobot_msgs__action__BatrobotTask_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
batrobot_msgs__action__BatrobotTask_Result__Sequence__destroy(batrobot_msgs__action__BatrobotTask_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    batrobot_msgs__action__BatrobotTask_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
batrobot_msgs__action__BatrobotTask_Result__Sequence__are_equal(const batrobot_msgs__action__BatrobotTask_Result__Sequence * lhs, const batrobot_msgs__action__BatrobotTask_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_Result__Sequence__copy(
  const batrobot_msgs__action__BatrobotTask_Result__Sequence * input,
  batrobot_msgs__action__BatrobotTask_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(batrobot_msgs__action__BatrobotTask_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    batrobot_msgs__action__BatrobotTask_Result * data =
      (batrobot_msgs__action__BatrobotTask_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!batrobot_msgs__action__BatrobotTask_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          batrobot_msgs__action__BatrobotTask_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
batrobot_msgs__action__BatrobotTask_Feedback__init(batrobot_msgs__action__BatrobotTask_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // percentage
  return true;
}

void
batrobot_msgs__action__BatrobotTask_Feedback__fini(batrobot_msgs__action__BatrobotTask_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // percentage
}

bool
batrobot_msgs__action__BatrobotTask_Feedback__are_equal(const batrobot_msgs__action__BatrobotTask_Feedback * lhs, const batrobot_msgs__action__BatrobotTask_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // percentage
  if (lhs->percentage != rhs->percentage) {
    return false;
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_Feedback__copy(
  const batrobot_msgs__action__BatrobotTask_Feedback * input,
  batrobot_msgs__action__BatrobotTask_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // percentage
  output->percentage = input->percentage;
  return true;
}

batrobot_msgs__action__BatrobotTask_Feedback *
batrobot_msgs__action__BatrobotTask_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_Feedback * msg = (batrobot_msgs__action__BatrobotTask_Feedback *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(batrobot_msgs__action__BatrobotTask_Feedback));
  bool success = batrobot_msgs__action__BatrobotTask_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
batrobot_msgs__action__BatrobotTask_Feedback__destroy(batrobot_msgs__action__BatrobotTask_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    batrobot_msgs__action__BatrobotTask_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
batrobot_msgs__action__BatrobotTask_Feedback__Sequence__init(batrobot_msgs__action__BatrobotTask_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_Feedback * data = NULL;

  if (size) {
    data = (batrobot_msgs__action__BatrobotTask_Feedback *)allocator.zero_allocate(size, sizeof(batrobot_msgs__action__BatrobotTask_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = batrobot_msgs__action__BatrobotTask_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        batrobot_msgs__action__BatrobotTask_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
batrobot_msgs__action__BatrobotTask_Feedback__Sequence__fini(batrobot_msgs__action__BatrobotTask_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      batrobot_msgs__action__BatrobotTask_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

batrobot_msgs__action__BatrobotTask_Feedback__Sequence *
batrobot_msgs__action__BatrobotTask_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_Feedback__Sequence * array = (batrobot_msgs__action__BatrobotTask_Feedback__Sequence *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = batrobot_msgs__action__BatrobotTask_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
batrobot_msgs__action__BatrobotTask_Feedback__Sequence__destroy(batrobot_msgs__action__BatrobotTask_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    batrobot_msgs__action__BatrobotTask_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
batrobot_msgs__action__BatrobotTask_Feedback__Sequence__are_equal(const batrobot_msgs__action__BatrobotTask_Feedback__Sequence * lhs, const batrobot_msgs__action__BatrobotTask_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_Feedback__Sequence__copy(
  const batrobot_msgs__action__BatrobotTask_Feedback__Sequence * input,
  batrobot_msgs__action__BatrobotTask_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(batrobot_msgs__action__BatrobotTask_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    batrobot_msgs__action__BatrobotTask_Feedback * data =
      (batrobot_msgs__action__BatrobotTask_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!batrobot_msgs__action__BatrobotTask_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          batrobot_msgs__action__BatrobotTask_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__functions.h"

bool
batrobot_msgs__action__BatrobotTask_SendGoal_Request__init(batrobot_msgs__action__BatrobotTask_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    batrobot_msgs__action__BatrobotTask_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!batrobot_msgs__action__BatrobotTask_Goal__init(&msg->goal)) {
    batrobot_msgs__action__BatrobotTask_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
batrobot_msgs__action__BatrobotTask_SendGoal_Request__fini(batrobot_msgs__action__BatrobotTask_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  batrobot_msgs__action__BatrobotTask_Goal__fini(&msg->goal);
}

bool
batrobot_msgs__action__BatrobotTask_SendGoal_Request__are_equal(const batrobot_msgs__action__BatrobotTask_SendGoal_Request * lhs, const batrobot_msgs__action__BatrobotTask_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!batrobot_msgs__action__BatrobotTask_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_SendGoal_Request__copy(
  const batrobot_msgs__action__BatrobotTask_SendGoal_Request * input,
  batrobot_msgs__action__BatrobotTask_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!batrobot_msgs__action__BatrobotTask_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

batrobot_msgs__action__BatrobotTask_SendGoal_Request *
batrobot_msgs__action__BatrobotTask_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_SendGoal_Request * msg = (batrobot_msgs__action__BatrobotTask_SendGoal_Request *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(batrobot_msgs__action__BatrobotTask_SendGoal_Request));
  bool success = batrobot_msgs__action__BatrobotTask_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
batrobot_msgs__action__BatrobotTask_SendGoal_Request__destroy(batrobot_msgs__action__BatrobotTask_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    batrobot_msgs__action__BatrobotTask_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence__init(batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_SendGoal_Request * data = NULL;

  if (size) {
    data = (batrobot_msgs__action__BatrobotTask_SendGoal_Request *)allocator.zero_allocate(size, sizeof(batrobot_msgs__action__BatrobotTask_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = batrobot_msgs__action__BatrobotTask_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        batrobot_msgs__action__BatrobotTask_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence__fini(batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      batrobot_msgs__action__BatrobotTask_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence *
batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence * array = (batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence__destroy(batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence__are_equal(const batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence * lhs, const batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence__copy(
  const batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence * input,
  batrobot_msgs__action__BatrobotTask_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(batrobot_msgs__action__BatrobotTask_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    batrobot_msgs__action__BatrobotTask_SendGoal_Request * data =
      (batrobot_msgs__action__BatrobotTask_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!batrobot_msgs__action__BatrobotTask_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          batrobot_msgs__action__BatrobotTask_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
batrobot_msgs__action__BatrobotTask_SendGoal_Response__init(batrobot_msgs__action__BatrobotTask_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    batrobot_msgs__action__BatrobotTask_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
batrobot_msgs__action__BatrobotTask_SendGoal_Response__fini(batrobot_msgs__action__BatrobotTask_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
batrobot_msgs__action__BatrobotTask_SendGoal_Response__are_equal(const batrobot_msgs__action__BatrobotTask_SendGoal_Response * lhs, const batrobot_msgs__action__BatrobotTask_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_SendGoal_Response__copy(
  const batrobot_msgs__action__BatrobotTask_SendGoal_Response * input,
  batrobot_msgs__action__BatrobotTask_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

batrobot_msgs__action__BatrobotTask_SendGoal_Response *
batrobot_msgs__action__BatrobotTask_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_SendGoal_Response * msg = (batrobot_msgs__action__BatrobotTask_SendGoal_Response *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(batrobot_msgs__action__BatrobotTask_SendGoal_Response));
  bool success = batrobot_msgs__action__BatrobotTask_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
batrobot_msgs__action__BatrobotTask_SendGoal_Response__destroy(batrobot_msgs__action__BatrobotTask_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    batrobot_msgs__action__BatrobotTask_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence__init(batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_SendGoal_Response * data = NULL;

  if (size) {
    data = (batrobot_msgs__action__BatrobotTask_SendGoal_Response *)allocator.zero_allocate(size, sizeof(batrobot_msgs__action__BatrobotTask_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = batrobot_msgs__action__BatrobotTask_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        batrobot_msgs__action__BatrobotTask_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence__fini(batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      batrobot_msgs__action__BatrobotTask_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence *
batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence * array = (batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence__destroy(batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence__are_equal(const batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence * lhs, const batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence__copy(
  const batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence * input,
  batrobot_msgs__action__BatrobotTask_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(batrobot_msgs__action__BatrobotTask_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    batrobot_msgs__action__BatrobotTask_SendGoal_Response * data =
      (batrobot_msgs__action__BatrobotTask_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!batrobot_msgs__action__BatrobotTask_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          batrobot_msgs__action__BatrobotTask_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
batrobot_msgs__action__BatrobotTask_GetResult_Request__init(batrobot_msgs__action__BatrobotTask_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    batrobot_msgs__action__BatrobotTask_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
batrobot_msgs__action__BatrobotTask_GetResult_Request__fini(batrobot_msgs__action__BatrobotTask_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
batrobot_msgs__action__BatrobotTask_GetResult_Request__are_equal(const batrobot_msgs__action__BatrobotTask_GetResult_Request * lhs, const batrobot_msgs__action__BatrobotTask_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_GetResult_Request__copy(
  const batrobot_msgs__action__BatrobotTask_GetResult_Request * input,
  batrobot_msgs__action__BatrobotTask_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

batrobot_msgs__action__BatrobotTask_GetResult_Request *
batrobot_msgs__action__BatrobotTask_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_GetResult_Request * msg = (batrobot_msgs__action__BatrobotTask_GetResult_Request *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(batrobot_msgs__action__BatrobotTask_GetResult_Request));
  bool success = batrobot_msgs__action__BatrobotTask_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
batrobot_msgs__action__BatrobotTask_GetResult_Request__destroy(batrobot_msgs__action__BatrobotTask_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    batrobot_msgs__action__BatrobotTask_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence__init(batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_GetResult_Request * data = NULL;

  if (size) {
    data = (batrobot_msgs__action__BatrobotTask_GetResult_Request *)allocator.zero_allocate(size, sizeof(batrobot_msgs__action__BatrobotTask_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = batrobot_msgs__action__BatrobotTask_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        batrobot_msgs__action__BatrobotTask_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence__fini(batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      batrobot_msgs__action__BatrobotTask_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence *
batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence * array = (batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence__destroy(batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence__are_equal(const batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence * lhs, const batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence__copy(
  const batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence * input,
  batrobot_msgs__action__BatrobotTask_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(batrobot_msgs__action__BatrobotTask_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    batrobot_msgs__action__BatrobotTask_GetResult_Request * data =
      (batrobot_msgs__action__BatrobotTask_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!batrobot_msgs__action__BatrobotTask_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          batrobot_msgs__action__BatrobotTask_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__functions.h"

bool
batrobot_msgs__action__BatrobotTask_GetResult_Response__init(batrobot_msgs__action__BatrobotTask_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!batrobot_msgs__action__BatrobotTask_Result__init(&msg->result)) {
    batrobot_msgs__action__BatrobotTask_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
batrobot_msgs__action__BatrobotTask_GetResult_Response__fini(batrobot_msgs__action__BatrobotTask_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  batrobot_msgs__action__BatrobotTask_Result__fini(&msg->result);
}

bool
batrobot_msgs__action__BatrobotTask_GetResult_Response__are_equal(const batrobot_msgs__action__BatrobotTask_GetResult_Response * lhs, const batrobot_msgs__action__BatrobotTask_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!batrobot_msgs__action__BatrobotTask_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_GetResult_Response__copy(
  const batrobot_msgs__action__BatrobotTask_GetResult_Response * input,
  batrobot_msgs__action__BatrobotTask_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!batrobot_msgs__action__BatrobotTask_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

batrobot_msgs__action__BatrobotTask_GetResult_Response *
batrobot_msgs__action__BatrobotTask_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_GetResult_Response * msg = (batrobot_msgs__action__BatrobotTask_GetResult_Response *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(batrobot_msgs__action__BatrobotTask_GetResult_Response));
  bool success = batrobot_msgs__action__BatrobotTask_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
batrobot_msgs__action__BatrobotTask_GetResult_Response__destroy(batrobot_msgs__action__BatrobotTask_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    batrobot_msgs__action__BatrobotTask_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence__init(batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_GetResult_Response * data = NULL;

  if (size) {
    data = (batrobot_msgs__action__BatrobotTask_GetResult_Response *)allocator.zero_allocate(size, sizeof(batrobot_msgs__action__BatrobotTask_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = batrobot_msgs__action__BatrobotTask_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        batrobot_msgs__action__BatrobotTask_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence__fini(batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      batrobot_msgs__action__BatrobotTask_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence *
batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence * array = (batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence__destroy(batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence__are_equal(const batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence * lhs, const batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence__copy(
  const batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence * input,
  batrobot_msgs__action__BatrobotTask_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(batrobot_msgs__action__BatrobotTask_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    batrobot_msgs__action__BatrobotTask_GetResult_Response * data =
      (batrobot_msgs__action__BatrobotTask_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!batrobot_msgs__action__BatrobotTask_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          batrobot_msgs__action__BatrobotTask_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "batrobot_msgs/action/detail/batrobot_task__functions.h"

bool
batrobot_msgs__action__BatrobotTask_FeedbackMessage__init(batrobot_msgs__action__BatrobotTask_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    batrobot_msgs__action__BatrobotTask_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!batrobot_msgs__action__BatrobotTask_Feedback__init(&msg->feedback)) {
    batrobot_msgs__action__BatrobotTask_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
batrobot_msgs__action__BatrobotTask_FeedbackMessage__fini(batrobot_msgs__action__BatrobotTask_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  batrobot_msgs__action__BatrobotTask_Feedback__fini(&msg->feedback);
}

bool
batrobot_msgs__action__BatrobotTask_FeedbackMessage__are_equal(const batrobot_msgs__action__BatrobotTask_FeedbackMessage * lhs, const batrobot_msgs__action__BatrobotTask_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!batrobot_msgs__action__BatrobotTask_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_FeedbackMessage__copy(
  const batrobot_msgs__action__BatrobotTask_FeedbackMessage * input,
  batrobot_msgs__action__BatrobotTask_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!batrobot_msgs__action__BatrobotTask_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

batrobot_msgs__action__BatrobotTask_FeedbackMessage *
batrobot_msgs__action__BatrobotTask_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_FeedbackMessage * msg = (batrobot_msgs__action__BatrobotTask_FeedbackMessage *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(batrobot_msgs__action__BatrobotTask_FeedbackMessage));
  bool success = batrobot_msgs__action__BatrobotTask_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
batrobot_msgs__action__BatrobotTask_FeedbackMessage__destroy(batrobot_msgs__action__BatrobotTask_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    batrobot_msgs__action__BatrobotTask_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence__init(batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_FeedbackMessage * data = NULL;

  if (size) {
    data = (batrobot_msgs__action__BatrobotTask_FeedbackMessage *)allocator.zero_allocate(size, sizeof(batrobot_msgs__action__BatrobotTask_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = batrobot_msgs__action__BatrobotTask_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        batrobot_msgs__action__BatrobotTask_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence__fini(batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      batrobot_msgs__action__BatrobotTask_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence *
batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence * array = (batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence *)allocator.allocate(sizeof(batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence__destroy(batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence__are_equal(const batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence * lhs, const batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence__copy(
  const batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence * input,
  batrobot_msgs__action__BatrobotTask_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(batrobot_msgs__action__BatrobotTask_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    batrobot_msgs__action__BatrobotTask_FeedbackMessage * data =
      (batrobot_msgs__action__BatrobotTask_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!batrobot_msgs__action__BatrobotTask_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          batrobot_msgs__action__BatrobotTask_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!batrobot_msgs__action__BatrobotTask_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
