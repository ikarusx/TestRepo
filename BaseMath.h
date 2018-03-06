
#ifndef INCLUDED_XEUS_MATH_BASEMATH_H
#define INCLUDED_XEUS_MATH_BASEMATH_H

namespace XEUS
{
namespace Math
{

// Types.
#define f32 float
#define u32 uint32_t
#define i32 INT32
#define int32 uint32_t

// change these to const f32
const f32 kEpsilon = 1.0e-6f;

const f32 kPI = 3.1415926535897932384626433832795f;
const f32 kHalfPI = 1.5707963267948966192313216916398f;
const f32 kTwoPI = 2.0f*kPI;

template<typename T>
inline f32 DEG2RAD(T x)
{
	return ((f32)(x)*kPI / 180.0f);
}

template<typename T>
inline f32 RAD2DEG(T x)
{
	return ((f32)(x)*180.0f / kPI);
}

inline bool IsZero(f32 a)
{
    return (fabsf(a) < kEpsilon);
}

inline bool AreEqual(f32 a, f32 b)
{
    return (Math::IsZero(a-b));
}

inline int Roundftoi(f32 f)
{
    return (int)(f + ((f > 0.0f) ? 0.5f : -0.5f));
}

}
}

#endif // #ifndef INCLUDED_XEUS_MATH_BASEMATH_H
