/*
 * This file and its contents are licensed under the Timescale License.
 * Please see the included NOTICE for copyright information and
 * LICENSE-TIMESCALE for a copy of the license.
 */
#ifndef TIMESCALEDB_TSL_COMPRESSION_UTILS_H
#define TIMESCALEDB_TSL_COMPRESSION_UTILS_H

#include <postgres.h>
#include <fmgr.h>

extern Datum tsl_compress_chunk(PG_FUNCTION_ARGS);
extern Datum tsl_decompress_chunk(PG_FUNCTION_ARGS);
extern void tsl_compress_chunk_wrapper(Chunk *chunk, bool if_not_compressed);

#endif /* TIMESCALEDB_TSL_COMPRESSION_UTILS_H */
