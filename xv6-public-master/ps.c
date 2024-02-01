#include "types.h"
#include "user.h"
#include "param.h"
#include "uproc.h"

// Dean Feller

int main() {

    struct uproc* table = malloc(NPROC * sizeof(struct uproc));
    if (!table) {
        return -1;
    }

    getprocs(NPROC, table);

    free(table);

    exit();
}