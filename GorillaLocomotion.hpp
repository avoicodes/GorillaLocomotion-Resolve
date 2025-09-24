#include "BNMResolve.hpp"

struct Player;

struct GorillaLocomotionPlayer : Il2CppObject
{
    static Class GetClass()
    {
        static Class clazz = Class("GorillaLocomotion", "Player");
        return clazz;
    }

    static MonoType* GetType()
    {
        static MonoType* type = GetClass().GetMonoType();
        return type;
    }

    static GorillaLocomotionPlayer GetInstance()
    {
        static Method<GorillaLocomotionPlayer> play = GetClass().GetMethod("get__instance", 0);
        return play();
    }

    Transform GetRightHandTransform()
    {
        static Method<Transform> trans = GetClass().GetMethod("get_rightHandTransform", 0);
        return trans[this]();
    }

    Transform GetLeftHandTransform()
    {
        static Method <Transform> trans = GetClass().GetMethod("get_leftHandTransform", 0);
        return trans[this]();
    }

    float GetJumpMultiplier()
    {
        static Method<float> jumpmultiply = GetClass().GetMethod("get_jumpMultiplier", 0);
        return jumpmultiply[this]();
    }

    void SetJumpMultiplier(float jumpMutiplier)
    {
        static Method<void> setjumpmultiply = GetClass().GetMethod("set_jumpMultiplier", 1);
        return setjumpmultiply[this]();
    }

    float GetMaxJumpSpeed()
    {
        static Method<float> maxjumpSpeed = GetClass().GetMethod("get_maxJumpSpeed", 0);
        return maxjumpSpeed[this]();
    }

    void SetMaxJumpSpeed(float maxJumpSpeed)
    {
        static Method<void> setmaxjumpSpeed = GetClass().GetMethod("set_maxJumpSpeed", 1);
        return setmaxjumpSpeed[this]();
    }

    Transform GetBodyCollider()
    {
        static Method<Transform> bodyco = GetClass().GetMethod("get_bodyCollider", 0);
        return bodyco[this]();
    }

    Transform GetHeadCollider()
    {
        static Method<Transform> headco = GetClass().GetMethod("get_headCollider", 0);
        return headco[this]();
    }

    Transform GetTransform()
    {
        static Method<Transform> tra = GetClass().GetMethod("get_transform", 0);
        return tra[this]();
    }

    void SetTransform(Transform transform)
    {
        static Method<void> settra = GetClass().GetMethod("set_transform", 1);
        return settra[this]();
    }

    bool GetTagFreeze()
    {
        static Method<bool> tagfr = GetClass().GetMethod("get_tagFreeze", 0);
        return tagfr[this]();
    }

    void SetTagFreeze(float tagFreeze)
    {
        static Method<void> tagfr = GetClass().GetMethod("set_tagFreeze", 1);
        return tagfr[this]();
    }
};
