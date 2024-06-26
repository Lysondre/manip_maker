
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

    Joint(double alpha = 0.0, double a = 0.0, double theta = 0.0, double d = 0.0)
        : alpha(alpha), a(a), theta(theta), d(d)
    {
    }
};

#endif  // JOINT_H