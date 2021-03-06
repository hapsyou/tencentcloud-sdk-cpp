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

#include <tencentcloud/ams/v20200608/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ams::V20200608::Model;
using namespace rapidjson;
using namespace std;

DescribeTaskDetailRequest::DescribeTaskDetailRequest() :
    m_taskIdHasBeenSet(false),
    m_showAllSegmentsHasBeenSet(false)
{
}

string DescribeTaskDetailRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_showAllSegmentsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShowAllSegments";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_showAllSegments, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTaskDetailRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTaskDetailRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTaskDetailRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

bool DescribeTaskDetailRequest::GetShowAllSegments() const
{
    return m_showAllSegments;
}

void DescribeTaskDetailRequest::SetShowAllSegments(const bool& _showAllSegments)
{
    m_showAllSegments = _showAllSegments;
    m_showAllSegmentsHasBeenSet = true;
}

bool DescribeTaskDetailRequest::ShowAllSegmentsHasBeenSet() const
{
    return m_showAllSegmentsHasBeenSet;
}


