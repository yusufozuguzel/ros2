// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from levha_detection_system:srv/LevhaList.idl
// generated code does not contain a copyright notice
#include "levha_detection_system/srv/detail/levha_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `levha_adlari`
#include "rosidl_runtime_c/string_functions.h"
// Member `confidences`
// Member `xs`
// Member `ys`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
levha_detection_system__srv__LevhaList_Request__init(levha_detection_system__srv__LevhaList_Request * msg)
{
  if (!msg) {
    return false;
  }
  // levha_adlari
  if (!rosidl_runtime_c__String__Sequence__init(&msg->levha_adlari, 0)) {
    levha_detection_system__srv__LevhaList_Request__fini(msg);
    return false;
  }
  // confidences
  if (!rosidl_runtime_c__float__Sequence__init(&msg->confidences, 0)) {
    levha_detection_system__srv__LevhaList_Request__fini(msg);
    return false;
  }
  // xs
  if (!rosidl_runtime_c__float__Sequence__init(&msg->xs, 0)) {
    levha_detection_system__srv__LevhaList_Request__fini(msg);
    return false;
  }
  // ys
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ys, 0)) {
    levha_detection_system__srv__LevhaList_Request__fini(msg);
    return false;
  }
  // statu
  return true;
}

void
levha_detection_system__srv__LevhaList_Request__fini(levha_detection_system__srv__LevhaList_Request * msg)
{
  if (!msg) {
    return;
  }
  // levha_adlari
  rosidl_runtime_c__String__Sequence__fini(&msg->levha_adlari);
  // confidences
  rosidl_runtime_c__float__Sequence__fini(&msg->confidences);
  // xs
  rosidl_runtime_c__float__Sequence__fini(&msg->xs);
  // ys
  rosidl_runtime_c__float__Sequence__fini(&msg->ys);
  // statu
}

bool
levha_detection_system__srv__LevhaList_Request__are_equal(const levha_detection_system__srv__LevhaList_Request * lhs, const levha_detection_system__srv__LevhaList_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // levha_adlari
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->levha_adlari), &(rhs->levha_adlari)))
  {
    return false;
  }
  // confidences
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->confidences), &(rhs->confidences)))
  {
    return false;
  }
  // xs
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->xs), &(rhs->xs)))
  {
    return false;
  }
  // ys
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ys), &(rhs->ys)))
  {
    return false;
  }
  // statu
  if (lhs->statu != rhs->statu) {
    return false;
  }
  return true;
}

bool
levha_detection_system__srv__LevhaList_Request__copy(
  const levha_detection_system__srv__LevhaList_Request * input,
  levha_detection_system__srv__LevhaList_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // levha_adlari
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->levha_adlari), &(output->levha_adlari)))
  {
    return false;
  }
  // confidences
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->confidences), &(output->confidences)))
  {
    return false;
  }
  // xs
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->xs), &(output->xs)))
  {
    return false;
  }
  // ys
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ys), &(output->ys)))
  {
    return false;
  }
  // statu
  output->statu = input->statu;
  return true;
}

levha_detection_system__srv__LevhaList_Request *
levha_detection_system__srv__LevhaList_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  levha_detection_system__srv__LevhaList_Request * msg = (levha_detection_system__srv__LevhaList_Request *)allocator.allocate(sizeof(levha_detection_system__srv__LevhaList_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(levha_detection_system__srv__LevhaList_Request));
  bool success = levha_detection_system__srv__LevhaList_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
levha_detection_system__srv__LevhaList_Request__destroy(levha_detection_system__srv__LevhaList_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    levha_detection_system__srv__LevhaList_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
levha_detection_system__srv__LevhaList_Request__Sequence__init(levha_detection_system__srv__LevhaList_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  levha_detection_system__srv__LevhaList_Request * data = NULL;

  if (size) {
    data = (levha_detection_system__srv__LevhaList_Request *)allocator.zero_allocate(size, sizeof(levha_detection_system__srv__LevhaList_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = levha_detection_system__srv__LevhaList_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        levha_detection_system__srv__LevhaList_Request__fini(&data[i - 1]);
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
levha_detection_system__srv__LevhaList_Request__Sequence__fini(levha_detection_system__srv__LevhaList_Request__Sequence * array)
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
      levha_detection_system__srv__LevhaList_Request__fini(&array->data[i]);
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

levha_detection_system__srv__LevhaList_Request__Sequence *
levha_detection_system__srv__LevhaList_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  levha_detection_system__srv__LevhaList_Request__Sequence * array = (levha_detection_system__srv__LevhaList_Request__Sequence *)allocator.allocate(sizeof(levha_detection_system__srv__LevhaList_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = levha_detection_system__srv__LevhaList_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
levha_detection_system__srv__LevhaList_Request__Sequence__destroy(levha_detection_system__srv__LevhaList_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    levha_detection_system__srv__LevhaList_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
levha_detection_system__srv__LevhaList_Request__Sequence__are_equal(const levha_detection_system__srv__LevhaList_Request__Sequence * lhs, const levha_detection_system__srv__LevhaList_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!levha_detection_system__srv__LevhaList_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
levha_detection_system__srv__LevhaList_Request__Sequence__copy(
  const levha_detection_system__srv__LevhaList_Request__Sequence * input,
  levha_detection_system__srv__LevhaList_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(levha_detection_system__srv__LevhaList_Request);
    levha_detection_system__srv__LevhaList_Request * data =
      (levha_detection_system__srv__LevhaList_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!levha_detection_system__srv__LevhaList_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          levha_detection_system__srv__LevhaList_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!levha_detection_system__srv__LevhaList_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `en_yakin_levha`
// Member `durum`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
levha_detection_system__srv__LevhaList_Response__init(levha_detection_system__srv__LevhaList_Response * msg)
{
  if (!msg) {
    return false;
  }
  // en_yakin_levha
  if (!rosidl_runtime_c__String__init(&msg->en_yakin_levha)) {
    levha_detection_system__srv__LevhaList_Response__fini(msg);
    return false;
  }
  // uzaklik
  // durum
  if (!rosidl_runtime_c__String__init(&msg->durum)) {
    levha_detection_system__srv__LevhaList_Response__fini(msg);
    return false;
  }
  return true;
}

void
levha_detection_system__srv__LevhaList_Response__fini(levha_detection_system__srv__LevhaList_Response * msg)
{
  if (!msg) {
    return;
  }
  // en_yakin_levha
  rosidl_runtime_c__String__fini(&msg->en_yakin_levha);
  // uzaklik
  // durum
  rosidl_runtime_c__String__fini(&msg->durum);
}

bool
levha_detection_system__srv__LevhaList_Response__are_equal(const levha_detection_system__srv__LevhaList_Response * lhs, const levha_detection_system__srv__LevhaList_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // en_yakin_levha
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->en_yakin_levha), &(rhs->en_yakin_levha)))
  {
    return false;
  }
  // uzaklik
  if (lhs->uzaklik != rhs->uzaklik) {
    return false;
  }
  // durum
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->durum), &(rhs->durum)))
  {
    return false;
  }
  return true;
}

bool
levha_detection_system__srv__LevhaList_Response__copy(
  const levha_detection_system__srv__LevhaList_Response * input,
  levha_detection_system__srv__LevhaList_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // en_yakin_levha
  if (!rosidl_runtime_c__String__copy(
      &(input->en_yakin_levha), &(output->en_yakin_levha)))
  {
    return false;
  }
  // uzaklik
  output->uzaklik = input->uzaklik;
  // durum
  if (!rosidl_runtime_c__String__copy(
      &(input->durum), &(output->durum)))
  {
    return false;
  }
  return true;
}

levha_detection_system__srv__LevhaList_Response *
levha_detection_system__srv__LevhaList_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  levha_detection_system__srv__LevhaList_Response * msg = (levha_detection_system__srv__LevhaList_Response *)allocator.allocate(sizeof(levha_detection_system__srv__LevhaList_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(levha_detection_system__srv__LevhaList_Response));
  bool success = levha_detection_system__srv__LevhaList_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
levha_detection_system__srv__LevhaList_Response__destroy(levha_detection_system__srv__LevhaList_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    levha_detection_system__srv__LevhaList_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
levha_detection_system__srv__LevhaList_Response__Sequence__init(levha_detection_system__srv__LevhaList_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  levha_detection_system__srv__LevhaList_Response * data = NULL;

  if (size) {
    data = (levha_detection_system__srv__LevhaList_Response *)allocator.zero_allocate(size, sizeof(levha_detection_system__srv__LevhaList_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = levha_detection_system__srv__LevhaList_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        levha_detection_system__srv__LevhaList_Response__fini(&data[i - 1]);
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
levha_detection_system__srv__LevhaList_Response__Sequence__fini(levha_detection_system__srv__LevhaList_Response__Sequence * array)
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
      levha_detection_system__srv__LevhaList_Response__fini(&array->data[i]);
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

levha_detection_system__srv__LevhaList_Response__Sequence *
levha_detection_system__srv__LevhaList_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  levha_detection_system__srv__LevhaList_Response__Sequence * array = (levha_detection_system__srv__LevhaList_Response__Sequence *)allocator.allocate(sizeof(levha_detection_system__srv__LevhaList_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = levha_detection_system__srv__LevhaList_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
levha_detection_system__srv__LevhaList_Response__Sequence__destroy(levha_detection_system__srv__LevhaList_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    levha_detection_system__srv__LevhaList_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
levha_detection_system__srv__LevhaList_Response__Sequence__are_equal(const levha_detection_system__srv__LevhaList_Response__Sequence * lhs, const levha_detection_system__srv__LevhaList_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!levha_detection_system__srv__LevhaList_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
levha_detection_system__srv__LevhaList_Response__Sequence__copy(
  const levha_detection_system__srv__LevhaList_Response__Sequence * input,
  levha_detection_system__srv__LevhaList_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(levha_detection_system__srv__LevhaList_Response);
    levha_detection_system__srv__LevhaList_Response * data =
      (levha_detection_system__srv__LevhaList_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!levha_detection_system__srv__LevhaList_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          levha_detection_system__srv__LevhaList_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!levha_detection_system__srv__LevhaList_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
