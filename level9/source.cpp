#include <cstring>

class N {

public:
  N(int val)
  {
    *this = 0x8048848;
    *(this + 0x68) = val;
  }

  N operator+(N &rhs) {
    return *(&rhs + 0x68) + *(this + 0x68);
  }

  N operator-(N &rhs) {
    return *(this + 0x68) - *(&rhs + 0x68);
  }

  void setAnnotation(char *str)
  {
    size_t len;

    len = strlen(str);
    memcpy(this + 4, str, len);
    return;
  }
};


int main(int argc,char **argv)
{
  N *object;
  N *special;
  int ret;

  if (argc < 2)
    _exit(1);

  object = new N(5);
  special = new N(6);

  obj->setAnnotation(argv[1]);

  ret = (***special)(special, object);
  return ret;
}
