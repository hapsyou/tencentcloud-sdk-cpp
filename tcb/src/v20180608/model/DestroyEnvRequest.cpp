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

#include <tencentcloud/tcb/v20180608/model/DestroyEnvRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

DestroyEnvRequest::DestroyEnvRequest() :
    m_envIdHasBeenSet(false),
    m_isForceHasBeenSet(false)
{
}

string DestroyEnvRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_isForceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsForce";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isForce, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DestroyEnvRequest::GetEnvId() const
{
    return m_envId;
}

void DestroyEnvRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DestroyEnvRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

bool DestroyEnvRequest::GetIsForce() const
{
    return m_isForce;
}

void DestroyEnvRequest::SetIsForce(const bool& _isForce)
{
    m_isForce = _isForce;
    m_isForceHasBeenSet = true;
}

bool DestroyEnvRequest::IsForceHasBeenSet() const
{
    return m_isForceHasBeenSet;
}


