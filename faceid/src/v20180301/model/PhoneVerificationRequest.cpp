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

#include <tencentcloud/faceid/v20180301/model/PhoneVerificationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

PhoneVerificationRequest::PhoneVerificationRequest() :
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneHasBeenSet(false)
{
}

string PhoneVerificationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_phone.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PhoneVerificationRequest::GetIdCard() const
{
    return m_idCard;
}

void PhoneVerificationRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool PhoneVerificationRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string PhoneVerificationRequest::GetName() const
{
    return m_name;
}

void PhoneVerificationRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PhoneVerificationRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PhoneVerificationRequest::GetPhone() const
{
    return m_phone;
}

void PhoneVerificationRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool PhoneVerificationRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}


