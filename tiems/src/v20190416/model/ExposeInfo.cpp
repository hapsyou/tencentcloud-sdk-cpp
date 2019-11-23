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

#include <tencentcloud/tiems/v20190416/model/ExposeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace rapidjson;
using namespace std;

ExposeInfo::ExposeInfo() :
    m_exposeTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

CoreInternalOutcome ExposeInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ExposeType") && !value["ExposeType"].IsNull())
    {
        if (!value["ExposeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExposeInfo.ExposeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exposeType = string(value["ExposeType"].GetString());
        m_exposeTypeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExposeInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExposeInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExposeInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExposeInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_exposeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExposeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_exposeType.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

}


string ExposeInfo::GetExposeType() const
{
    return m_exposeType;
}

void ExposeInfo::SetExposeType(const string& _exposeType)
{
    m_exposeType = _exposeType;
    m_exposeTypeHasBeenSet = true;
}

bool ExposeInfo::ExposeTypeHasBeenSet() const
{
    return m_exposeTypeHasBeenSet;
}

string ExposeInfo::GetIp() const
{
    return m_ip;
}

void ExposeInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ExposeInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string ExposeInfo::GetVpcId() const
{
    return m_vpcId;
}

void ExposeInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ExposeInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ExposeInfo::GetSubnetId() const
{
    return m_subnetId;
}

void ExposeInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ExposeInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

