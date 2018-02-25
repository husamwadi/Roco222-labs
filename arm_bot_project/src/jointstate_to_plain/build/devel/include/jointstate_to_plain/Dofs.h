// Generated by gencpp from file jointstate_to_plain/Dofs.msg
// DO NOT EDIT!


#ifndef JOINTSTATE_TO_PLAIN_MESSAGE_DOFS_H
#define JOINTSTATE_TO_PLAIN_MESSAGE_DOFS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jointstate_to_plain
{
template <class ContainerAllocator>
struct Dofs_
{
  typedef Dofs_<ContainerAllocator> Type;

  Dofs_()
    : base(0)
    , elbow_v(0)
    , wrist_v(0)
    , wrist_h(0)
    , claws(0)  {
    }
  Dofs_(const ContainerAllocator& _alloc)
    : base(0)
    , elbow_v(0)
    , wrist_v(0)
    , wrist_h(0)
    , claws(0)  {
  (void)_alloc;
    }



   typedef uint16_t _base_type;
  _base_type base;

   typedef uint16_t _elbow_v_type;
  _elbow_v_type elbow_v;

   typedef uint16_t _wrist_v_type;
  _wrist_v_type wrist_v;

   typedef uint16_t _wrist_h_type;
  _wrist_h_type wrist_h;

   typedef uint16_t _claws_type;
  _claws_type claws;




  typedef boost::shared_ptr< ::jointstate_to_plain::Dofs_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jointstate_to_plain::Dofs_<ContainerAllocator> const> ConstPtr;

}; // struct Dofs_

typedef ::jointstate_to_plain::Dofs_<std::allocator<void> > Dofs;

typedef boost::shared_ptr< ::jointstate_to_plain::Dofs > DofsPtr;
typedef boost::shared_ptr< ::jointstate_to_plain::Dofs const> DofsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jointstate_to_plain::Dofs_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jointstate_to_plain::Dofs_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace jointstate_to_plain

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jointstate_to_plain': ['/home/faisal/roco222/arm_project/arm_bot_project/src/jointstate_to_plain/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::jointstate_to_plain::Dofs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jointstate_to_plain::Dofs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jointstate_to_plain::Dofs_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jointstate_to_plain::Dofs_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jointstate_to_plain::Dofs_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jointstate_to_plain::Dofs_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jointstate_to_plain::Dofs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48ee67495ded0c011b71d34f7f38a20a";
  }

  static const char* value(const ::jointstate_to_plain::Dofs_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48ee67495ded0c01ULL;
  static const uint64_t static_value2 = 0x1b71d34f7f38a20aULL;
};

template<class ContainerAllocator>
struct DataType< ::jointstate_to_plain::Dofs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jointstate_to_plain/Dofs";
  }

  static const char* value(const ::jointstate_to_plain::Dofs_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jointstate_to_plain::Dofs_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 base\n\
uint16 elbow_v\n\
uint16 wrist_v\n\
uint16 wrist_h\n\
uint16 claws\n\
";
  }

  static const char* value(const ::jointstate_to_plain::Dofs_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jointstate_to_plain::Dofs_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.base);
      stream.next(m.elbow_v);
      stream.next(m.wrist_v);
      stream.next(m.wrist_h);
      stream.next(m.claws);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Dofs_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jointstate_to_plain::Dofs_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jointstate_to_plain::Dofs_<ContainerAllocator>& v)
  {
    s << indent << "base: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.base);
    s << indent << "elbow_v: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.elbow_v);
    s << indent << "wrist_v: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.wrist_v);
    s << indent << "wrist_h: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.wrist_h);
    s << indent << "claws: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.claws);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JOINTSTATE_TO_PLAIN_MESSAGE_DOFS_H