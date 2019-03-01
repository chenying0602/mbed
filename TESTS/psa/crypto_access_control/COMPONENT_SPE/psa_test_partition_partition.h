/* Copyright (c) 2017-2019 ARM Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/***********************************************************************************************************************
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * THIS FILE IS AN AUTO-GENERATED FILE - DO NOT MODIFY IT.
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * Template Version 1.0
 * Generated by tools/spm/generate_partition_code.py Version 1.0
 **********************************************************************************************************************/

#ifndef PSA_TEST_PARTITION_PARTITION_H
#define PSA_TEST_PARTITION_PARTITION_H

#define TEST_PARTITION_ID 128

#define TEST_PARTITION_ROT_SRV_COUNT (9UL)
#define TEST_PARTITION_EXT_ROT_SRV_COUNT (1UL)

/* TEST_PARTITION event flags */
#define TEST_PARTITION_RESERVED1_POS (1UL)
#define TEST_PARTITION_RESERVED1_MSK (1UL << TEST_PARTITION_RESERVED1_POS)

#define TEST_PARTITION_RESERVED2_POS (2UL)
#define TEST_PARTITION_RESERVED2_MSK (1UL << TEST_PARTITION_RESERVED2_POS)



#define CRYPTO_CREATE_PERSISTENT_KEY_MSK_POS (4UL)
#define CRYPTO_CREATE_PERSISTENT_KEY_MSK (1UL << CRYPTO_CREATE_PERSISTENT_KEY_MSK_POS)
#define CRYPTO_GENERATE_KEY_MSK_POS (5UL)
#define CRYPTO_GENERATE_KEY_MSK (1UL << CRYPTO_GENERATE_KEY_MSK_POS)
#define CRYPTO_OPEN_PERSISTENT_KEY_MSK_POS (6UL)
#define CRYPTO_OPEN_PERSISTENT_KEY_MSK (1UL << CRYPTO_OPEN_PERSISTENT_KEY_MSK_POS)
#define CRYPTO_CLOSE_KEY_MSK_POS (7UL)
#define CRYPTO_CLOSE_KEY_MSK (1UL << CRYPTO_CLOSE_KEY_MSK_POS)
#define CRYPTO_SET_KEY_POLICY_MSK_POS (8UL)
#define CRYPTO_SET_KEY_POLICY_MSK (1UL << CRYPTO_SET_KEY_POLICY_MSK_POS)
#define CRYPTO_DESTROY_KEY_MSK_POS (9UL)
#define CRYPTO_DESTROY_KEY_MSK (1UL << CRYPTO_DESTROY_KEY_MSK_POS)
#define CRYPTO_GET_KEY_INFO_MSK_POS (10UL)
#define CRYPTO_GET_KEY_INFO_MSK (1UL << CRYPTO_GET_KEY_INFO_MSK_POS)
#define CRYPTO_GET_KEY_POLICY_MSK_POS (11UL)
#define CRYPTO_GET_KEY_POLICY_MSK (1UL << CRYPTO_GET_KEY_POLICY_MSK_POS)
#define CRYPTO_IMPORT_KEY_MSK_POS (12UL)
#define CRYPTO_IMPORT_KEY_MSK (1UL << CRYPTO_IMPORT_KEY_MSK_POS)

#define TEST_PARTITION_WAIT_ANY_SID_MSK (\
    CRYPTO_CREATE_PERSISTENT_KEY_MSK | \
    CRYPTO_GENERATE_KEY_MSK | \
    CRYPTO_OPEN_PERSISTENT_KEY_MSK | \
    CRYPTO_CLOSE_KEY_MSK | \
    CRYPTO_SET_KEY_POLICY_MSK | \
    CRYPTO_DESTROY_KEY_MSK | \
    CRYPTO_GET_KEY_INFO_MSK | \
    CRYPTO_GET_KEY_POLICY_MSK | \
    CRYPTO_IMPORT_KEY_MSK)


#endif // PSA_TEST_PARTITION_PARTITION_H