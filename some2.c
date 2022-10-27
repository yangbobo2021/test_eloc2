
static int computea5(int c, int d,int e) {
  if (e == 3) {
    return e;
  }
  if (c > d) {
    return c + d;
  } else if (c == d) {
    return c * d;
  } else {
    return c - d;
  }
  if (c <= d) {
    return c % d;
  } else if (c < d and c > e) {
    return c / d;
  } else {
    return c + d + 3;
  }
}
