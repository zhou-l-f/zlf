// Generated by gencpp from file ros_arduino_msgs/ServoReadRequest.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_SERVOREADREQUEST_H
#define ROS_ARDUINO_MSGS_MESSAGE_SERVOREADREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_arduino_msgs
{
template <class ContainerAllocator>
struct ServoReadRequest_
{
  typedef ServoReadRequest_<ContainerAllocator> Type;

  ServoReadRequest_()
    : id(0)  {
    }
  ServoReadRequest_(const ContainerAllocator& _alloc)
    : id(0)  {
  (void)_alloc;
    }



   typedef uint8_t _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ServoReadRequest_

typedef ::ros_arduino_msgs::ServoReadRequest_<std::allocator<void> > ServoReadRequest;

typedef boost::shared_ptr< ::ros_arduino_msgs::ServoReadRequest > ServoReadRequestPtr;
typedef boost::shared_ptr< ::ros_arduino_msgs::ServoReadRequest const> ServoReadRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator1> & lhs, const ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_arduino_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "541b98e964705918fa8eb206b65347b3";
  }

  static const char* value(const ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x541b98e964705918ULL;
  static const uint64_t static_value2 = 0xfa8eb206b65347b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_arduino_msgs/ServoReadRequest";
  }

  static const char* value(const ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 id\n"
;
  }

  static const char* value(const ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServoReadRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_arduino_msgs::ServoReadRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_SERVOREADREQUEST_H
