#include <cstring>

class N {

public:
  N(int value) { this->n = value; }
  N operator+(N &rhs) { return N(rhs.n + this->n); }
  N operator-(N &rhs) { return N(this->n - rhs.n); }

  void setAnnotation(char *str)
  {
    size_t len;

    len = strlen(str);
    memcpy(this->str, str, len);
    return;
  }

private:
  int n;
  char *str;
};


int main(int argc,char **argv)
{
  N *five;
  N *six;
  int ret;

  if (argc < 2)
    _exit(1);

  five = new N(5);
  six = new N(6);

  five->setAnnotation(argv[1]);

  ret = (***six)(six, five);
  return ret;
}
