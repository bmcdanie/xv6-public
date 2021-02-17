
int seed = 1;

void lcg_seed(int new_seed) {
	seed = new_seed;
}

// compute a pseudorandom integer.
// value in range [0, 32767]
int lcg_rand(void) {
    seed = (214013*seed+2531011);
    return (seed>>16)&0x7FFF;
}



