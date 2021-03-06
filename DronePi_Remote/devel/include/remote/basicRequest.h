// Generated by gencpp from file remote/basicRequest.msg
// DO NOT EDIT!


#ifndef REMOTE_MESSAGE_BASICREQUEST_H
#define REMOTE_MESSAGE_BASICREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace remote
{
template <class ContainerAllocator>
struct basicRequest_
{
  typedef basicRequest_<ContainerAllocator> Type;

  basicRequest_()
    : pos_x(0)
    , pos_y(0)
    , pos_z(0)  {
    }
  basicRequest_(const ContainerAllocator& _alloc)
    : pos_x(0)
    , pos_y(0)
    , pos_z(0)  {
    }



   typedef int32_t _pos_x_type;
  _pos_x_type pos_x;

   typedef int32_t _pos_y_type;
  _pos_y_type pos_y;

   typedef int32_t _pos_z_type;
  _pos_z_type pos_z;




  typedef boost::shared_ptr< ::remote::basicRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::remote::basicRequest_<ContainerAllocator> const> ConstPtr;

}; // struct basicRequest_

typedef ::remote::basicRequest_<std::allocator<void> > basicRequest;

typedef boost::shared_ptr< ::remote::basicRequest > basicRequestPtr;
typedef boost::shared_ptr< ::remote::basicRequest const> basicRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::remote::basicRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::remote::basicRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace remote

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'remote': ['/home/sandy/sandy/ros/DronePi/DronePi_Remote/src/remote/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::remote::basicRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::remote::basicRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::remote::basicRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::remote::basicRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::remote::basicRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::remote::basicRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::remote::basicRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "31e7366ada8e986c04bf6270c1646d21";
  }

  static const char* value(const ::remote::basicRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x31e7366ada8e986cULL;
  static const uint64_t static_value2 = 0x04bf6270c1646d21ULL;
};

template<class ContainerAllocator>
struct DataType< ::remote::basicRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "remote/basicRequest";
  }

  static const char* value(const ::remote::basicRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::remote::basicRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 pos_x\n\
int32 pos_y\n\
int32 pos_z\n\
\n\
";
  }

  static const char* value(const ::remote::basicRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::remote::basicRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pos_x);
      stream.next(m.pos_y);
      stream.next(m.pos_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct basicRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::remote::basicRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::remote::basicRequest_<ContainerAllocator>& v)
  {
    s << indent << "pos_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pos_x);
    s << indent << "pos_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pos_y);
    s << indent << "pos_z: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pos_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // REMOTE_MESSAGE_BASICREQUEST_H
