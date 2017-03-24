#ifndef CC_NONCOPYABLE_H_

namespace CC
{
namespace Base
{

class Noncopyable
{
public:
    Noncopyable(const Noncopyable&) = delete;
    void operator=(const Noncopyable&) = delete;
};

class Copyable
{
};

}//namespace Base
}//namespace CC

#define CC_NONCOPYABLE_H_
#endif//CC_NONCOPYABLE_H_
