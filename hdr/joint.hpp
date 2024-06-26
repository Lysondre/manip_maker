
#if !defined(JOINT_H)
#define JOINT_H

enum class JointType
{
    Revolute,
    Prismatic
};

struct Joint
{
    double alpha;
    double a;
    double theta;  // don't care when revolute
    double d;      // don't care when prismatic
    JointType type;
};

#endif  // JOINT_H