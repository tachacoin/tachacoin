#ifndef TACHACOINUTILS_H
#define TACHACOINUTILS_H

#include <libdevcore/Common.h>
#include <libdevcore/FixedHash.h>

/**
 * tachacoinutils Provides utility functions to EVM for functionalities that already exist in tachacoin
 */
namespace tachacoinutils
{
/**
 * @brief btc_ecrecover Wrapper to CPubKey::RecoverCompact
 */
bool btc_ecrecover(dev::h256 const& hash, dev::u256 const& v, dev::h256 const& r, dev::h256 const& s, dev::h256 & key);
}

#endif
