#ifndef __PNRTA_DISSECTOR_H__
#define __PNRTA_DISSECTOR_H__

/**
 * @file
 * @brief PNRTADissector header.
 *
 * This Dissector ist the dissector for asynchronous real time
 *
 */


#include <stdlib.h>
#include <stdio.h>

#include "dissect/Dissector-int.h"
#include "dissect/Dissector.h"
#include "dissect/tree/ProtocolTree.h"
#include "dissect/buffer/Buffy.h"

/**
 * @see Dissector_new
 */
Dissector_t *PNRTADissector_new();

/**
 * @see Dissector_free
 */
void PNRTADissector_free(Dissector_t *dissector);

/**
 * @see Dissector_dissect
 */
int PNRTADissector_dissect(Dissector_t *this, Buffy_t *buf, ProtocolTree_t *tree);

#endif
