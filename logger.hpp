//
// Created by Don Goodman-Wilson on 14/07/2017.
//

#pragma once

#include <string>
#include <luna/luna.h>

void error_logger(luna::log_level level, const std::string &message);

void access_logger(const luna::request &request);

const std::string VERSION{"v1"};