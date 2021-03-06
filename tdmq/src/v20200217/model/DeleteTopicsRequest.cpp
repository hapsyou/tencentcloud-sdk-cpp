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

#include <tencentcloud/tdmq/v20200217/model/DeleteTopicsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

DeleteTopicsRequest::DeleteTopicsRequest() :
    m_topicSetsHasBeenSet(false)
{
}

string DeleteTopicsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicSetsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicSets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicSets.begin(); itr != m_topicSets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<TopicRecord> DeleteTopicsRequest::GetTopicSets() const
{
    return m_topicSets;
}

void DeleteTopicsRequest::SetTopicSets(const vector<TopicRecord>& _topicSets)
{
    m_topicSets = _topicSets;
    m_topicSetsHasBeenSet = true;
}

bool DeleteTopicsRequest::TopicSetsHasBeenSet() const
{
    return m_topicSetsHasBeenSet;
}


