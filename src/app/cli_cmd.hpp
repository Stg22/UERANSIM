//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#pragma once

#include <array>
#include <memory>
#include <string>
#include <utils/common_types.hpp>
#include <vector>

namespace app
{

struct GnbCliCommand
{
    enum PR
    {
        STATUS,
        INFO,
        AMF_LIST,
        AMF_INFO,
        UE_LIST,
        UE_COUNT
    } present;

    // AMF_INFO
    int amfId{};

    explicit GnbCliCommand(PR present) : present(present)
    {
    }
};

struct UeCliCommand
{
    enum PR
    {
        INFO,
        STATUS,
        TIMERS,
        PS_ESTABLISH,
        PS_RELEASE,
        PS_RELEASE_ALL,
        DE_REGISTER,
    } present;

    // DE_REGISTER
    EDeregCause deregCause{};

    // PS_RELEASE
    std::array<int8_t, 16> psIds{};
    int psCount{};

    // PS_ESTABLISH
    std::optional<SingleSlice> sNssai{};
    std::optional<std::string> apn{};
    bool isEmergency{};

    explicit UeCliCommand(PR present) : present(present)
    {
    }
};

std::unique_ptr<GnbCliCommand> ParseGnbCliCommand(std::vector<std::string> &&tokens, std::string &error,
                                                  std::string &output);

std::unique_ptr<UeCliCommand> ParseUeCliCommand(std::vector<std::string> &&tokens, std::string &error,
                                                std::string &output);

} // namespace app