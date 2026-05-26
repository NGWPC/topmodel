#ifndef TOPMODEL_LOGGER_H
#define TOPMODEL_LOGGER_H

#include "ewts/module_constants.h"
#include "ewts/logger.h"
#include "ewts/log_levels.h"

#define Log(level, ...) EwtsLogModule(EWTS_ID_TOPMODEL, (level), __VA_ARGS__)
#define LOG(level, ...) EwtsLogModule(EWTS_ID_TOPMODEL, (level), __VA_ARGS__)
#define GetLogLevel() EwtsGetLogLevelModule(EWTS_ID_TOPMODEL)
#define IsLoggingEnabled() EwtsIsLoggingEnabledModule(EWTS_ID_TOPMODEL)

#endif /* TOPMODEL_LOGGER_H */
