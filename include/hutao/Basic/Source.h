#ifndef HUTAO_COMMON_SOURCE_H_
#define HUTAO_COMMON_SOURCE_H_

#include <memory>

#include <hutao/Basic/UniString.h>
namespace hutao
{

    class SourceManager
    {

    };

    class Source
    {
    public:
        Source()
            : source()
        {

        }
    private:
        UniString source;
    };

    class SourceLocation
    {

    private:
        std::size_t offset;
    };

    class SourceRange
    {

    private:
        SourceLocation start;
        SourceLocation end;
    };
}
#endif
