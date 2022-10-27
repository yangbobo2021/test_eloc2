
static int computea1(int c, int d,int e) {
  if (d >= c) {
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
