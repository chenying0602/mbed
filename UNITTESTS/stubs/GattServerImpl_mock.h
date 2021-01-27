/* mbed Microcontroller Library
 * Copyright (c) 2020 ARM Limited
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

#ifndef BLE_GATTSERVERMOCK_H
#define BLE_GATTSERVERMOCK_H

#include "gmock/gmock.h"
#include "source/GattServerImpl.h"

namespace ble {

class GattServerMock : public ble::impl::GattServer {
public:
    GattServerMock() {};
    GattServerMock(const GattServerMock&) = delete;
    GattServerMock& operator=(const GattServerMock&) = delete;
    virtual ~GattServerMock() {};

    MOCK_METHOD(void, setEventHandler, (EventHandler *handler), (override));
    MOCK_METHOD(ble_error_t, reset, (ble::GattServer* server), (override));
    MOCK_METHOD(ble_error_t, addService, (GattService &service), (override));
    MOCK_METHOD(ble_error_t, read, (GattAttribute::Handle_t attributeHandle, uint8_t buffer[], uint16_t *lengthP), (override));
    MOCK_METHOD(ble_error_t, read, (ble::connection_handle_t connectionHandle, GattAttribute::Handle_t attributeHandle, uint8_t *buffer, uint16_t *lengthP), (override));
    MOCK_METHOD(ble_error_t, write, (GattAttribute::Handle_t attributeHandle, const uint8_t *value, uint16_t size, bool localOnly), (override));
    MOCK_METHOD(ble_error_t, write, (ble::connection_handle_t connectionHandle, GattAttribute::Handle_t attributeHandle, const uint8_t *value, uint16_t size, bool localOnly), (override));
    MOCK_METHOD(ble_error_t, areUpdatesEnabled, (const GattCharacteristic &characteristic, bool *enabledP), (override));
    MOCK_METHOD(ble_error_t, areUpdatesEnabled, (ble::connection_handle_t connectionHandle, const GattCharacteristic &characteristic, bool *enabledP), (override));
    MOCK_METHOD(ble::Gap::PreferredConnectionParams_t, getPreferredConnectionParams, (), (override));
    MOCK_METHOD(void, setPreferredConnectionParams, (const ble::Gap::PreferredConnectionParams_t &params), (override));
    MOCK_METHOD(bool, isOnDataReadAvailable, (), (const, override));
    MOCK_METHOD(void, onDataSent, (const DataSentCallback_t &callback), (override));
    MOCK_METHOD(DataSentCallbackChain_t&, onDataSent, (), (override));
    MOCK_METHOD(void, onDataWritten, (const DataWrittenCallback_t &callback), (override));
    MOCK_METHOD(DataWrittenCallbackChain_t&, onDataWritten, (), (override));
    MOCK_METHOD(ble_error_t, onDataRead, (const DataReadCallback_t &callback), (override));
    MOCK_METHOD(DataReadCallbackChain_t&, onDataRead, (), (override));
    MOCK_METHOD(void, onShutdown, (const GattServerShutdownCallback_t &callback), (override));
    MOCK_METHOD(GattServerShutdownCallbackChain_t&, onShutdown, (), (override));
    MOCK_METHOD(void, onUpdatesEnabled, (EventCallback_t callback), (override));
    MOCK_METHOD(void, onUpdatesDisabled, (EventCallback_t callback), (override));
    MOCK_METHOD(void, onConfirmationReceived, (EventCallback_t callback), (override));
    MOCK_METHOD(void, handleDataWrittenEvent, (const GattWriteCallbackParams *params), (override));
    MOCK_METHOD(void, handleDataReadEvent, (const GattReadCallbackParams *params), (override));
    MOCK_METHOD(void, handleEvent, (GattServerEvents::gattEvent_e type, ble::connection_handle_t connHandle, GattAttribute::Handle_t attributeHandle), (override));
    MOCK_METHOD(void, handleDataSentEvent, (unsigned count), (override));
};

}

#endif //BLE_GATTSERVERMOCK_H
