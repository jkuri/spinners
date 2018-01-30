#include "spinners.hpp"

using namespace spinners;

int main()
{
  for (std::map<const char *, const char *>::iterator it = spinners::spinnerType.begin(); it != spinners::spinnerType.end(); ++it)
  {
    Spinner *spinner = new Spinner();
    spinner->setText("Loading ...");
    spinner->setSymbols(it->first);
    spinner->start();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    spinner->stop();
    std::cout << "\u001b[0K" << "Done. (" << it->first << ")" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }

  return 0;
}
