/*
 * Copyright © 2020 Matt Robinson
 *
 * SPDX-License-Identifier: MIT
 */

// Disable server password auth as crypt() isn't available under Android
#define DROPBEAR_SVR_PASSWORD_AUTH 0

// Disable client password auth as getpass() isn't available under Android.
// However, this fork includes patch with this function, allowing it to work.
#define DROPBEAR_CLI_PASSWORD_AUTH 1

// Speed up symmetrical ciphers and hashes at the expense of larger binaries
#define DROPBEAR_SMALL_CODE 0
