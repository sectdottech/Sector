// Copyright (c) 2012 The Bitcoin developers
// Copyright (c) 2016-2017 The Sector developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef sector_VERSION_H
#define sector_VERSION_H

//#include <string>

//
// client versioning
//

// These need to be macro's, as version.cpp's voodoo requires it

// Sector version - intended for display purpose only
#define SECT_VERSION_MAJOR       1
#define SECT_VERSION_MINOR       0
#define SECT_VERSION_REVISION    0
#define SECT_VERSION_BUILD       0

static const int SECT_VERSION =
                           1000000 * SECT_VERSION_MAJOR
                         +   10000 * SECT_VERSION_MINOR
                         +     100 * SECT_VERSION_REVISION
                         +       1 * SECT_VERSION_BUILD;

// Sector version - reference for code tracking
#define PPCOIN_VERSION_MAJOR       0
#define PPCOIN_VERSION_MINOR       4
#define PPCOIN_VERSION_REVISION    0
#define PPCOIN_VERSION_BUILD       0

static const int PPCOIN_VERSION =
                           1000000 * PPCOIN_VERSION_MAJOR
                         +   10000 * PPCOIN_VERSION_MINOR
                         +     100 * PPCOIN_VERSION_REVISION
                         +       1 * PPCOIN_VERSION_BUILD;

// sector version - reference for code tracking
#define sector_VERSION_MAJOR       0
#define sector_VERSION_MINOR       6
#define sector_VERSION_REVISION    4
#define sector_VERSION_BUILD       0

static const int sector_VERSION =
                           1000000 * sector_VERSION_MAJOR
                         +   10000 * sector_VERSION_MINOR 
                         +     100 * sector_VERSION_REVISION
                         +       1 * sector_VERSION_BUILD;

static const int CLIENT_VERSION = sector_VERSION;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;


//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 60000;

// earlier versions not supported as of Feb 2012, and are disconnected
// NOTE: as of sector v0.6 message serialization (vSend, vRecv) still
// uses MIN_PROTO_VERSION(209), where message format uses PROTOCOL_VERSION
static const int MIN_PROTO_VERSION = 209;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

#endif
