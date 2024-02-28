#include <iostream>
#include <memory>
#include <vector>

#include "insertion_sort.hpp"

namespace {

class DynInt {
public:
    DynInt(int value):
        value_{std::make_unique<int>(value)}
    {}

    auto value() const
    {
        return *value_;
    }

private:
    std::unique_ptr<int> value_;
};

std::ostream& operator<<(std::ostream& out, DynInt const& di)
{
    out << "DynInt{" << di.value() << "}";
    return out;
}

bool operator<(DynInt const& rhs, DynInt const& lhs)
{
    return rhs.value() < lhs.value();
}

}

int main()
{
    using namespace std::string_literals;

    auto print_vector = [](auto const & v)
    {
        std::cout << "{ ";
        for (auto &&i: v) {
            std::cout << i << " ";
        }
        std::cout << "}\n";
    };

    auto vi = std::vector{2, 1, 4, 3};

    algorithm::insertion_sort<int>(vi);

    print_vector(vi);

    auto vs = std::vector{"test"s, "prototype"s, "production"s, "angel"s, "nerv"s, "gehirn"s};

    algorithm::insertion_sort<std::string>(vs);

    print_vector(vs);

    auto vdi = std::vector<DynInt>{};
    vdi.emplace_back(3);
    vdi.emplace_back(2);
    vdi.emplace_back(4);
    vdi.emplace_back(1);

    algorithm::insertion_sort<DynInt>(vdi);

    print_vector(vdi);
}
