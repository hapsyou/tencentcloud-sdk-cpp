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

#include <tencentcloud/dayu/v20180709/model/DescribeDDoSNetTrendResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeDDoSNetTrendResponse::DescribeDDoSNetTrendResponse() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDDoSNetTrendResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Business") && !rsp["Business"].IsNull())
    {
        if (!rsp["Business"].IsString())
        {
            return CoreInternalOutcome(Error("response `Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(rsp["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("MetricName") && !rsp["MetricName"].IsNull())
    {
        if (!rsp["MetricName"].IsString())
        {
            return CoreInternalOutcome(Error("response `MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(rsp["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (rsp.HasMember("Period") && !rsp["Period"].IsNull())
    {
        if (!rsp["Period"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = rsp["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Error("response `Data` is not array type"));

        const Value &tmpValue = rsp["Data"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_data.push_back((*itr).GetUint64());
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("Count") && !rsp["Count"].IsNull())
    {
        if (!rsp["Count"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = rsp["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeDDoSNetTrendResponse::GetBusiness() const
{
    return m_business;
}

bool DescribeDDoSNetTrendResponse::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DescribeDDoSNetTrendResponse::GetId() const
{
    return m_id;
}

bool DescribeDDoSNetTrendResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeDDoSNetTrendResponse::GetMetricName() const
{
    return m_metricName;
}

bool DescribeDDoSNetTrendResponse::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

uint64_t DescribeDDoSNetTrendResponse::GetPeriod() const
{
    return m_period;
}

bool DescribeDDoSNetTrendResponse::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string DescribeDDoSNetTrendResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeDDoSNetTrendResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDDoSNetTrendResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeDDoSNetTrendResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<uint64_t> DescribeDDoSNetTrendResponse::GetData() const
{
    return m_data;
}

bool DescribeDDoSNetTrendResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t DescribeDDoSNetTrendResponse::GetCount() const
{
    return m_count;
}

bool DescribeDDoSNetTrendResponse::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}


