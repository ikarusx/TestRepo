
#ifndef INCLUDED_XEUS_MATH_COLOUR_H
#define INCLUDED_XEUS_MATH_COLOUR_H

#include "BaseMath.h"

namespace XEUS
{
namespace Math
{

struct Colour
{
    f32 r, g, b, a;

    // Constructors
    Colour() : r(0.0f), g(0.0f), b(0.0f), a(0.0f) {}
    Colour(f32 r, f32 g, f32 b, f32 a = 1.0f) : r(r), g(g), b(b), a(a) {}
    Colour(const Colour& other) : r(other.r), g(other.g), b(other.b), a(other.a) {}
    Colour(Colour&& other) : r(std::move(other.r)), g(std::move(other.g)), b(std::move(other.b)), a(std::move(other.a)) {}
	inline Colour(const char* hex);

    // Basic operations
    Colour operator+(const Colour& v) const { return { r + v.r, g + v.g, b + v.b, a + v.a }; }
    Colour operator-(const Colour& v) const { return { r - v.r, g - v.g, b - v.b, a - v.a }; }
    Colour operator*(f32 a) const { return { r * a, g * a, b * a, a * a }; }
	inline friend Colour operator*(f32 a, const Colour& v);
    inline Colour operator/(f32 a) const;
    
    Colour& operator+=(const Colour& v) { r += v.r; g += v.g; b += v.b;; a += v.a; return *this; }
    Colour& operator-=(const Colour& v) { r -= v.r; g -= v.g; b -= v.b; a -= v.a; return *this; }
    Colour& operator*=(f32 a) { r *= a; g *= a; b *= a; a *= a; return *this; }
    inline Colour& operator/=(f32 a);

	inline Colour& operator=(const Colour& v) { r = v.r; g = v.g; b = v.b; a = v.a; return *this; }

    // Conditions
    inline bool IsZero() const;

    bool operator==(const Colour& v) const { return r == v.r && g == v.g && b == v.b && a == v.a; }
    bool operator!=(const Colour& v) const { return r != v.r && g != v.g && b != v.b && a != v.a; }

    // Colour Methods
	inline void SetFromHex(const char* hex);
    
    // Some default values
#pragma region Colours
	//inline static Colour Red()			{ return { 1.0f, 0.0f, 0.0f, 1.0f }; }
	//inline static Colour Green()		{ return { 0.0f, 1.0f, 0.0f, 1.0f }; }
	//inline static Colour Blue()			{ return { 0.0f, 0.0f, 1.0f, 1.0f }; }
	//inline static Colour Cyan()			{ return { 0.0f, 1.0f, 1.0f, 1.0f }; }
	//inline static Colour Magenta()		{ return { 1.0f, 0.0f, 1.0f, 1.0f }; }
	//inline static Colour Yellow()		{ return { 1.0f, 1.0f, 0.0f, 1.0f }; }
	//inline static Colour Black()		{ return { 0.0f, 0.0f, 0.0f, 1.0f }; }
	//inline static Colour White()		{ return { 1.0f, 1.0f, 1.0f, 1.0f }; }

	//inline static Colour DarkGrey()		{ return { 0.25f, 0.25f, 0.25f, 1.0f }; }
	//inline static Colour Grey()			{ return {  0.5f,  0.5f,  0.5f, 1.0f }; }
	//inline static Colour LightGrey()	{ return { 0.75f, 0.75f, 0.75f, 1.0f }; }

	inline static Colour Brown2()		{ return { 0.647f, 0.165f, 0.165f, 1.0f }; }
	//inline static Colour Brown()		{ return { 0.823f, 0.412f, 0.118f, 1.0f }; }
	//inline static Colour Navy()			{ return { 0.0f, 0.0f, 0.5f, 1.0f }; }

	inline static Colour AliceBlue()			{ return { 0.941176534f, 0.972549081f, 1.000000000f, 1.000000000f }; }
	inline static Colour AntiqueWhite()			{ return { 0.980392218f, 0.921568692f, 0.843137324f, 1.000000000f }; }
	inline static Colour Aqua()					{ return { 0.000000000f, 1.000000000f, 1.000000000f, 1.000000000f }; }
	inline static Colour Aquamarine()			{ return { 0.498039246f, 1.000000000f, 0.831372619f, 1.000000000f }; }
	inline static Colour Azure()				{ return { 0.941176534f, 1.000000000f, 1.000000000f, 1.000000000f }; }
	inline static Colour Beige()				{ return { 0.960784376f, 0.960784376f, 0.862745166f, 1.000000000f }; }
	inline static Colour Bisque()				{ return { 1.000000000f, 0.894117713f, 0.768627524f, 1.000000000f }; }
	inline static Colour Black()				{ return { 0.000000000f, 0.000000000f, 0.000000000f, 1.000000000f }; }
	inline static Colour BlanchedAlmond()		{ return { 1.000000000f, 0.921568692f, 0.803921640f, 1.000000000f }; }
	inline static Colour Blue()					{ return { 0.000000000f, 0.000000000f, 1.000000000f, 1.000000000f }; }
	inline static Colour BlueViolet()			{ return { 0.541176498f, 0.168627456f, 0.886274576f, 1.000000000f }; }
	inline static Colour Brown()				{ return { 0.647058845f, 0.164705887f, 0.164705887f, 1.000000000f }; }
	inline static Colour BurlyWood()			{ return { 0.870588303f, 0.721568644f, 0.529411793f, 1.000000000f }; }
	inline static Colour CadetBlue()			{ return { 0.372549027f, 0.619607866f, 0.627451003f, 1.000000000f }; }
	inline static Colour Chartreuse()			{ return { 0.498039246f, 1.000000000f, 0.000000000f, 1.000000000f }; }
	inline static Colour Chocolate()			{ return { 0.823529482f, 0.411764741f, 0.117647067f, 1.000000000f }; }
	inline static Colour Coral()				{ return { 1.000000000f, 0.498039246f, 0.313725501f, 1.000000000f }; }
	inline static Colour CornflowerBlue()		{ return { 0.392156899f, 0.584313750f, 0.929411829f, 1.000000000f }; }
	inline static Colour Cornsilk()				{ return { 1.000000000f, 0.972549081f, 0.862745166f, 1.000000000f }; }
	inline static Colour Crimson()				{ return { 0.862745166f, 0.078431375f, 0.235294133f, 1.000000000f }; }
	inline static Colour Cyan()					{ return { 0.000000000f, 1.000000000f, 1.000000000f, 1.000000000f }; }
	inline static Colour DarkBlue()				{ return { 0.000000000f, 0.000000000f, 0.545098066f, 1.000000000f }; }
	inline static Colour DarkCyan()				{ return { 0.000000000f, 0.545098066f, 0.545098066f, 1.000000000f }; }
	inline static Colour DarkGoldenrod()		{ return { 0.721568644f, 0.525490224f, 0.043137256f, 1.000000000f }; }
	inline static Colour DarkGrey()				{ return { 0.662745118f, 0.662745118f, 0.662745118f, 1.000000000f }; }
	inline static Colour DarkGreen()			{ return { 0.000000000f, 0.392156899f, 0.000000000f, 1.000000000f }; }
	inline static Colour DarkKhaki()			{ return { 0.741176486f, 0.717647076f, 0.419607878f, 1.000000000f }; }
	inline static Colour DarkMagenta()			{ return { 0.545098066f, 0.000000000f, 0.545098066f, 1.000000000f }; }
	inline static Colour DarkOliveGreen()		{ return { 0.333333343f, 0.419607878f, 0.184313729f, 1.000000000f }; }
	inline static Colour DarkOrange()			{ return { 1.000000000f, 0.549019635f, 0.000000000f, 1.000000000f }; }
	inline static Colour DarkOrchid()			{ return { 0.600000024f, 0.196078449f, 0.800000072f, 1.000000000f }; }
	inline static Colour DarkRed()				{ return { 0.545098066f, 0.000000000f, 0.000000000f, 1.000000000f }; }
	inline static Colour DarkSalmon()			{ return { 0.913725555f, 0.588235319f, 0.478431404f, 1.000000000f }; }
	inline static Colour DarkSeaGreen()			{ return { 0.560784340f, 0.737254918f, 0.545098066f, 1.000000000f }; }
	inline static Colour DarkSlateBlue()		{ return { 0.282352954f, 0.239215702f, 0.545098066f, 1.000000000f }; }
	inline static Colour DarkSlateGrey()		{ return { 0.184313729f, 0.309803933f, 0.309803933f, 1.000000000f }; }
	inline static Colour DarkTurquoise()		{ return { 0.000000000f, 0.807843208f, 0.819607913f, 1.000000000f }; }
	inline static Colour DarkViolet()			{ return { 0.580392182f, 0.000000000f, 0.827451050f, 1.000000000f }; }
	inline static Colour DeepPink()				{ return { 1.000000000f, 0.078431375f, 0.576470613f, 1.000000000f }; }
	inline static Colour DeepSkyBlue()			{ return { 0.000000000f, 0.749019623f, 1.000000000f, 1.000000000f }; }
	inline static Colour DimGrey()				{ return { 0.411764741f, 0.411764741f, 0.411764741f, 1.000000000f }; }
	inline static Colour DodgerBlue()			{ return { 0.117647067f, 0.564705908f, 1.000000000f, 1.000000000f }; }
	inline static Colour Firebrick()			{ return { 0.698039234f, 0.133333340f, 0.133333340f, 1.000000000f }; }
	inline static Colour FloralWhite()			{ return { 1.000000000f, 0.980392218f, 0.941176534f, 1.000000000f }; }
	inline static Colour ForestGreen()			{ return { 0.133333340f, 0.545098066f, 0.133333340f, 1.000000000f }; }
	inline static Colour Fuchsia()				{ return { 1.000000000f, 0.000000000f, 1.000000000f, 1.000000000f }; }
	inline static Colour Gainsboro()			{ return { 0.862745166f, 0.862745166f, 0.862745166f, 1.000000000f }; }
	inline static Colour GhostWhite()			{ return { 0.972549081f, 0.972549081f, 1.000000000f, 1.000000000f }; }
	inline static Colour Gold()					{ return { 1.000000000f, 0.843137324f, 0.000000000f, 1.000000000f }; }
	inline static Colour Goldenrod()			{ return { 0.854902029f, 0.647058845f, 0.125490203f, 1.000000000f }; }
	inline static Colour Grey()					{ return { 0.501960814f, 0.501960814f, 0.501960814f, 1.000000000f }; }
	inline static Colour Green()				{ return { 0.000000000f, 0.501960814f, 0.000000000f, 1.000000000f }; }
	inline static Colour GreenYellow()			{ return { 0.678431392f, 1.000000000f, 0.184313729f, 1.000000000f }; }
	inline static Colour Honeydew()				{ return { 0.941176534f, 1.000000000f, 0.941176534f, 1.000000000f }; }
	inline static Colour HotPink()				{ return { 1.000000000f, 0.411764741f, 0.705882370f, 1.000000000f }; }
	inline static Colour IndianRed()			{ return { 0.803921640f, 0.360784322f, 0.360784322f, 1.000000000f }; }
	inline static Colour Indigo()				{ return { 0.294117659f, 0.000000000f, 0.509803951f, 1.000000000f }; }
	inline static Colour Ivory()				{ return { 1.000000000f, 1.000000000f, 0.941176534f, 1.000000000f }; }
	inline static Colour Khaki()				{ return { 0.941176534f, 0.901960850f, 0.549019635f, 1.000000000f }; }
	inline static Colour Lavender()				{ return { 0.901960850f, 0.901960850f, 0.980392218f, 1.000000000f }; }
	inline static Colour LavenderBlush()		{ return { 1.000000000f, 0.941176534f, 0.960784376f, 1.000000000f }; }
	inline static Colour LawnGreen()			{ return { 0.486274540f, 0.988235354f, 0.000000000f, 1.000000000f }; }
	inline static Colour LemonChiffon()			{ return { 1.000000000f, 0.980392218f, 0.803921640f, 1.000000000f }; }
	inline static Colour LightBlue()			{ return { 0.678431392f, 0.847058892f, 0.901960850f, 1.000000000f }; }
	inline static Colour LightCoral()			{ return { 0.941176534f, 0.501960814f, 0.501960814f, 1.000000000f }; }
	inline static Colour LightCyan()			{ return { 0.878431439f, 1.000000000f, 1.000000000f, 1.000000000f }; }
	inline static Colour LightGoldenrodYellow()	{ return { 0.980392218f, 0.980392218f, 0.823529482f, 1.000000000f }; }
	inline static Colour LightGreen()			{ return { 0.564705908f, 0.933333397f, 0.564705908f, 1.000000000f }; }
	inline static Colour LightGrey()			{ return { 0.827451050f, 0.827451050f, 0.827451050f, 1.000000000f }; }
	inline static Colour LightPink()			{ return { 1.000000000f, 0.713725507f, 0.756862819f, 1.000000000f }; }
	inline static Colour LightSalmon()			{ return { 1.000000000f, 0.627451003f, 0.478431404f, 1.000000000f }; }
	inline static Colour LightSeaGreen()		{ return { 0.125490203f, 0.698039234f, 0.666666687f, 1.000000000f }; }
	inline static Colour LightSkyBlue()			{ return { 0.529411793f, 0.807843208f, 0.980392218f, 1.000000000f }; }
	inline static Colour LightSlateGrey()		{ return { 0.466666698f, 0.533333361f, 0.600000024f, 1.000000000f }; }
	inline static Colour LightSteelBlue()		{ return { 0.690196097f, 0.768627524f, 0.870588303f, 1.000000000f }; }
	inline static Colour LightYellow()			{ return { 1.000000000f, 1.000000000f, 0.878431439f, 1.000000000f }; }
	inline static Colour Lime()					{ return { 0.000000000f, 1.000000000f, 0.000000000f, 1.000000000f }; }
	inline static Colour LimeGreen()			{ return { 0.196078449f, 0.803921640f, 0.196078449f, 1.000000000f }; }
	inline static Colour Linen()				{ return { 0.980392218f, 0.941176534f, 0.901960850f, 1.000000000f }; }
	inline static Colour Magenta()				{ return { 1.000000000f, 0.000000000f, 1.000000000f, 1.000000000f }; }
	inline static Colour Maroon()				{ return { 0.501960814f, 0.000000000f, 0.000000000f, 1.000000000f }; }
	inline static Colour MediumAquamarine()		{ return { 0.400000036f, 0.803921640f, 0.666666687f, 1.000000000f }; }
	inline static Colour MediumBlue()			{ return { 0.000000000f, 0.000000000f, 0.803921640f, 1.000000000f }; }
	inline static Colour MediumOrchid()			{ return { 0.729411781f, 0.333333343f, 0.827451050f, 1.000000000f }; }
	inline static Colour MediumPurple()			{ return { 0.576470613f, 0.439215720f, 0.858823597f, 1.000000000f }; }
	inline static Colour MediumSeaGreen()		{ return { 0.235294133f, 0.701960802f, 0.443137288f, 1.000000000f }; }
	inline static Colour MediumSlateBlue()		{ return { 0.482352972f, 0.407843173f, 0.933333397f, 1.000000000f }; }
	inline static Colour MediumSpringGreen()	{ return { 0.000000000f, 0.980392218f, 0.603921592f, 1.000000000f }; }
	inline static Colour MediumTurquoise()		{ return { 0.282352954f, 0.819607913f, 0.800000072f, 1.000000000f }; }
	inline static Colour MediumVioletRed()		{ return { 0.780392230f, 0.082352944f, 0.521568656f, 1.000000000f }; }
	inline static Colour MidnightBlue()			{ return { 0.098039225f, 0.098039225f, 0.439215720f, 1.000000000f }; }
	inline static Colour MintCream()			{ return { 0.960784376f, 1.000000000f, 0.980392218f, 1.000000000f }; }
	inline static Colour MistyRose()			{ return { 1.000000000f, 0.894117713f, 0.882353008f, 1.000000000f }; }
	inline static Colour Moccasin()				{ return { 1.000000000f, 0.894117713f, 0.709803939f, 1.000000000f }; }
	inline static Colour NavajoWhite()			{ return { 1.000000000f, 0.870588303f, 0.678431392f, 1.000000000f }; }
	inline static Colour Navy()					{ return { 0.000000000f, 0.000000000f, 0.501960814f, 1.000000000f }; }
	inline static Colour OldLace()				{ return { 0.992156923f, 0.960784376f, 0.901960850f, 1.000000000f }; }
	inline static Colour Olive()				{ return { 0.501960814f, 0.501960814f, 0.000000000f, 1.000000000f }; }
	inline static Colour OliveDrab()			{ return { 0.419607878f, 0.556862772f, 0.137254909f, 1.000000000f }; }
	inline static Colour Orange()				{ return { 1.000000000f, 0.647058845f, 0.000000000f, 1.000000000f }; }
	inline static Colour OrangeRed()			{ return { 1.000000000f, 0.270588249f, 0.000000000f, 1.000000000f }; }
	inline static Colour Orchid()				{ return { 0.854902029f, 0.439215720f, 0.839215755f, 1.000000000f }; }
	inline static Colour PaleGoldenrod()		{ return { 0.933333397f, 0.909803987f, 0.666666687f, 1.000000000f }; }
	inline static Colour PaleGreen()			{ return { 0.596078455f, 0.984313786f, 0.596078455f, 1.000000000f }; }
	inline static Colour PaleTurquoise()		{ return { 0.686274529f, 0.933333397f, 0.933333397f, 1.000000000f }; }
	inline static Colour PaleVioletRed()		{ return { 0.858823597f, 0.439215720f, 0.576470613f, 1.000000000f }; }
	inline static Colour PapayaWhip()			{ return { 1.000000000f, 0.937254965f, 0.835294187f, 1.000000000f }; }
	inline static Colour PeachPuff()			{ return { 1.000000000f, 0.854902029f, 0.725490212f, 1.000000000f }; }
	inline static Colour Peru()					{ return { 0.803921640f, 0.521568656f, 0.247058839f, 1.000000000f }; }
	inline static Colour Pink()					{ return { 1.000000000f, 0.752941251f, 0.796078503f, 1.000000000f }; }
	inline static Colour Plum()					{ return { 0.866666734f, 0.627451003f, 0.866666734f, 1.000000000f }; }
	inline static Colour PowderBlue()			{ return { 0.690196097f, 0.878431439f, 0.901960850f, 1.000000000f }; }
	inline static Colour Purple()				{ return { 0.501960814f, 0.000000000f, 0.501960814f, 1.000000000f }; }
	inline static Colour Red()					{ return { 1.000000000f, 0.000000000f, 0.000000000f, 1.000000000f }; }
	inline static Colour RosyBrown()			{ return { 0.737254918f, 0.560784340f, 0.560784340f, 1.000000000f }; }
	inline static Colour RoyalBlue()			{ return { 0.254901975f, 0.411764741f, 0.882353008f, 1.000000000f }; }
	inline static Colour SaddleBrown()			{ return { 0.545098066f, 0.270588249f, 0.074509807f, 1.000000000f }; }
	inline static Colour Salmon()				{ return { 0.980392218f, 0.501960814f, 0.447058856f, 1.000000000f }; }
	inline static Colour SandyBrown()			{ return { 0.956862807f, 0.643137276f, 0.376470625f, 1.000000000f }; }
	inline static Colour SeaGreen()				{ return { 0.180392161f, 0.545098066f, 0.341176480f, 1.000000000f }; }
	inline static Colour SeaShell()				{ return { 1.000000000f, 0.960784376f, 0.933333397f, 1.000000000f }; }
	inline static Colour Sienna()				{ return { 0.627451003f, 0.321568638f, 0.176470593f, 1.000000000f }; }
	inline static Colour Silver()				{ return { 0.752941251f, 0.752941251f, 0.752941251f, 1.000000000f }; }
	inline static Colour SkyBlue()				{ return { 0.529411793f, 0.807843208f, 0.921568692f, 1.000000000f }; }
	inline static Colour SlateBlue()			{ return { 0.415686309f, 0.352941185f, 0.803921640f, 1.000000000f }; }
	inline static Colour SlateGrey()			{ return { 0.439215720f, 0.501960814f, 0.564705908f, 1.000000000f }; }
	inline static Colour Snow()					{ return { 1.000000000f, 0.980392218f, 0.980392218f, 1.000000000f }; }
	inline static Colour SpringGreen()			{ return { 0.000000000f, 1.000000000f, 0.498039246f, 1.000000000f }; }
	inline static Colour SteelBlue()			{ return { 0.274509817f, 0.509803951f, 0.705882370f, 1.000000000f }; }
	inline static Colour Tan()					{ return { 0.823529482f, 0.705882370f, 0.549019635f, 1.000000000f }; }
	inline static Colour Teal()					{ return { 0.000000000f, 0.501960814f, 0.501960814f, 1.000000000f }; }
	inline static Colour Thistle()				{ return { 0.847058892f, 0.749019623f, 0.847058892f, 1.000000000f }; }
	inline static Colour Tomato()				{ return { 1.000000000f, 0.388235331f, 0.278431386f, 1.000000000f }; }
	inline static Colour Transparent()			{ return { 0.000000000f, 0.000000000f, 0.000000000f, 0.000000000f }; }
	inline static Colour Turquoise()			{ return { 0.250980407f, 0.878431439f, 0.815686345f, 1.000000000f }; }
	inline static Colour Violet()				{ return { 0.933333397f, 0.509803951f, 0.933333397f, 1.000000000f }; }
	inline static Colour Wheat()				{ return { 0.960784376f, 0.870588303f, 0.701960802f, 1.000000000f }; }
	inline static Colour White()				{ return { 1.000000000f, 1.000000000f, 1.000000000f, 1.000000000f }; }
	inline static Colour WhiteSmoke()			{ return { 0.960784376f, 0.960784376f, 0.960784376f, 1.000000000f }; }
	inline static Colour Yellow()				{ return { 1.000000000f, 1.000000000f, 0.000000000f, 1.000000000f }; }
	inline static Colour YellowGreen()			{ return { 0.603921592f, 0.803921640f, 0.196078449f, 1.000000000f }; }

#pragma endregion
};

inline Colour::Colour(const char* hex)
{
	if (hex == nullptr)
	{
		return;
	}

	SetFromHex(hex);
}

// Operations
/// Global multiplication operator for commutativity.
inline Colour operator*(f32 a, const Colour& v)
{
	return v * a;
}

inline Colour Colour::operator/(f32 a) const
{
    ASSERT(!Math::IsZero(a), "[Math::Colour] Dividing by zero.");

	const f32 inverse = 1.0f / a;

    return { r * inverse, g * inverse, b * inverse, a * inverse };
}

inline Colour& Colour::operator/=(f32 a)
{
    ASSERT(!Math::IsZero(a), "[Math::Colour] Dividing by zero.");

	const f32 inverse = 1.0f / a;

    r *= inverse; g *= inverse; b *= inverse; a *= inverse;

    return *this;
}

// Conditions
inline bool Colour::IsZero() const
{
    return Math::IsZero(r) && Math::IsZero(g) && Math::IsZero(b) && Math::IsZero(a);
}

inline void Colour::SetFromHex(const char* hex)
{
	ASSERT(hex != nullptr, "[Math::Colour] Invalid hex code.");
	ASSERT(strlen(hex) >= 6, "[Math::Colour] Hex code is too short.");

	i32 intHex;
	if (strlen(hex) < 7)
	{
		intHex = std::stoi(hex, 0, 16);
	}
	else
	{
		intHex = std::stoi(&hex[1], 0, 16);
	}

	f32 inverse = 1.0f / 255.0f;

	r = ((intHex >> 16) & 0xFF) * inverse;
	g = ((intHex >> 8) & 0xFF) * inverse;
	b = ((intHex) & 0xFF) * inverse;
	a = 1.0f;
}

// Statics.
//inline Colour xAxis()
//{
//	return { 1.0f, 0.0f, 0.0f, 0.0f };
//}

}
}

#endif // #ifndef INCLUDED_XEUS_MATH_COLOUR_H
