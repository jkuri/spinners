# spinners

Spinners is a header-only C++ library providing elegant terminal spinners for C++11 onwards.

<p align="center">
  <img src="https://user-images.githubusercontent.com/1796022/35551940-e300c878-0591-11e8-84d6-d7e8f0670eb8.gif">
</p>

### Installation

Add `spinners.hpp` to the project and use provided spinners from the `spinners` namespace.

### Simple Example

```cpp
#include "spinners.hpp"

using namespace spinners;

int main()
{
  Spinner *spinner = new Spinner();
  spinner->setText("Loading ...");
  spinner->setInterval(100);
  spinner->setSymbols("dots4");

  spinner->start();
  std::this_thread::sleep_for(std::chrono::seconds(5));
  spinner->stop();

  return 0;
}
```

Also check [source](examples/example.cpp) from the `examples/` folder.

### Available spinners

For available spinners please check the source in `include/spinners.hpp` folder or run the example demo provided.

### Thanks

Thanks to Sindre Sorhus for providing the awesome [ora](https://github.com/sindresorhus/ora) library for Node.JS where I extracted spinner chars from.

### LICENCE

MIT
