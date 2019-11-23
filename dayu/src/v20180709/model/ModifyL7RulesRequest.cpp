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

#include <tencentcloud/dayu/v20180709/model/ModifyL7RulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

ModifyL7RulesRequest::ModifyL7RulesRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ruleHasBeenSet(false)
{
}

string ModifyL7RulesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_rule.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyL7RulesRequest::GetBusiness() const
{
    return m_business;
}

void ModifyL7RulesRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyL7RulesRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string ModifyL7RulesRequest::GetId() const
{
    return m_id;
}

void ModifyL7RulesRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyL7RulesRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

L7RuleEntry ModifyL7RulesRequest::GetRule() const
{
    return m_rule;
}

void ModifyL7RulesRequest::SetRule(const L7RuleEntry& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ModifyL7RulesRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}


