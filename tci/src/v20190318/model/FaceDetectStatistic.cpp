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

#include <tencentcloud/tci/v20190318/model/FaceDetectStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

FaceDetectStatistic::FaceDetectStatistic() :
    m_faceSizeRatioHasBeenSet(false),
    m_frontalFaceCountHasBeenSet(false),
    m_frontalFaceRatioHasBeenSet(false),
    m_frontalFaceRealRatioHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_sideFaceCountHasBeenSet(false),
    m_sideFaceRatioHasBeenSet(false),
    m_sideFaceRealRatioHasBeenSet(false)
{
}

CoreInternalOutcome FaceDetectStatistic::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceSizeRatio") && !value["FaceSizeRatio"].IsNull())
    {
        if (!value["FaceSizeRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `FaceDetectStatistic.FaceSizeRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_faceSizeRatio = value["FaceSizeRatio"].GetDouble();
        m_faceSizeRatioHasBeenSet = true;
    }

    if (value.HasMember("FrontalFaceCount") && !value["FrontalFaceCount"].IsNull())
    {
        if (!value["FrontalFaceCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `FaceDetectStatistic.FrontalFaceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frontalFaceCount = value["FrontalFaceCount"].GetInt64();
        m_frontalFaceCountHasBeenSet = true;
    }

    if (value.HasMember("FrontalFaceRatio") && !value["FrontalFaceRatio"].IsNull())
    {
        if (!value["FrontalFaceRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `FaceDetectStatistic.FrontalFaceRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_frontalFaceRatio = value["FrontalFaceRatio"].GetDouble();
        m_frontalFaceRatioHasBeenSet = true;
    }

    if (value.HasMember("FrontalFaceRealRatio") && !value["FrontalFaceRealRatio"].IsNull())
    {
        if (!value["FrontalFaceRealRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `FaceDetectStatistic.FrontalFaceRealRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_frontalFaceRealRatio = value["FrontalFaceRealRatio"].GetDouble();
        m_frontalFaceRealRatioHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Error("response `FaceDetectStatistic.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("SideFaceCount") && !value["SideFaceCount"].IsNull())
    {
        if (!value["SideFaceCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `FaceDetectStatistic.SideFaceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sideFaceCount = value["SideFaceCount"].GetInt64();
        m_sideFaceCountHasBeenSet = true;
    }

    if (value.HasMember("SideFaceRatio") && !value["SideFaceRatio"].IsNull())
    {
        if (!value["SideFaceRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `FaceDetectStatistic.SideFaceRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sideFaceRatio = value["SideFaceRatio"].GetDouble();
        m_sideFaceRatioHasBeenSet = true;
    }

    if (value.HasMember("SideFaceRealRatio") && !value["SideFaceRealRatio"].IsNull())
    {
        if (!value["SideFaceRealRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `FaceDetectStatistic.SideFaceRealRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sideFaceRealRatio = value["SideFaceRealRatio"].GetDouble();
        m_sideFaceRealRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceDetectStatistic::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_faceSizeRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceSizeRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceSizeRatio, allocator);
    }

    if (m_frontalFaceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FrontalFaceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frontalFaceCount, allocator);
    }

    if (m_frontalFaceRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FrontalFaceRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frontalFaceRatio, allocator);
    }

    if (m_frontalFaceRealRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FrontalFaceRealRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frontalFaceRealRatio, allocator);
    }

    if (m_personIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_sideFaceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SideFaceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sideFaceCount, allocator);
    }

    if (m_sideFaceRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SideFaceRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sideFaceRatio, allocator);
    }

    if (m_sideFaceRealRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SideFaceRealRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sideFaceRealRatio, allocator);
    }

}


double FaceDetectStatistic::GetFaceSizeRatio() const
{
    return m_faceSizeRatio;
}

void FaceDetectStatistic::SetFaceSizeRatio(const double& _faceSizeRatio)
{
    m_faceSizeRatio = _faceSizeRatio;
    m_faceSizeRatioHasBeenSet = true;
}

bool FaceDetectStatistic::FaceSizeRatioHasBeenSet() const
{
    return m_faceSizeRatioHasBeenSet;
}

int64_t FaceDetectStatistic::GetFrontalFaceCount() const
{
    return m_frontalFaceCount;
}

void FaceDetectStatistic::SetFrontalFaceCount(const int64_t& _frontalFaceCount)
{
    m_frontalFaceCount = _frontalFaceCount;
    m_frontalFaceCountHasBeenSet = true;
}

bool FaceDetectStatistic::FrontalFaceCountHasBeenSet() const
{
    return m_frontalFaceCountHasBeenSet;
}

double FaceDetectStatistic::GetFrontalFaceRatio() const
{
    return m_frontalFaceRatio;
}

void FaceDetectStatistic::SetFrontalFaceRatio(const double& _frontalFaceRatio)
{
    m_frontalFaceRatio = _frontalFaceRatio;
    m_frontalFaceRatioHasBeenSet = true;
}

bool FaceDetectStatistic::FrontalFaceRatioHasBeenSet() const
{
    return m_frontalFaceRatioHasBeenSet;
}

double FaceDetectStatistic::GetFrontalFaceRealRatio() const
{
    return m_frontalFaceRealRatio;
}

void FaceDetectStatistic::SetFrontalFaceRealRatio(const double& _frontalFaceRealRatio)
{
    m_frontalFaceRealRatio = _frontalFaceRealRatio;
    m_frontalFaceRealRatioHasBeenSet = true;
}

bool FaceDetectStatistic::FrontalFaceRealRatioHasBeenSet() const
{
    return m_frontalFaceRealRatioHasBeenSet;
}

string FaceDetectStatistic::GetPersonId() const
{
    return m_personId;
}

void FaceDetectStatistic::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool FaceDetectStatistic::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

int64_t FaceDetectStatistic::GetSideFaceCount() const
{
    return m_sideFaceCount;
}

void FaceDetectStatistic::SetSideFaceCount(const int64_t& _sideFaceCount)
{
    m_sideFaceCount = _sideFaceCount;
    m_sideFaceCountHasBeenSet = true;
}

bool FaceDetectStatistic::SideFaceCountHasBeenSet() const
{
    return m_sideFaceCountHasBeenSet;
}

double FaceDetectStatistic::GetSideFaceRatio() const
{
    return m_sideFaceRatio;
}

void FaceDetectStatistic::SetSideFaceRatio(const double& _sideFaceRatio)
{
    m_sideFaceRatio = _sideFaceRatio;
    m_sideFaceRatioHasBeenSet = true;
}

bool FaceDetectStatistic::SideFaceRatioHasBeenSet() const
{
    return m_sideFaceRatioHasBeenSet;
}

double FaceDetectStatistic::GetSideFaceRealRatio() const
{
    return m_sideFaceRealRatio;
}

void FaceDetectStatistic::SetSideFaceRealRatio(const double& _sideFaceRealRatio)
{
    m_sideFaceRealRatio = _sideFaceRealRatio;
    m_sideFaceRealRatioHasBeenSet = true;
}

bool FaceDetectStatistic::SideFaceRealRatioHasBeenSet() const
{
    return m_sideFaceRealRatioHasBeenSet;
}

