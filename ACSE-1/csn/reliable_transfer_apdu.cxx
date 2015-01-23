//
// reliable_transfer_apdu.cxx
//
// Code automatically generated by asnparser.
//

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "reliable_transfer_apdu.h"



namespace Reliable_Transfer_APDU{

//
// RefuseReason
//


const RefuseReason::NameEntry RefuseReason::nameEntries[4] = {
    { 0, "rtsBusy" },
    { 1, "cannotRecover" },
    { 2, "validationFailure" },
    { 3, "unacceptableDialogueMode" }
};

const RefuseReason::InfoType RefuseReason::theInfo = {
    create,
    0x00000002,
    &ASN1::INTEGER::theInfo,
    ASN1::Unconstrained, 0, UINT_MAX
    , nameEntries, 4
};

//
// CallingSSuserReference
//


const void* CallingSSuserReference::selectionInfos[2] = {
    &t61String::value_type::theInfo,
    &octetString::value_type::theInfo
};

unsigned CallingSSuserReference::selectionTags[2] = {
    0x00000014,
    0x00000004
};

const char* CallingSSuserReference::selectionNames[2] = {
    "t61String",
    "octetString"
};

const CallingSSuserReference::InfoType CallingSSuserReference::theInfo = {
    ASN1::CHOICE::create,
    0x00000000,
    0,
    false,
    CallingSSuserReference::selectionInfos,
    2, 2,
    CallingSSuserReference::selectionTags,
    CallingSSuserReference::selectionNames
};

 //
// AbortReason
//


const AbortReason::NameEntry AbortReason::nameEntries[8] = {
    { 0, "localSystemProblem" },
    { 1, "invalidParameter" },
    { 2, "unrecognizedActivity" },
    { 3, "temporaryProblem" },
    { 4, "protocolError" },
    { 5, "permanentProblem" },
    { 6, "userError" },
    { 7, "transferCompleted" }
};

const AbortReason::InfoType AbortReason::theInfo = {
    create,
    0x00000002,
    &ASN1::INTEGER::theInfo,
    ASN1::Unconstrained, 0, UINT_MAX
    , nameEntries, 8
};

//
// RTORJapdu
//


const void* RTORJapdu::fieldInfos[2] = {
    &refuseReason::value_type::theInfo,
    &userDataRJ::value_type::theInfo
};

int RTORJapdu::fieldIds[2] = {
    0,
    1
};

unsigned RTORJapdu::fieldTags[2] = {
    0x80000000,
    0xa0000001
};

const char* RTORJapdu::fieldNames[2] = {
    "refuseReason",
    "userDataRJ"
};

const RTORJapdu::InfoType RTORJapdu::theInfo = {
    RTORJapdu::create,
    0x00000011,
    0,
    false,
    RTORJapdu::fieldInfos,
    RTORJapdu::fieldIds,
    2, 0, 2,
    NULL,
    RTORJapdu::fieldTags,
    RTORJapdu::fieldNames
};

 //
// RTABapdu
//


const void* RTABapdu::fieldInfos[3] = {
    &abortReason::value_type::theInfo,
    &reflectedParameter::value_type::theInfo,
    &userdataAB::value_type::theInfo
};

int RTABapdu::fieldIds[3] = {
    0,
    1,
    2
};

unsigned RTABapdu::fieldTags[3] = {
    0x80000000,
    0x80000001,
    0xa0000002
};

const char* RTABapdu::fieldNames[3] = {
    "abortReason",
    "reflectedParameter",
    "userdataAB"
};

const RTABapdu::InfoType RTABapdu::theInfo = {
    RTABapdu::create,
    0x00000011,
    0,
    false,
    RTABapdu::fieldInfos,
    RTABapdu::fieldIds,
    3, 0, 3,
    NULL,
    RTABapdu::fieldTags,
    RTABapdu::fieldNames
};

 //
// SessionConnectionIdentifier
//


const void* SessionConnectionIdentifier::fieldInfos[3] = {
    &callingSSuserReference::value_type::theInfo,
    &commonReference::value_type::theInfo,
    &additionalReferenceInformation::value_type::theInfo
};

int SessionConnectionIdentifier::fieldIds[3] = {
    -1,
    -1,
    0
};

unsigned SessionConnectionIdentifier::fieldTags[3] = {
    0x00000000,
    0x00000000,
    0x80000000
};

const char* SessionConnectionIdentifier::fieldNames[3] = {
    "callingSSuserReference",
    "commonReference",
    "additionalReferenceInformation"
};

const SessionConnectionIdentifier::InfoType SessionConnectionIdentifier::theInfo = {
    SessionConnectionIdentifier::create,
    0x00000010,
    0,
    false,
    SessionConnectionIdentifier::fieldInfos,
    SessionConnectionIdentifier::fieldIds,
    3, 0, 1,
    NULL,
    SessionConnectionIdentifier::fieldTags,
    SessionConnectionIdentifier::fieldNames
};

 //
// ConnectionData
//


const void* ConnectionData::selectionInfos[2] = {
    &open::value_type::theInfo,
    &recover::value_type::theInfo
};

unsigned Connectio