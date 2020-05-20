/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tcb/v20180608/model/OrderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

OrderInfo::OrderInfo() :
    m_tranIdHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_tranTypeHasBeenSet(false),
    m_tranStatusHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_payModeHasBeenSet(false)
{
}

CoreInternalOutcome OrderInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TranId") && !value["TranId"].IsNull())
    {
        if (!value["TranId"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderInfo.TranId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranId = string(value["TranId"].GetString());
        m_tranIdHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("TranType") && !value["TranType"].IsNull())
    {
        if (!value["TranType"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderInfo.TranType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranType = string(value["TranType"].GetString());
        m_tranTypeHasBeenSet = true;
    }

    if (value.HasMember("TranStatus") && !value["TranStatus"].IsNull())
    {
        if (!value["TranStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderInfo.TranStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranStatus = string(value["TranStatus"].GetString());
        m_tranStatusHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderInfo.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tranIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tranId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_tranTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tranType.c_str(), allocator).Move(), allocator);
    }

    if (m_tranStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tranStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

}


string OrderInfo::GetTranId() const
{
    return m_tranId;
}

void OrderInfo::SetTranId(const string& _tranId)
{
    m_tranId = _tranId;
    m_tranIdHasBeenSet = true;
}

bool OrderInfo::TranIdHasBeenSet() const
{
    return m_tranIdHasBeenSet;
}

string OrderInfo::GetPackageId() const
{
    return m_packageId;
}

void OrderInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool OrderInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string OrderInfo::GetTranType() const
{
    return m_tranType;
}

void OrderInfo::SetTranType(const string& _tranType)
{
    m_tranType = _tranType;
    m_tranTypeHasBeenSet = true;
}

bool OrderInfo::TranTypeHasBeenSet() const
{
    return m_tranTypeHasBeenSet;
}

string OrderInfo::GetTranStatus() const
{
    return m_tranStatus;
}

void OrderInfo::SetTranStatus(const string& _tranStatus)
{
    m_tranStatus = _tranStatus;
    m_tranStatusHasBeenSet = true;
}

bool OrderInfo::TranStatusHasBeenSet() const
{
    return m_tranStatusHasBeenSet;
}

string OrderInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void OrderInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OrderInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string OrderInfo::GetCreateTime() const
{
    return m_createTime;
}

void OrderInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OrderInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OrderInfo::GetPayMode() const
{
    return m_payMode;
}

void OrderInfo::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool OrderInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

