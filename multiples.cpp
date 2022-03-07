template < typename WhatKind >
void multiples(WhatKind &sum, WhatKind x, int n) {
    sum = 1;
    for (int i = 0; i < n; i++) {
        sum += (i + 1) * x;
    }
}
